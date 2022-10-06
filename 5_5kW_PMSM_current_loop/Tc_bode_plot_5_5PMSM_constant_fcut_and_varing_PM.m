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
Phif=Vnoload*1.414/1.732/(2*pi*fN);
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
f=linspace(0.1,1000,1e6);
w=2*pi*f;
s=1j*w;

Gcd=Zbase./(Rs+Ld*s);

Gcq=Zbase./(Rs+Lq*s);

%semilogx(f,20*log10(abs(Gcd)), f,20*log10(abs(Gcq)),f,20*log10(abs(Gca)));grid on;
GcdMag = 20*log10(abs(Gcd));
GcdPhase = angle(Gcd)*180/pi;

GcqMag = 20*log10(abs(Gcq));
GcqPhase = angle(Gcq)*180/pi;

hgcf=figure;
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
%固定fcut，调整PM
%=============================================%
hgcf=figure;
fcut=100+400*(0/4);
str=[];
fpiBox=zeros(1,90/15+1);
n=1;
for PM=15:15:75

    
    Taoi=tand(PM-90+atand(Tq*2*pi*fcut)+540*fcut/fctrl)/(2*pi*fcut);
    Nom=Taoi*2*pi*fcut*RsPU*sqrt(1+(Tq)^2*(2*pi*fcut)^2);
    Denom=sqrt(1+(Taoi)^2*(2*pi*fcut)^2);
    %Kp=RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2); %Kp的简化表达式
    Kp=Nom/Denom;  %Kp的精确解
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gc=Gpi.*Gd.*Gcq;
    GcMag = 20*log10(abs(Gc));
    GcPhase = angle(Gc)*180/pi;
    GcPhase(GcPhase>0)=GcPhase(GcPhase>0)-360;
    fpi = 1/Taoi/2/pi;
    fcorner2 = 1/Tq/2/pi;
    fpiBox(n) = fpi;n=n+1;

    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,GcMag);grid on; hold on;
    hline.DisplayName = strcat('PM=',num2str(PM),'^{\circ}');
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,GcPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
end
    %legend(hgca_Mag);
    
    yrange=get(hgca_Mag,'Ylim');
    for n=1:90/15+1
        %if ~isempty(fpiBox(n))
        if fpiBox(n) ~= 0
            semilogx(hgca_Mag,[fpiBox(n),fpiBox(n)],[yrange(1),yrange(2)],'r');%标注fpi
            ylim(hgca_Mag,[yrange(1) yrange(2)]);
        end
    end
    
    semilogx(hgca_Mag,[fcorner2,fcorner2],[yrange(1),yrange(2)],'y');%标注fcorner2
    semilogx(hgca_Mag,[fcut,fcut],[yrange(1),yrange(2)],'g');%标注fcut
    
    xlim=get(hgca_Phase,'Xlim');
    semilogx(hgca_Phase,[xlim(1),xlim(2)],[-180,-180],'r');%标注-180°线
    semilogx(hgca_Phase,[xlim(1),xlim(2)],[-90,-90],'r');
    
 set(findobj('type','line'),'LineWidth',2);
 set(findobj('type','axes'),'FontSize',14);


%=============================================%
%闭环传递函数
%=============================================%
hgcf=figure;
%fcut=100+400*(0/4);
%str=[];
%fpiTcBox=zeros(1,90/15+1);
fcutTcBox=zeros(1,90/15+1);
n=1;
for PM=15:15:75
    
    Taoi=tand(PM-90+atand(Tq*2*pi*fcut)+540*fcut/fctrl)/(2*pi*fcut);
    Nom=Taoi*2*pi*fcut*RsPU*sqrt(1+(Tq)^2*(2*pi*fcut)^2);
    Denom=sqrt(1+(Taoi)^2*(2*pi*fcut)^2);
    %Kp=RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2); %Kp的简化表达式
    Kp=Nom/Denom;  %Kp的精确解
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gc=Gpi.*Gd.*Gcq;
    Tc=Gc./(1+Gc);
    TcMag = 20*log10(abs(Tc));
    TcPhase = angle(Tc)*180/pi;
    TcPhase(TcPhase>0)=TcPhase(TcPhase>0)-360;
    
    indexTmp=find(TcPhase<-45,1);
    fcutTc = f(indexTmp); %这里只计算fcut，不计算fpi，因为此时PI环节不是闭环传递函数的分解出来的环节
    
    fcutTcBox(n) = fcutTc;

    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,TcMag);grid on; hold on;
    hline.DisplayName = strcat('PM=',num2str(PM),'^{\circ}');
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,TcPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
    
    n=n+1;
end
    %legend(hgca_Mag);
    
    yrange=get(hgca_Mag,'Ylim');
    xrange=get(hgca_Mag,'Xlim');
    for n=1:90/15+1
        %if ~isempty(fpiBox(n))
        if fcutTcBox(n) ~= 0
            semilogx(hgca_Mag,[fcutTcBox(n),fcutTcBox(n)],[yrange(1),yrange(2)],'g');%标注fpi
            ylim(hgca_Mag,[yrange(1) yrange(2)]);
        end
    end
    
    semilogx(hgca_Mag,[xrange(1),xrange(2)],[-3,-3],'r--');%标注fcorner2
    
    xlim=get(hgca_Phase,'Xlim');
    semilogx(hgca_Phase,[xlim(1),xlim(2)],[-180,-180],'r--');%标注-180°线
    semilogx(hgca_Phase,[xlim(1),xlim(2)],[-45,-45],'r--');
    
 set(findobj('type','line'),'LineWidth',2);
 set(findobj('type','axes'),'FontSize',14);
 
 
 