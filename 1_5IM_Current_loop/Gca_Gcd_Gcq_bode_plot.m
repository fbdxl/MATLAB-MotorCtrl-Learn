clc;clear;close all;

%130kW异步机参数
% Lls=73e-3/2/pi/45;
% Llr=73e-3/2/pi/45;
% Rs=12e-3;
% Rr=14e-3;
% Lm=1.923/2/pi/45;
% Ls=Lm+Lls;
% Lr=Lm+Llr;
% Tr=Lr/Rr;
% Ts=Ls/Rs;
% J=6.34;
% 
% PN=130e3;
% VN=380;
% IN=245;
% fN=45;
% n=880;

%1.5kW异步机参数
Lls=14.2e-3;
Llr=14.2e-3;
Rs=3.7;
Rr=2.67;
Lm=0.32;
Ls=Lm+Lls;
Lr=Lm+Llr;
Tr=Lr/Rr;
Ts=Ls/Rs;
J=0.03;

PN=1500;
VN=380;
IN=3.47;
fN=50;
n=1445;

np=ceil(60*fN/n);
Pbase=PN;
Vbase=VN*sqrt(2)/sqrt(3);
Ibase=2*Pbase/Vbase/3;
Zbase=Vbase/Ibase;
Webase=2*pi*fN;
Wmbase=Webase/np;
Tbase=1/Webase;
Lbase=Zbase/Webase;
Tembase=Pbase/Wmbase;
Phibase=Vbase/Webase;
Jbase=Tembase/Wmbase;

RsPU=Rs/Zbase;
RrPU=Rr/Zbase;
LmPU=Lm/Lbase;
LlsPU=Lls/Lbase;
LlrPU=Llr/Lbase;
LsPU=LmPU+LlsPU;
LrPU=LmPU+LlrPU;
JPU=J/Jbase;
LeakCoef=1-LmPU^2/LsPU/LrPU;
TrPU=Tr/Tbase;
TsPU=Ts/Tbase;

%=============================================%
%控制对象传递函数
%=============================================%
f=linspace(0.1,1000,1e6);
w=2*pi*f;
s=1j*w;
%Gcd Tansfer function
Num=Tr*s+1;
Denom=LeakCoef*Tr*Ts*s.^2+(Tr+Ts)*s+1;
Gcd=Num./Denom./RsPU;

Gcq=1./(1+LeakCoef*Ts*s)/RsPU;

Gca=Zbase*1./s/(Lls+Llr);

GcdEqual=1./(2+LeakCoef*Ts*s)/RsPU;

%semilogx(f,20*log10(abs(Gcd)), f,20*log10(abs(Gcq)),f,20*log10(abs(Gca)));grid on;
GcdMag = 20*log10(abs(Gcd));
GcdPhase = angle(Gcd)*180/pi;

GcqMag = 20*log10(abs(Gcq));
GcqPhase = angle(Gcq)*180/pi;

GcaMag = 20*log10(abs(Gca));
GcaPhase = angle(Gca)*180/pi;

hgcf=figure;
hgca=subplot(2,1,1);
hline=semilogx(f,GcdMag, f,GcqMag);grid on; hold on;
axis([-inf,inf,-inf,35]);
fcorner = 1/Tr/2/pi;
fcornerGcq = 1/LeakCoef/Ts/2/pi;

hgca=subplot(2,1,2);
semilogx(f,GcdPhase, f,GcqPhase);grid on; hold on;
axis([-inf,inf,-100,10]);

set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',12);

%=============================================%
%电流环开环传递函数
%=============================================%
Kp=0.2;Taoi=10e-3;
Gpi=Kp*(1+1/Taoi./s);

fctrl=6000;
Tctrl=1/fctrl;
Gd=exp(-1.5*Tctrl.*s);

Gc=Gpi.*Gd.*Gcq;
GcMag = 20*log10(abs(Gc));
GcPhase = angle(Gc)*180/pi;
GcPhase(GcPhase>0)=GcPhase(GcPhase>0)-360;

hgcf=figure;
hgca=subplot(2,1,1);
hline=semilogx(f,GcMag,'b');grid on; hold on;
%axis([-inf,inf,-inf,35]);
fcorner1 = 1/Taoi/2/pi;
fcorner2 = 1/LeakCoef/Ts/2/pi;

hgca=subplot(2,1,2);
semilogx(f,GcPhase,'b');grid on; hold on;
%axis([-inf,inf,-100,10]);

set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',12);