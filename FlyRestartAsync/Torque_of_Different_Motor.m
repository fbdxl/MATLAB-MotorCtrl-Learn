clc;clear;close all;

figure(1);
figure(2);
%========================
%3kW�첽��ת�ٸ���ת��
%========================
Lm=3663/4096;
Rr=103/4096;
Lr=3914/4096;
Ws=1.07;
s=linspace(-1,1,10000);
Ztorq=(9/4)*(Ws*Lm^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%���ۻ���ʽ

Ism=1.042*1.2;

Tem=Ztorq*Ism^2;%���ۻ���ʽ

figure(1);plot(s,Ztorq);grid on;hold on;
figure(2);plot(s,Tem);grid on;hold on;
lgStr=[];
lgStr=[lgStr;'3   kW IM'];

%========================
%5.5kW�첽��ת�ٸ���ת��
%========================
Lm=5839/4096;
Rr=89/4096;
Lr=6092/4096;
Ws=1.07;
s=linspace(-1,1,10000);
Ztorq=(9/4)*(Ws*Lm^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%���ۻ���ʽ

Ism=0.67*1.2;

Tem=Ztorq*Ism^2;%���ۻ���ʽ
figure(1);plot(s,Ztorq);grid on;hold on;
figure(2);plot(s,Tem);grid on;hold on;

lgStr=[lgStr;'5.5 kW IM'];

%========================
%22kW�첽��ת�ٸ���ת��
%========================
Lm=8320/4096;
Rr=62/4096;
Lr=8572/4096;
Ws=1.07;
s=linspace(-1,1,10000);
Ztorq=(9/4)*(Ws*Lm^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%���ۻ���ʽ

Ism=0.476*1.2;

Tem=Ztorq*Ism^2;%���ۻ���ʽ
figure(1);plot(s,Ztorq);grid on;hold on;
figure(2);plot(s,Tem);grid on;hold on;

lgStr=[lgStr;'22  kW IM'];

figure(1);legend(lgStr);
figure(2);legend(lgStr);