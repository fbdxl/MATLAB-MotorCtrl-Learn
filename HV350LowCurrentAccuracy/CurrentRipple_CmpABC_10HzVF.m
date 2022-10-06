clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
FFTLength=65536;
OscChn=5;

Ibase=2.28*1.414; %���ƻ�׼����
IAdcRange=100; %����������Χ

OSCData = ones(FFTLength, OscChn);
OSCData = readmatrix('CurrentRipple_CmpABC_10HzVF.csv', 'Range', [100,2,100+FFTLength-1,2+OscChn-1]);



%===============
%   ���㲻����ʱBC������Ƶ��
%===============
Fs = 6000;      
FFTColumn = [1:5];
[N,M]=size(OSCData(:,FFTColumn)); 
L=N;               %���ݵ���
Tosc=L/Fs; 

Y = fft(OSCData(:,FFTColumn));  
P2=abs(Y/L);
P1 = P2(1:L/2+1,:);   %Ƶ�׷�Χֻȡ0~Fs/2
P1(2:end-1,:) = 2*P1(2:end-1,:);
P3=P1;
P3(:,3:5)=P3(:,3:5)*0.25;%��Ƶ�׷�ֵȫ��ת�����ƻ�׼��

f = (0:L/2) * Fs / L; %Ƶ������


%===============
%   ����Ƶ��
%===============
FontSizeMy = 12;
FontNameMy = 'Times New Roman';
%����B�������Ƶ��
figure(1);
subplot(2,1,1);
plot(f(2:end), P1(2:end,1),'LineWidth',1); grid on; hold on;  
% title('Isb ADԭʼֵƵ�� 2kHz Fsw ������');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 250 0 40]);

subplot(2,1,2);
plot(f(2:end), P1(2:end,2),'LineWidth',1); grid on; hold on;  
% title('Isb ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 250 0 40]);

%����C�������Ƶ��
figure(2);
subplot(3,1,1);
plot(f(2:end), P3(2:end,3),'LineWidth',1); grid on; hold on;  
% title('Isc ADԭʼֵƵ�� 2kHz Fsw ������');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 250 0 40]);

subplot(3,1,2);
plot(f(2:end), P3(2:end,4),'LineWidth',1); grid on; hold on;  
% title('Isc ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 250 0 40]);

subplot(3,1,3);
plot(f(2:end), P3(2:end,5),'LineWidth',1); grid on; hold on;  
% title('Isc ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 250 0 40]);