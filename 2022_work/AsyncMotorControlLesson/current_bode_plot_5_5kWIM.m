clc;clear;close all;

%5.5kW异步机参数
Lls=5.66e-3;
Llr=5.66e-3;
Rs=1.08;
Rr=0.616;
Lm=0.118;
Ls=Lm+Lls;
Lr=Lm+Llr;
Tr=Lr/Rr;
Ts=Ls/Rs;
J=0.23;

PN=5500;
VN=380;
IN=11.7;
fN=50;
n=1440;

%=============================================%
%控制基准值计算
%=============================================%
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

%=============================================%
%标么化电机参数
%=============================================%
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

fctrl=6000;
Tctrl=1/fctrl;
Gd=exp(-1.5*Tctrl.*s);

%=============================================%
%固定fcut，调整PM
%=============================================%
hgcf=figure;
%fcut=100+400*(0/3);
%fpiBox=zeros(1,90/15+1);
%n=1;



Taoi=0.004;
Kp=0.66;  %Kp Taoi的值
Gpi=Kp*(1+1/Taoi./s);

Gc=Gpi.*Gd.*Gcq;
GcMag = 20*log10(abs(Gc));
GcPhase = angle(Gc)*180/pi;
GcPhase(GcPhase>0)=GcPhase(GcPhase>0)-360;


fpi = 1/Taoi/2/pi;
fcorner2 = 1/LeakCoef/Ts/2/pi;
indexTmp=find(GcMag<0,1);
fcut=f(indexTmp);
PhaseMargin=GcPhase(indexTmp)+180;

hgca_Mag=subplot(2,1,1);
hline=semilogx(f,GcMag);grid on; hold on;

hgca_Phase=subplot(2,1,2);
semilogx(f,GcPhase);grid on; hold on;
    
    yrange=get(hgca_Mag,'Ylim');

    semilogx(hgca_Mag,[fpi,fpi],[yrange(1),yrange(2)],'r');%标注fpi
    ylim(hgca_Mag,[yrange(1) yrange(2)]);
    
    semilogx(hgca_Mag,[fcorner2,fcorner2],[yrange(1),yrange(2)],'y');%标注fcorner2
    semilogx(hgca_Mag,[fcut,fcut],[yrange(1),yrange(2)],'g');%标注fcut
    
    xlim=get(hgca_Phase,'Xlim');
    semilogx(hgca_Phase,[xlim(1),xlim(2)],[-180,-180],'r');%标注-180°线
    semilogx(hgca_Phase,[xlim(1),xlim(2)],[-90,-90],'r');
    
set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',14);


