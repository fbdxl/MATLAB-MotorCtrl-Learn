clc;clear;close all;
%===============
%   获取示波器数据
%===============
OSCData_NoPwm = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_NoPwm.csv', 'Range', [75911,3,75911+16384-1,4]);
OSCData_50Hz = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_50HzPwm.csv', 'Range', [65911,3,65911+16384-1,4]);



%===============
%   计算不发波时BC电流的频谱
%===============
Fs = 4000;       %采样频率固定为4000Hz
[N,M]=size(OSCData_NoPwm); 
L=N;               %数据点数
Tosc=L/Fs; %总采样时间

Y = fft(OSCData_NoPwm);  
P2=abs(Y/L);
P1 = P2(1:L/2+1,:);   %求傅里叶变换后的振幅
P1(2:end-1) = 2*P1(2:end-1);

f = (0:L/2) * Fs / L; %频率序列

%===============
%   计算发波时BC电流的频谱
%===============
Fs_50Hz = 4000;       %采样频率固定为4000Hz
[N,M]=size(OSCData_50Hz); %数据点数
L_50Hz=N;
Tosc_50Hz=L_50Hz/Fs_50Hz; %采样时间

Y_50Hz = fft(OSCData_50Hz);  
P2_50Hz=abs(Y_50Hz/L_50Hz);
P1_50Hz = P2_50Hz(1:L_50Hz/2+1,:);   %求傅里叶变换后的振幅
P1_50Hz(2:end-1) = 2*P1_50Hz(2:end-1);

FontSizeMy = 12;
FontNameMy = 'Times New Roman';
%绘制B相电流的频谱
figure(1);
subplot(2,1,1);
plot(f(2:end), P1(2:end,1),'LineWidth',1); grid on; hold on;  
title('Isb AD原始值频谱 2kHz Fsw 不发波');
xlabel('f (Hz)');
ylabel('幅值');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

subplot(2,1,2);
plot(f(2:end), P1_50Hz(2:end,1),'LineWidth',1); grid on; hold on;  
title('Isb AD原始值频谱 2kHz Fsw 50Hz发波');
xlabel('f (Hz)');
ylabel('幅值');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

%绘制C相电流的频谱
figure(2);
subplot(2,1,1);
plot(f(2:end), P1(2:end,2),'LineWidth',1); grid on; hold on;  
title('Isc AD原始值频谱 2kHz Fsw 不发波');
xlabel('f (Hz)');
ylabel('幅值');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

subplot(2,1,2);
plot(f(2:end), P1_50Hz(2:end,2),'LineWidth',1); grid on; hold on;  
title('Isc AD原始值频谱 2kHz Fsw 50Hz发波');
xlabel('f (Hz)');
ylabel('幅值');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

