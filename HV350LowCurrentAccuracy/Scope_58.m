clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData = readmatrix('scope_58.csv', 'Range', [100,1,100+8192-1,5]);
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);

Ibase=2.28*1.414; %���ƻ�׼����
IAdcRange=100; %����������Χ
AdcVoltRange=3;

%===============
%   FFT�����뻭ͼ
%===============
[N,M]=size(OSCData); %���ݵ���
M=M-1;
L=N;
Tosc=OSCData(N,1); %����ʱ��
Fs = N/Tosc;       %����Ƶ��

n = 0 : N-1;
% �������Ts=1/fs,����t=n*Ts=n/fsΪʱ������
t = n / Fs; %ʱ������

FFTChn = 2:5;

y = fft(OSCData(:,FFTChn)); 
P2=abs(y/N);
P1 = P2(1:L/2+1,:);   
P1(2:end-1,:) = 2*P1(2:end-1,:);
P3=P1;
P3(:,1:3)=P3(:,1:3)*(4096*IAdcRange/Ibase/AdcVoltRange);%��Ƶ�׷�ֵȫ��ת�����ƻ�׼��

f = (0:L/2) * Fs / L; %Ƶ������
subplot(4,1,1);
plot(f(2:end), P3(2:end,1)); grid on; hold on;
axis([0,250,0 ,inf]);
subplot(4,1,2);
plot(f(2:end), P3(2:end,2)); grid on; hold on;
axis([0,250,0 ,inf]);
subplot(4,1,3)
plot(f(2:end), P3(2:end,3)); grid on; hold on;
axis([0,250,0 ,inf]);
subplot(4,1,4)
plot(f(2:end), P3(2:end,4)); grid on; hold on;
axis([0,250,0 ,inf]);

%FFT������Isa��������Ϊ0.076V��Ӳ��ʾ������ʾIsa�Ļ�����ֵԼΪ0.081V�����߻����Ե��ϡ�
