clc;clear;
%===============
%   获取示波器数据
%===============
OSCData = csvread('scope1_100LOAD50ms.csv', 2, 0); %此处键入需要分析的文件名
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);

%===============
%   计算FFT点数
%===============
[N,M]=size(OSCData); %数据点数
M=M-1;
Tosc=OSCData(N,1); %采样时间
fs = N/Tosc;       %采样频率
n = 0 : N-1;
f = n * fs / N; %频率序列
Spectrum=ones(N,M+1)*nan;
Spectrum(:,1)=f.'; %将频率序列写入频谱

%===============
%   要显示的频谱
%===============
freq=4000; %此处输入频谱显示的宽度，以Hz值输入
ind=find(f>=freq,1);

%===============
%   FFT
%===============
Mtmp=1;
%ColumnTmp=2; %数据从第二列开始
%PlotNum=1;
%Ntmp=1;
while Mtmp<=M
    OSCChn=OSCData(:,Mtmp+1); %数据从第二列开始
    y = fft(OSCChn,N);  %快速傅里叶变换
    y=2/N*y; %修正幅值
    y(1)=y(1)/2;
    mag1 = abs(y);   %求傅里叶变换后的振幅
    Spectrum(:,Mtmp+1)=mag1;
    
    subplot(2,2,Mtmp);
    plot(f(1:ind), mag1(1:ind)); %绘制奈奎斯特频率之间随频率变化的振幅
    xlabel('频率/Hz');
    ylabel('振幅');
    title(['Channel ',num2str(Mtmp)]);
    
    Mtmp=Mtmp+1;
    %ColumnTmp=ColumnTmp+1;
    %PlotNum=PlotNum+1;
    %Ntmp=Ntmp+1;
end




