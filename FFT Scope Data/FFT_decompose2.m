clc;clear;
%===============
%   ��ȡʾ��������
%===============
OSCData = csvread('scope_183.csv', 2, 0);
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);



%===============
%   N = 64ʱ
%===============
[N,M]=size(OSCData); %���ݵ���
M=M-1;
Tosc=OSCData(N,1); %����ʱ��
fs = N/Tosc;       %����Ƶ��
%N = 64;    %���ݵ���
n = 0 : N-1;
% �������Ts=1/fs,����t=n*Ts=n/fsΪʱ������
t = n / fs; %ʱ������
%x = 0.5*sin(2*pi*15*t) + 2*sin(2*pi*40*t);
OSCChn=OSCData(:,2);
y = fft(OSCChn,N);  %���źŽ���64����ٸ���Ҷ�任
y=2/N*y;
mag1 = abs(y);   %����Ҷ�任������
% ��fs(100Hz)����N(64)��FFT,Ƶ�ʷֱ���Ϊfs/N=1.5625
f = n * fs / N; %Ƶ������
subplot(2,2,1);
plot(f, mag1,'LineWidth',1);   %������Ƶ�ʱ仯�����
xlabel('Ƶ��/Hz');
ylabel('���');
title('N=64');
subplot(2,2,2);
plot(f(1:N/60), mag1(1:N/60)); %�����ο�˹��Ƶ��֮����Ƶ�ʱ仯�����
xlabel('Ƶ��/Hz');
ylabel('���');
title('N=64');


