clc;clear;close all;

%5.5kW永磁机参数
PN=5.5e3;
VN=380;
IN=9.5;
fN=50;
n=1500;

Ld=12.56e-3;
Lq=22.44e-3;
Rs=1.104;
Vnoload=380;
Phif=Vnoload/(2*pi*fN);
J=0.06;

Td=Ld/Rs;
Tq=Lq/Rs;




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
LdPU=Ld/Lbase;
LqPU=Lq/Lbase;
JPU=J/Jbase;

TdPU=Td/Tbase;
TqPU=Tq/Tbase;

%=============================================%
%控制对象传递函数
%=============================================%
f=linspace(0.1,2000,1e6);
w=2*pi*f;
s=1j*w;

Gcd=Zbase./(Rs+Ld*s);

Gcq=Zbase./(Rs+Lq*s);

%semilogx(f,20*log10(abs(Gcd)), f,20*log10(abs(Gcq)),f,20*log10(abs(Gca)));grid on;
GcdMag = 20*log10(abs(Gcd));
GcdPhase = angle(Gcd)*180/pi;

GcqMag = 20*log10(abs(Gcq));
GcqPhase = angle(Gcq)*180/pi;

hgcf_Gc=figure;
hgcaMag=subplot(2,1,1);
hlineGcd=semilogx(f,GcdMag);grid on; hold on;
hlineGcq=semilogx(f,GcqMag);grid on; hold on;
hlineGcd.DisplayName='Gcd';
hlineGcq.DisplayName='Gcq';
%axis([-inf,inf,-inf,inf]);

hgcaPhase=subplot(2,1,2);
semilogx(f,GcdPhase, f,GcqPhase);grid on; hold on;
%axis([-inf,inf,-inf,inf]);

set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',12);

%标注图形
legend(hgcaMag);

Yrange=hgcaPhase.YLim;
fcornerGcd = 1/Td/2/pi;
fcornerGcq = 1/Tq/2/pi;
semilogx(hgcaPhase,[fcornerGcd fcornerGcd],[Yrange(1) Yrange(2)],'r');
semilogx(hgcaPhase,[fcornerGcq fcornerGcq],[Yrange(1) Yrange(2)],'r');


fctrl=6000;
Tctrl=1/fctrl;
Gd=exp(-1.5*Tctrl.*s);

%=============================================%
%开环传递函数
%=============================================%
hgcf=figure;
Taoi=0.004;
KpStart=0.5;
KpEnd=5;
KpStep=1;
fpiBox=zeros(1,KpEnd/KpStep+1);
fcutBox=zeros(1,KpEnd/KpStep+1);
PMBox=zeros(1,KpEnd/KpStep+1);

n=1;
for Kp=KpStart:KpStep:KpEnd
    
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gc=Gpi.*Gd.*Gcq;
    GcMag = 20*log10(abs(Gc));
    GcPhase = angle(Gc)*180/pi;
    GcPhase(GcPhase>0)=GcPhase(GcPhase>0)-360;
    
    fpi = 1/Taoi/2/pi;
    fcorner2 = 1/Tq/2/pi;
    indexTmp= find(GcMag<0,1);
    fcut=f(indexTmp);
    PM=GcPhase(indexTmp)+180;
    
    fpiBox(n) = fpi;
    fcutBox(n) = fcut;
    PMBox(n) = PM;

    
    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,GcMag);grid on; hold on;
    hline.DisplayName = strcat('Kp=',num2str(Kp));
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,GcPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
    
    n=n+1;
end
    %legend(hgca_Mag);
    
%     yrange=get(hgca_Mag,'Ylim');
%     for n=1:KpEnd/KpStep+1
%         %if ~isempty(fpiBox(n))
%         if fcutBox(n) ~= 0
%             semilogx(hgca_Mag,[fcutBox(n),fcutBox(n)],[yrange(1),yrange(2)],'g');%标注fcut
%             ylim(hgca_Mag,[yrange(1) yrange(2)]);
%         end
%     end
%     
%     semilogx(hgca_Mag,[fpiBox(1),fpiBox(1)],[yrange(1),yrange(2)],'r');%标注fpi
%     semilogx(hgca_Mag,[fcorner2,fcorner2],[yrange(1),yrange(2)],'y');%标注fcorner2
%     
%     xlim=get(hgca_Phase,'Xlim');
%     semilogx(hgca_Phase,[xlim(1),xlim(2)],[-180,-180],'r--');%标注-180°线
%     semilogx(hgca_Phase,[xlim(1),xlim(2)],[-90,-90],'r--');%标注-90°线
%     for n=1:KpEnd/KpStep+1
%         if PMBox(n)~=0
%             semilogx(hgca_Phase,[fcutBox(n),fcutBox(n)],[-180,-180+PMBox(n)],'b');%标注PM
%         end
%     end
 
 hgca_Mag.XLim=[1e-1,1e3];
 hgca_Phase.XLim=[1e-1,1e3];
 set(findobj('type','line'),'LineWidth',2);
 set(findobj('type','axes'),'FontSize',14);
 

%=============================================%
%闭环传递函数
%=============================================%
hgcf=figure;
Taoi=0.004;
% KpStart=0.5;
% KpEnd=5;
% KpStep=0.5;
fcut_TcBox=zeros(1,KpEnd/KpStep+1);
PM_TcBox=zeros(1,KpEnd/KpStep+1);

n=1;
for Kp=KpStart:KpStep:KpEnd
    
    Gpi=Kp*(1+1/Taoi./s);
    Gc=Gpi.*Gd.*Gcq;

    Tc=Gc./(1+Gc);
    TcMag=20*log10(abs(Tc));
    TcPhase=angle(Tc)*180/pi;
    TcPhase(TcPhase>0)=TcPhase(TcPhase>0)-360;
    
    indexTmp=find(TcPhase<-45,1);
    fcut_Tc=f(indexTmp);
    PM_Tc=TcPhase(indexTmp);
    
    fcut_TcBox(n)=fcut_Tc;
    PM_TcBox(n)=PM_Tc;
    
    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,TcMag);grid on; hold on;
    hline.DisplayName = strcat('Kp=',num2str(Kp));
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,TcPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
    
    n=n+1;
end
    legend(hgca_Mag);
    
%     yrange=get(hgca_Mag,'Ylim');
%     xrange=get(hgca_Mag,'Xlim');
%     for n=1:KpEnd/KpStep+1
%         %if ~isempty(fpiBox(n))
%         if fcutBox(n) ~= 0
%             semilogx(hgca_Mag,[fcut_TcBox(n),fcut_TcBox(n)],[yrange(1),yrange(2)],'g');%标注fcut
%             ylim(hgca_Mag,[yrange(1) yrange(2)]);
%         end
%     end
%     
%     semilogx(hgca_Mag,[xrange(1),xrange(2)],[-3,-3],'r--');%标注-3dB
%     
%     xlim=get(hgca_Phase,'Xlim');
%     semilogx(hgca_Phase,[xlim(1),xlim(2)],[-45,-45],'r--');%标注-45°线
%     semilogx(hgca_Phase,[xlim(1),xlim(2)],[-180,-180],'r--');%标注-180°线
%     for n=1:KpEnd/KpStep+1
%         if PMBox(n)~=0
%             %semilogx(hgca_Phase,[fcut_TcBox(n),fcut_TcBox(n)],[0,PM_TcBox(n)],'b');%标注PM
%         end
%     end
    
 set(findobj('type','line'),'LineWidth',2);
 set(findobj('type','axes'),'FontSize',14);
 hgca_Mag.XLim=[1e-1,1e4];
 hgca_Phase.XLim=[1e-1,1e4]; 
 