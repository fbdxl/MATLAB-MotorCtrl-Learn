clc;clear;close all;

figure(1);
figure(2);


%========================
%5.5kW�첽��ת�ٸ���ת��
%========================
Lm=5839/4096;
Rr=89/4096;
Lr=6092/4096;
Ws=0.5;
s=linspace(-1,1,10000);
Ztorq=(9/4)*(Ws*Lm^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%���ۻ���ʽ

Ism=0.67*1.2;

Tem=Ztorq*Ism^2;%���ۻ���ʽ
figure(1);plot(s,Ztorq);grid on;hold on;
figure(2);plot(s,Tem);grid on;hold on;


%lgStr=[lgStr;'5.5 kW IM'];

%========================
%�첽��Tem����s������
%========================
iTmp=find(s>0,1);
figure(3);plot(Tem(iTmp:end),1-s(iTmp:end),'LineWidth',1); grid on; hold on;
axis([-inf,inf,0,1.2]);
set(gca,'FontSize',14,'FontName','Times New Roman');
