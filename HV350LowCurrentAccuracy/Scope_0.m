clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData = readmatrix('scope_3.csv', 'Range', [100,1,100+8192-1,5]);
OSCData(:,1)=OSCData(:,1)-OSCData(1,1);


%===============
%   FFT�����뻭ͼ
%===============
[N,M]=size(OSCData); %���ݵ���
M=M-1;
L=N;
Tosc=OSCData(N,1); %����ʱ��
Fs = N/Tosc;       %����Ƶ��
%N = 64;    %���ݵ���
n = 0 : N-1;
% �������Ts=1/fs,����t=n*Ts=n/fsΪʱ������
t = n / Fs; %ʱ������
%x = 0.5*sin(2*pi*15*t) + 2*sin(2*pi*40*t);
OSCChn=OSCData(:,2);
y = fft(OSCData);  %���źŽ���64����ٸ���Ҷ�任
P2=abs(y/N);
P1 = P2(1:L/2+1,:);   %����Ҷ�任������
P1(2:end-1) = 2*P1(2:end-1);

f = (0:L/2) * Fs / L; %Ƶ������
subplot(4,1,1);
plot(f(2:end), P1(2:end,2)); grid on; hold on;
subplot(4,1,2);
plot(f(2:end), P1(2:end,3)); grid on; hold on;
subplot(4,1,3)
plot(f(2:end), P1(2:end,4)); grid on; hold on;
subplot(4,1,4)
plot(f(2:end), P1(2:end,5)); grid on; hold on;

