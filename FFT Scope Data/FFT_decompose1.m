%===============
%   N = 64时
%===============
fs = 100;   %采样频率
N = 64;    %数据点数
n = 0 : N-1;
% 抽样间隔Ts=1/fs,所以t=n*Ts=n/fs为时间序列
t = n / fs; %时间序列
x = 0.5*sin(2*pi*15*t) + 2*sin(2*pi*40*t);
y = fft(x, N);  %对信号进行64点快速傅里叶变换
mag1 = abs(y);   %求傅里叶变换后的振幅
% 在fs(100Hz)内做N(64)点FFT,频率分辨率为fs/N=1.5625
f = n * fs / N; %频率序列
subplot(2,2,1);
plot(f, mag1,'LineWidth',1);   %绘制随频率变化的振幅
xlabel('频率/Hz');
ylabel('振幅');
title('N=64');
subplot(2,2,2);
plot(f(1:N/2), mag1(1:N/2)); %绘制奈奎斯特频率之间随频率变化的振幅
xlabel('频率/Hz');
ylabel('振幅');
title('N=64');

%===============
%   N = 1024时
%===============
fs = 100;   %采样频率
N = 1024;    %数据点数
n = 0 : N-1;
% 抽样间隔Ts=1/fs,所以t=n*Ts=n/fs为时间序列
t = n / fs; %时间序列
x = 0.5*sin(2*pi*15*t) + 2*sin(2*pi*40*t);
y = fft(x, N);  %对信号进行1024点快速傅里叶变换
mag2 = abs(y);   %求傅里叶变换后的振幅
% 在fs(100Hz)内做N(1024)点FFT,频率分辨率为fs/N=0.097656
f = n * fs / N; %频率序列
subplot(2,2,3);
plot(f, mag2,'LineWidth',1);   %绘制随频率变化的振幅
xlabel('频率/Hz');
ylabel('振幅');
title('N=1024');
subplot(2,2,4);
plot(f(1:N/2), mag2(1:N/2)); %绘制奈奎斯特频率之前随频率变化的振幅
xlabel('频率/Hz');
ylabel('振幅');
title('N=1024');
