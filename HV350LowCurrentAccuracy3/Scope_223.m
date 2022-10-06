clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData = readmatrix('scope_224.csv');
OSCData(1:2,:) = [];
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

FreqDefinition = Fs/L; %Ƶ�׷ֱ���

n = 0 : N-1;
% �������Ts=1/fs,����t=n*Ts=n/fsΪʱ������
t = n / Fs; %ʱ������

FFTChn = 2;

y = fft(OSCData(:,FFTChn)); 
P2=abs(y/N);
P1 = P2(1:L/2+1,:);   
P1(2:end-1,:) = 2*P1(2:end-1,:);
P3=P1;
P3(:,:)=P3(:,:)*(4096/Ibase);%��Ƶ�׷�ֵȫ��ת�����ƻ�׼��
P4=P2;
P4(:,:) = P4(:,:)*(4096/Ibase);

DispFreqStart = 0;
DispFreqEnd = 8000;
FontSize_figure = 12;
FontName_figure = 'Times New Roman';

f = (0:L/2) * Fs / L; %Ƶ������
f4 = (0:L-1)*Fs/L;

figure(1);
%subplot(4,1,1);
plot(f(2:end), P1(2:end,1)); grid on; hold on;
axis([DispFreqStart,DispFreqEnd,0 ,0.001]);
set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);

% subplot(4,1,2);
% plot(f(2:end), P3(2:end,2)); grid on; hold on;
% axis([DispFreqStart,DispFreqEnd,0 ,inf]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);
% 
% subplot(4,1,3)
% plot(f(2:end), P3(2:end,3)); grid on; hold on;
% axis([DispFreqStart,DispFreqEnd,0 ,inf]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);
% 
% subplot(4,1,4)
% plot(f(2:end), P3(2:end,4)); grid on; hold on;
% axis([DispFreqStart,DispFreqEnd,0 ,1e-3*0.5]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);

% %FFT������Isa��������Ϊ0.076V��Ӳ��ʾ������ʾIsa�Ļ�����ֵԼΪ0.081V�����߻����Ե��ϡ�
% figure(2);
% subplot(4,1,1);
% plot(f4(2:end), P4(2:end,1)); grid on; hold on;
% axis([0,DispFreqEnd,0 ,inf]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);
% 
% subplot(4,1,2);
% plot(f4(2:end), P4(2:end,2)); grid on; hold on;
% axis([0,DispFreqEnd,0 ,inf]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);
% 
% subplot(4,1,3)
% plot(f4(2:end), P4(2:end,3)); grid on; hold on;
% axis([0,DispFreqEnd,0 ,inf]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);
% 
% subplot(4,1,4)
% plot(f4(2:end), P4(2:end,4)); grid on; hold on;
% axis([0,DispFreqEnd,0 ,1e-3*0.5]);
% set(gca,'FontSize',FontSize_figure,'FontName',FontName_figure);
