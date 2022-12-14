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
J=0.06977;

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
%典型开环伯德图
%=============================================%
f=linspace(0.1,1000,1e6);
w=2*pi*f;
s=1j*w;

Gmec=JPU./(J*s);

Kp=22;
Taoi=0.072;
Gpi=Kp*(1+1/Taoi./s);

TLPF=1/(2*pi*100);
GLPF=1./(1+TLPF*s);

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

set(findobj('type','line'),'LineWidth',2);
set(findobj('type','axes'),'FontSize',12);

%标注图形
%legend(hgcaMag);

Yrange=hgcaPhase.YLim;
fcornerLPF = 1/TLPF/2/pi;
fpi = 1/Taoi/2/pi;
iTmp=find(GvMag<0,1);
fcut=f(iTmp);
semilogx(hgcaPhase,[fcornerLPF fcornerLPF],[Yrange(1) Yrange(2)],'r');


% fctrl=6000;
% Tctrl=1/fctrl;
% Gd=exp(-1.5*Tctrl.*s);

%=============================================%
%固定fcut，调整PM
%=============================================%
hgcf=figure;
fcutBox=[1 5 10 20];
fcut=fcutBox(end);
str=[];
fpiBox=zeros(1,90/15+1);
n=1;
for PM=15:15:80

    
    Taoi=tand(PM+atand(TLPF*2*pi*fcut))/(2*pi*fcut)
    Nom=Taoi*(2*pi*fcut)^2*JPU*sqrt(1+(TLPF*2*pi*fcut)^2);
    Denom=sqrt(1+(Taoi)^2*(2*pi*fcut)^2);
    %Kp=RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2); %Kp的简化表达式
    Kp=Nom/Denom  %Kp的精确解
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gv=Gpi.*GLPF.*Gmec;
    GvMag = 20*log10(abs(Gv));
    GvPhase = angle(Gv)*180/pi;
    GvPhase(GvPhase>0)=GvPhase(GvPhase>0)-360;
    fpi = 1/Taoi/2/pi;
    fcorner2 = 1/TLPF/2/pi;
    fpiBox(n) = fpi;n=n+1;

    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,GvMag);grid on; hold on;
    hline.DisplayName = strcat('PM=',num2str(PM),'^{\circ}');
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,GvPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
end
    %legend(hgca_Mag);
    %{
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
%}


%=============================================%
%固定PM，调整fcut
%=============================================%
hgcf=figure;
PMBox=[15 45 60 75 80];
PM=PMBox(end);
str=[];
fpiBox=zeros(1,90/15+1);
n=1;
for fcut=5:5:15

    
    Taoi=tand(PM+atand(TLPF*2*pi*fcut))/(2*pi*fcut)
    Nom=Taoi*(2*pi*fcut)^2*JPU*sqrt(1+(TLPF*2*pi*fcut)^2);
    Denom=sqrt(1+(Taoi)^2*(2*pi*fcut)^2);
    %Kp=RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2); %Kp的简化表达式
    Kp=Nom/Denom  %Kp的精确解
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gv=Gpi.*GLPF.*Gmec;
    GvMag = 20*log10(abs(Gv));
    GvPhase = angle(Gv)*180/pi;
    GvPhase(GvPhase>0)=GvPhase(GvPhase>0)-360;
    fpi = 1/Taoi/2/pi;
    fcorner2 = 1/TLPF/2/pi;
    fpiBox(n) = fpi;n=n+1;

    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,GvMag);grid on; hold on;
    hline.DisplayName = strcat('PM=',num2str(PM),'^{\circ}');
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,GvPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
end
    %legend(hgca_Mag);
    %{
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
%}
    
    
%=============================================%
%固定PM，调整fcut
%=============================================%
hgcf=figure;
PMBox=[15 45 60 75 80];
PM=PMBox(end);
str=[];
fpiBox=zeros(1,90/15+1);
n=1;
Taoi=0.0039;
for Kp=17.7786:5:40

    
%     Taoi=tand(PM+atand(TLPF*2*pi*fcut))/(2*pi*fcut)
%     Nom=Taoi*(2*pi*fcut)^2*JPU*sqrt(1+(TLPF*2*pi*fcut)^2);
%     Denom=sqrt(1+(Taoi)^2*(2*pi*fcut)^2);
%     %Kp=RsPU*sqrt(1+(LeakCoef*Ts)^2*(2*pi*fcut)^2); %Kp的简化表达式
%     Kp=Nom/Denom  %Kp的精确解
    Gpi=Kp*(1+1/Taoi./s);
    %str=[str;strcat('PM=',num2str(PM),'^{\circ}')];

    Gv=Gpi.*GLPF.*Gmec;
    GvMag = 20*log10(abs(Gv));
    GvPhase = angle(Gv)*180/pi;
    GvPhase(GvPhase>0)=GvPhase(GvPhase>0)-360;
    fpi = 1/Taoi/2/pi;
    fcorner2 = 1/TLPF/2/pi;
    fpiBox(n) = fpi;n=n+1;

    hgca_Mag=subplot(2,1,1);
    hline=semilogx(f,GvMag);grid on; hold on;
    hline.DisplayName = strcat('PM=',num2str(PM),'^{\circ}');
    %axis([-inf,inf,-inf,35]);

    hgca_Phase=subplot(2,1,2);
    semilogx(f,GvPhase);grid on; hold on;
    %axis([-inf,inf,-100,10]);
end
    %legend(hgca_Mag);
    %{
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
%}
