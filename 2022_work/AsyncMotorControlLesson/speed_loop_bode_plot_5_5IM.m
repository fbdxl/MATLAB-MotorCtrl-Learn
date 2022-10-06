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
%典型开环伯德图
%=============================================%
f=linspace(0.1,1000,1e6);
w=2*pi*f;
s=1j*w;

Gmec=Jbase./(J*s);

Kp=13.79;
Taoi=0.12;
Gpi=Kp*(1+1/Taoi./s);

fcutLPF=100;
TaoLPF=1/(2*pi*fcutLPF);
GLPF=1./(1+TaoLPF*s);

Gv=Gpi.*Gmec.*GLPF;

GvMag = 20*log10(abs(Gv));
GvPhase = angle(Gv)*180/pi;


hgcf=figure;
hgcaMag=subplot(2,1,1);
hlineGv=semilogx(f,GvMag);grid on; hold on;
hlineGv.DisplayName='Gv';
%axis([-inf,inf,-inf,inf]);

hgcaPhase=subplot(2,1,2);
semilogx(f,GvPhase);grid on; hold on;
%axis([-inf,inf,-inf,inf]);





fcornerLPF = 1/TaoLPF/2/pi;
fpi = 1/Taoi/2/pi;
iTmp=find(GvMag<0,1);
fcut=f(iTmp);
PhaseMargin=GvPhase(iTmp)+180;

%标注图形
%legend(hgcaMag);
Yrange=hgcaMag.YLim;
semilogx(hgcaMag,[fcornerLPF fcornerLPF],[Yrange(1) Yrange(2)],'r'); 
semilogx(hgcaMag,[fpi fpi],[Yrange(1) Yrange(2)],'r'); 
semilogx(hgcaMag,[fcut fcut],[Yrange(1) Yrange(2)],'g');

    xlim=get(hgcaPhase,'Xlim');
    semilogx(hgcaPhase,[xlim(1),xlim(2)],[-180,-180],'r');%标注-180°线
    semilogx(hgcaPhase,[xlim(1),xlim(2)],[-90,-90],'r');
    
set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',14);


