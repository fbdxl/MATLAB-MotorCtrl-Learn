clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
FFTLength=65536;
OscChn=5;

Ibase=8.35*1.414; %���ƻ�׼����
IAdcRange=100; %����������Χ

OSCData = ones(FFTLength, OscChn);
OSCData = readmatrix('dq_and_abc_current_harmonic_50Hz_5.5IM.csv', 'Range', [100,2,100+65536-1,6]);



%===============
%   ���㲻����ʱBC������Ƶ��
%===============
FFTChn = 1:5;
Fs = 6000;       %����Ƶ�ʹ̶�Ϊ4000Hz
[N,M]=size(OSCData(:,FFTChn)); 
L=N;               %���ݵ���
Tosc=L/Fs; %�ܲ���ʱ��

Y = fft(OSCData(:,FFTChn));  
P2=abs(Y/L);
P1 = P2(1:L/2+1,:);   %����Ҷ�任������
P1(2:end-1,:) = 2*P1(2:end-1,:);
P3=P1;
P3(:,1:3)=P3(:,1:3)*(IAdcRange/Ibase);%��Ƶ�׷�ֵȫ��ת�����ƻ�׼��

f = (0:L/2) * Fs / L; %Ƶ������


%===============
%   ����Ƶ��
%===============
FontSizeMy = 12;
FontNameMy = 'Times New Roman';
DispFreqStart = 0;
DispFreqEnd = 1000;

YMax=100;
YMaxAdcRaw = 10;

%����B�������Ƶ��
figure(1);
subplot(2,1,1);
plot(f(2:end), P1(2:end,4),'LineWidth',1); grid on; hold on;  
% title('Isb ADԭʼֵƵ�� 2kHz Fsw ������');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMax]);

subplot(2,1,2);
plot(f(2:end), P1(2:end,5),'LineWidth',1); grid on; hold on;  
% title('Isb ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMax]);


%����C�������Ƶ��
figure(2);
subplot(3,1,1);
plot(f(2:end), P1(2:end,1),'LineWidth',1); grid on; hold on;  
% title('Isc ADԭʼֵƵ�� 2kHz Fsw ������');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMaxAdcRaw]);

subplot(3,1,2);
plot(f(2:end), P1(2:end,2),'LineWidth',1); grid on; hold on;  
% title('Isc ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMaxAdcRaw]);

subplot(3,1,3);
plot(f(2:end), P1(2:end,3),'LineWidth',1); grid on; hold on;  
% title('Isc ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
% xlabel('f (Hz)');
% ylabel('��ֵ');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMaxAdcRaw]);