clc;clear;close all;
%===============
%   获取示波器数据
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData = readmatrix('scope_3.csv', 'Range', [100,1,100+8192-1,5]);
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);


%===============
%   FFT分析与画图
%===============
[N,M]=size(OSCData); %数据点数
M=M-1;
L=N;
Tosc=OSCData(N,1); %采样时间
Fs = N/Tosc;       %采样频率
%N = 64;    %数据点数
n = 0 : N-1;
% 抽样间隔Ts=1/fs,所以t=n*Ts=n/fs为时间序列
t = n / Fs; %时间序列
%x = 0.5*sin(2*pi*15*t) + 2*sin(2*pi*40*t);
OSCChn=OSCData(:,2);
y = fft(OSCData);  %对信号进行64点快速傅里叶变换
P2=abs(y/N);
P1 = P2(1:L/2+1,:);   %求傅里叶变换后的振幅
P1(2:end-1) = 2*P1(2:end-1);

f = (0:L/2) * Fs / L; %频率序列
subplot(4,1,1);
plot(f(2:end), P1(2:end,2)); grid on; hold on;
subplot(4,1,2);
plot(f(2:end), P1(2:end,3)); grid on; hold on;
subplot(4,1,3)
plot(f(2:end), P1(2:end,4)); grid on; hold on;
subplot(4,1,4)
plot(f(2:end), P1(2:end,5)); grid on; hold on;

