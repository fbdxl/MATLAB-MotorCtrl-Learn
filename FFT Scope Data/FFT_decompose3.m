clc;clear;
%===============
%   ��ȡʾ��������
%===============
OSCData = csvread('scope1_100LOAD50ms.csv', 2, 0); %�˴�������Ҫ�������ļ���
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);

%===============
%   ����FFT����
%===============
[N,M]=size(OSCData); %���ݵ���
M=M-1;
Tosc=OSCData(N,1); %����ʱ��
fs = N/Tosc;       %����Ƶ��
n = 0 : N-1;
f = n * fs / N; %Ƶ������
Spectrum=ones(N,M+1)*nan;
Spectrum(:,1)=f.'; %��Ƶ������д��Ƶ��

%===============
%   Ҫ��ʾ��Ƶ��
%===============
freq=4000; %�˴�����Ƶ����ʾ�Ŀ�ȣ���Hzֵ����
ind=find(f>=freq,1);

%===============
%   FFT
%===============
Mtmp=1;
%ColumnTmp=2; %���ݴӵڶ��п�ʼ
%PlotNum=1;
%Ntmp=1;
while Mtmp<=M
    OSCChn=OSCData(:,Mtmp+1); %���ݴӵڶ��п�ʼ
    y = fft(OSCChn,N);  %���ٸ���Ҷ�任
    y=2/N*y; %������ֵ
    y(1)=y(1)/2;
    mag1 = abs(y);   %����Ҷ�任������
    Spectrum(:,Mtmp+1)=mag1;
    
    subplot(2,2,Mtmp);
    plot(f(1:ind), mag1(1:ind)); %�����ο�˹��Ƶ��֮����Ƶ�ʱ仯�����
    xlabel('Ƶ��/Hz');
    ylabel('���');
    title(['Channel ',num2str(Mtmp)]);
    
    Mtmp=Mtmp+1;
    %ColumnTmp=ColumnTmp+1;
    %PlotNum=PlotNum+1;
    %Ntmp=Ntmp+1;
end




