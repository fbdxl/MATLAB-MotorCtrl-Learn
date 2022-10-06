clc;clear;close all;

%130kW�첽������
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

%1.5kW�첽������
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

%=============================================%
%���ƻ�׼ֵ����
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
%��ô���������
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
%���ƶ��󴫵ݺ���
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
%�̶�fcut������PM
%=============================================%
hgcf=figure;
PM=15+15*2;
str=[];
fpiBox=zeros(1,400/100+1);
n=1;
for fcut=100:100:500

    
    Taoi=tand(PM-90+atand(LeakCoef*Ts*2*pi*fcut)+540*fcut/fctrl)/(2*pi*fcut)
    Nom=Taoi*2*pi*fcut*RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2);
    Denom=sqrt(1+(Taoi)^2*(2*pi*fcut)^2);
    %Kp=RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2); %Kp�ļ򻯱��ʽ
    Kp=Nom/Denom  %Kp�ľ�ȷ��
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gc=Gpi.*Gd.*Gcq;
    GcMag = 20*log10(abs(Gc));
    GcPhase = angle(Gc)*180/pi;
    GcPhase(GcPhase>0)=GcPhase(GcPhase>0)-360;
    fpi = 1/Taoi/2/pi;
    fcorner2 = 1/LeakCoef/Ts/2/pi;
    fpiBox(n) = fpi;n=n+1;

    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,GcMag);grid on; hold on;
    hline.DisplayName = strcat('PM=',num2str(PM),'^{\circ}');
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,GcPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
end
    legend(hgca_Mag);
    
%     yrange=get(hgca_Mag,'Ylim');
%     for n=1:400/100+1
%         %if ~isempty(fpiBox(n))
%         if fpiBox(n) ~= 0
%             semilogx(hgca_Mag,[fpiBox(n),fpiBox(n)],[yrange(1),yrange(2)],'r');%��עfpi
%             ylim(hgca_Mag,[yrange(1) yrange(2)]);
%         end
%     end
%     
%     semilogx(hgca_Mag,[fcorner2,fcorner2],[yrange(1),yrange(2)],'y');%��עfcorner2
%     semilogx(hgca_Mag,[fcut,fcut],[yrange(1),yrange(2)],'g');%��עfcut
%     
%     xlim=get(hgca_Phase,'Xlim');
%     semilogx(hgca_Phase,[xlim(1),xlim(2)],[-180,-180],'r');%��ע-180����
%     semilogx(hgca_Phase,[xlim(1),xlim(2)],[-90,-90],'r');
    
set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',14);