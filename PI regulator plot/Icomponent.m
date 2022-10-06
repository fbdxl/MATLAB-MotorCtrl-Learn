clc;clear;close all;
Kp=27.9;
Taoi=0.074;
f=linspace(0.1,100,10000);
w=2*pi*f;
s=1j*w;

Rad2Hz=@(x)x/2/pi;
Hz2Rad=@(x)x*2*pi;

%Corner Frequencyת��Ƶ�ʶ���
Wcor=1/Taoi;
Fcor=Rad2Hz(Wcor);

%���ֻ��ڲ���ͼ
figure(1);
Ts=Kp./(Taoi*s);
Lw=20*log10(abs(Ts)); %������Ƶ����
Phiw=angle(Ts); %������Ƶ����
ax1=subplot(2,1,1);
semilogx(f,Lw); grid on;hold on;
Ylim=get(gca,'Ylim'); %��ȡͼ�����귶Χ
Xlim=get(gca,'Xlim');
semilogx([Rad2Hz(Wcor) Rad2Hz(Wcor)],[Ylim(1),20*log10(Kp)],'m--');
semilogx([Xlim(1) Rad2Hz(Wcor)],[20*log10(Kp),20*log10(Kp)],'m--');
%text('Interpreter','latex','position',[1/Taoi,20*log10(Kp)],'string','$(\frac{1}{\tau},20*log10(K_p))$\it');
semilogx(Rad2Hz(Wcor),20*log10(Kp),'o');
ax2=subplot(2,1,2);
semilogx(f,Phiw*180/pi); grid on;hold on;

%һ��΢�ֻ��ڲ���ͼ
figure(2);
Ts2=Taoi*s+1;
Lw2=20*log10(abs(Ts2));
Phiw2=angle(Ts2);
subplot(2,1,1);
semilogx(f,Lw2);grid on; hold on;
Ylim=get(gca,'Ylim'); 
Xlim=get(gca,'Xlim');
semilogx([Xlim(1) Rad2Hz(Wcor)],[0 0],'m--'); %��Ƶ�ν�����
AsymptoteHigh=20*log10(abs(Taoi*1j*w));
semilogx([Rad2Hz(Wcor) Xlim(2)],[0 AsymptoteHigh(end)],'m--'); %��Ƶ�ν�����
semilogx(Rad2Hz(Wcor),20*log10(sqrt(2)),'o');
axis([-inf inf -5 35]);
subplot(2,1,2);
semilogx(f,Phiw2*180/pi);grid on;hold on;
Ylim=get(gca,'Ylim'); 
Xlim=get(gca,'Xlim');
semilogx([Rad2Hz(Wcor) Rad2Hz(Wcor)],[0 45],'m--');%��ע�ؼ���
semilogx([Xlim(1) Rad2Hz(Wcor)],[45 45],'m--');
semilogx(Rad2Hz(Wcor),45,'o');
semilogx([Xlim(1) Xlim(2)],[90 90],'m--');

%PI����������ͼ
figure(3);
LwPI=Lw+Lw2;
%LwPI2=20*log10(abs(Kp*(1+1./(Taoi*1j*w))));
PhiwPI=Phiw+Phiw2;
%������Ƶ����
subplot(2,1,1);
semilogx(f,LwPI);grid on; hold on;
Ylim=get(gca,'Ylim');
Xlim=get(gca,'Xlim');
AsymptotePI=20*log10(Kp);
semilogx([Xlim(1) Xlim(2)],[20*log10(Kp),20*log10(Kp)],'m--');%��ע������
% semilogx([1/Taoi 1/Taoi],[0 20*log10(Kp)+3],'m--');%��ע�ؼ���
% semilogx([Xlim(1) 1/Taoi],[20*log10(Kp)+3 20*log10(Kp)+3 ],'m--');
semilogx(Rad2Hz(Wcor),20*log10(Kp)+3,'o');
axis([-inf,inf,25,58]);
%��Ƶ����
subplot(2,1,2);
semilogx(f,PhiwPI*180/pi);grid on; hold on;
Ylim=get(gca,'Ylim');
Xlim=get(gca,'Xlim');
semilogx([Rad2Hz(Wcor),Rad2Hz(Wcor)],[Ylim(2) -45],'m--');
semilogx([Xlim(1),Rad2Hz(Wcor)],[-45 -45],'m--');
semilogx(Rad2Hz(Wcor),-45,'o');

%Taoi���䣬Kp�����仯ʱ�Ĳ���ͼ
figure(4);
LegendStr=[];i=1;
for Coef=0.5:0.5:2.5
    Kp=27.9*Coef;
    TsTmp=Kp*(1+1./(Taoi*s));
    LwTmp=20*log10(abs(TsTmp));
    PhiwTmp=angle(TsTmp);
    ax1=subplot(2,1,1);
    semilogx(f,LwTmp,'LineWidth',1.5);grid on;hold on;
    ax2=subplot(2,1,2);
    semilogx(f,PhiwTmp*180/pi,'LineWidth',1.5);grid on;hold on;
    LegendStr{i}=strcat('$K_p=\it$',num2str(Kp));i=i+1;
end
   legend(ax1,'Interpreter','Latex','string',LegendStr); 
   legend(ax2,'Interpreter','Latex','string',LegendStr);
    
%Kp���䣬Taoi�����仯ʱ�Ĳ���ͼ
figure(5);
Kp=27.9;
LegendStr=[];i=1;
for Coef=2.5:-0.5:0.5
    Taoi=0.074*Coef;
    Wcor=1/Taoi;
    TsTmp=Kp*(1+1./(Taoi*s));
    LwTmp=20*log10(abs(TsTmp));
    PhiwTmp=angle(TsTmp);
    ax1=subplot(2,1,1);
    semilogx(f,LwTmp,'LineWidth',1.5);grid on;hold on;%��Ƶ����
    ax2=subplot(2,1,2);
    semilogx(f,PhiwTmp*180/pi,'LineWidth',1.5);grid on;hold on;%��Ƶ����
    %semilogx();
    LegendStr{i}=strcat('$\tau_i=\it$',num2str(Taoi));i=i+1;
end
   legend(ax1,'Interpreter','Latex','string',LegendStr,'FontName','Times New Roman'); 
   legend(ax2,'Interpreter','Latex','string',LegendStr,'FontName','Times New Roman');
   ylim(ax1,[25,63]);
   ylim(ax2,[-100,0]);
   
for Coef=2.5:-0.5:0.5
    Taoi=0.074*Coef;
    Wcor=1/Taoi;
    
    ax1=subplot(2,1,1);
    Ylim=get(gca,'Ylim');
    Xlim=get(gca,'Xlim');
    semilogx([Rad2Hz(Wcor),Rad2Hz(Wcor)],[Ylim(1) 20*log10(Kp)+3],'m--','LineWidth',1.5);
    
    ax2=subplot(2,1,2);
    Ylim=get(gca,'Ylim');
    Xlim=get(gca,'Xlim');
    semilogx([Rad2Hz(Wcor),Rad2Hz(Wcor)],[Ylim(2),-45],'m--','LineWidth',1.5);

end
    ax1=subplot(2,1,1);
    Ylim=get(gca,'Ylim');
    Xlim=get(gca,'Xlim');
    semilogx([0.1,Rad2Hz(Wcor)],[20*log10(Kp)+3 20*log10(Kp)+3],'m--','LineWidth',1.5);
    
    ax1=subplot(2,1,2);
    Ylim=get(gca,'Ylim');
    Xlim=get(gca,'Xlim');
    semilogx([Xlim(1),Rad2Hz(Wcor)],[-45 -45],'m--','LineWidth',1.5);

   