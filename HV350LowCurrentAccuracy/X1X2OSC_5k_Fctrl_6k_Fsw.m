clc;clear;close all;
%===============
%   获取示波器数据
%===============
FFTLength=16384;
OscChn=2;

Ibase=2.28*1.414; 
IAdcRange=100; 

OSCData = ones(FFTLength, OscChn);
OSCData = readmatrix('X1X2OSC_5k_Fctrl_6k_Fsw.csv', 'Range', [100,3,100+16384-1,4]);



%===============
%   计算不发波时BC电流的频谱
%===============
FFTChn = 1:2;
Fs = 8000;       %采样频率固定为4000Hz
[N,M]=size(OSCData(:,FFTChn)); 
L=N;              
Tosc=L/Fs; 

Y = fft(OSCData(:,FFTChn));  
P2=abs(Y/L);
P1 = P2(1:L/2+1,:);   %求傅里叶变换后的振幅
P1(2:end-1,:) = 2*P1(2:end-1,:);
P3=P1;
P3(:,1:2)=P3(:,1:2)*(IAdcRange/Ibase);%将频谱幅值全部转到控制基准下

f = (0:L/2) * Fs / L; %频率序列


%===============
%   绘制频谱
%===============
FontSizeMy = 12;
FontNameMy = 'Times New Roman';
DispFreqStart = 0;
DispFreqEnd = 2500;

YMax=50;

%绘制B相电流的频谱
figure(1);
subplot(2,1,1);
plot(f(2:end), P3(2:end,1),'LineWidth',1); grid on; hold on;  
% title('Isb AD原始值频谱 2kHz Fsw 不发波');
% xlabel('f (Hz)');
% ylabel('幅值');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMax]);

subplot(2,1,2);
plot(f(2:end), P3(2:end,2),'LineWidth',1); grid on; hold on;  
% title('Isb AD原始值频谱 2kHz Fsw 50Hz发波');
% xlabel('f (Hz)');
% ylabel('幅值');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
 set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
axis([0 DispFreqEnd 0 YMax]);


%绘制C相电流的频谱
% figure(2);
% subplot(3,1,1);
% plot(f(2:end), P3(2:end,3),'LineWidth',1); grid on; hold on;  
% % title('Isc AD原始值频谱 2kHz Fsw 不发波');
% % xlabel('f (Hz)');
% % ylabel('幅值');
% % set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% % set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% % set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
%  set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
% axis([0 DispFreqEnd 0 YMax]);
% 
% subplot(3,1,2);
% plot(f(2:end), P3(2:end,4),'LineWidth',1); grid on; hold on;  
% % title('Isc AD原始值频谱 2kHz Fsw 50Hz发波');
% % xlabel('f (Hz)');
% % ylabel('幅值');
% % set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% % set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% % set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
%  set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
% axis([0 DispFreqEnd 0 YMax]);
% 
% subplot(3,1,3);
% plot(f(2:end), P3(2:end,5),'LineWidth',1); grid on; hold on;  
% % title('Isc AD原始值频谱 2kHz Fsw 50Hz发波');
% % xlabel('f (Hz)');
% % ylabel('幅值');
% % set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% % set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% % set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
%  set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
% axis([0 DispFreqEnd 0 YMax]);