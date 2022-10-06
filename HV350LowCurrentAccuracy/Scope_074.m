clc;clear;close all;
%===============
%   获取示波器数据
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData = readmatrix('scope_074.csv');
OSCData(1:2,:) = [];
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);

Ibase=2.28*1.414; %控制基准电流
IAdcRange=100; %电流采样范围
AdcVoltRange=3;

%===============
%   FFT分析与画图
%===============
[N,M]=size(OSCData); %数据点数
M=M-1;
L=N;
Tosc=OSCData(N,1); %采样时间
Fs = N/Tosc;       %采样频率

FreqDefinition = Fs/L; %频谱分辨率

n = 0 : N-1;
% 抽样间隔Ts=1/fs,所以t=n*Ts=n/fs为时间序列
t = n / Fs; %时间序列

FFTChn = 2:5;

y = fft(OSCData(:,FFTChn)); 
P2=abs(y/N);
P1 = P2(1:L/2+1,:);   
P1(2:end-1,:) = 2*P1(2:end-1,:);
P3=P1;
P3(:,1:3)=P3(:,1:3)*(4096*IAdcRange/Ibase/AdcVoltRange);%将频谱幅值全部转到控制基准下

DispFreqStart = 0;
DispFreqEnd = 250;
FontSize_figure = 12;
FontName_figure = 'Times New Roman';

f = (0:L/2) * Fs / L; %频率序列
subplot(4,1,1);
plot(f(2:end), P3(2:end,1)); grid on; hold on;
axis([0,DispFreqEnd,0 ,50]);
set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);

subplot(4,1,2);
plot(f(2:end), P3(2:end,2)); grid on; hold on;
axis([0,DispFreqEnd,0 ,50]);
set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);

subplot(4,1,3)
plot(f(2:end), P3(2:end,3)); grid on; hold on;
axis([0,DispFreqEnd,0 ,inf]);
set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);

subplot(4,1,4)
plot(f(2:end), P3(2:end,4)); grid on; hold on;
axis([0,DispFreqEnd,0 ,1e-3*0.5]);
set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);

%FFT分析得Isa基波分量为0.076V，硬件示波器显示Isa的基波幅值约为0.081V。二者基本对得上。
