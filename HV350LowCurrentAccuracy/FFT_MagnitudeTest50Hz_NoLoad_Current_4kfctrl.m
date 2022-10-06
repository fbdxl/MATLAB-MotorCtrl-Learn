clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
OSCData_NoPwm = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_50HzPwm.csv', 'Range', [703,3,703+16384-1,4]);
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_ADRawData_NoloadCurrent_4Kfctrl.csv', 'Range', [73,3,73+16384-1,4]);


%===============
%   ���㲻����ʱBC������Ƶ��
%===============
Fs = 4000;       %����Ƶ�ʹ̶�Ϊ4000Hz
[N,M]=size(OSCData_NoPwm); 
L=N;               %���ݵ���
Tosc=L/Fs; %�ܲ���ʱ��

Y = fft(OSCData_NoPwm);  
P2=abs(Y/L);
P1 = P2(1:L/2+1,:);   %����Ҷ�任������
P1(2:end-1) = 2*P1(2:end-1);

f = (0:L/2) * Fs / L; %Ƶ������
plot(f(2:end), P1(2:end,1));

%ȷ��MATLAB��FFT�����HopeInsight��FFT����Բ�������Ϊ
%HopeInsightʾ������ʾ�����Ӱ��HopeInsight��FFT����