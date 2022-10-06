clc;clear;close all;
%===============
%   获取示波器数据
%===============
OSCData_NoPwm = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_50HzPwm.csv', 'Range', [703,3,703+16384-1,4]);
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_ADRawData_NoloadCurrent_4Kfctrl.csv', 'Range', [73,3,73+16384-1,4]);


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
plot(f(2:end), P1(2:end,1));

%确认MATLAB的FFT结果和HopeInsight的FFT结果对不上是因为
%HopeInsight示波器显示增益会影响HopeInsight的FFT运算