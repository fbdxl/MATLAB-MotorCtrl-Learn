clc;clear;close all;
%===============
%   获取示波器数据
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData = readmatrix('scope_57.csv', 'Range', [100,1,100+8192-1,5]);
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

f = (0:L/2) * Fs / L; %频率序列

figure(1);
subplot(4,1,1);
plot(f(2:end), P1(2:end,1)); grid on; hold on;
axis([0,250,0 ,0.001*1.5]);
subplot(4,1,2);
plot(f(2:end), P1(2:end,2)); grid on; hold on;
axis([0,250,0 ,0.001*1.5]);
subplot(4,1,3)
plot(f(2:end), P1(2:end,3)); grid on; hold on;
axis([0,250,0 ,(4e-4)*0.1]);
subplot(4,1,4)
plot(f(2:end), P1(2:end,4)); grid on; hold on;
axis([0,250,0 ,inf]);

%FFT分析得Isa基波分量为0.076V，硬件示波器显示Isa的基波幅值约为0.081V。二者基本对得上。

figure(2);
subplot(4,1,1);
plot(f(2:end), P3(2:end,1)); grid on; hold on;
axis([0,250,0 ,60]);
subplot(4,1,2);
plot(f(2:end), P3(2:end,2)); grid on; hold on;
axis([0,250,0 ,60]);
subplot(4,1,3)
plot(f(2:end), P3(2:end,3)); grid on; hold on;
axis([0,250,0 ,2]);
subplot(4,1,4)
plot(f(2:end), P3(2:end,4)); grid on; hold on;
axis([0,250,0 ,inf]);

