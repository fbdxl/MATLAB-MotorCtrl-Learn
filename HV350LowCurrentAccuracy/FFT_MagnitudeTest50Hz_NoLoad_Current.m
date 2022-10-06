clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
%OSCData_NoPwm = readmatrix('OSC_2022-06-06_50Hz_Noload_Current.csv', 'Range', [73,3,73+16384-1,4]);
OSCData_NoPwm = readmatrix('OSC_2022-06-06_ADCRaw_Data_NoLoadCurrent.csv', 'Range', [73,3,73+16384-1,4]);


%===============
%   ���㲻����ʱBC������Ƶ��
%===============
Fs = 6000;       %����Ƶ�ʹ̶�Ϊ4000Hz
[N,M]=size(OSCData_NoPwm); 
L=N;               %���ݵ���
Tosc=L/Fs; %�ܲ���ʱ��

Y = fft(OSCData_NoPwm);  
P2=abs(Y/L);
P1 = P2(1:L/2+1,:);   %����Ҷ�任������
P1(2:end-1) = 2*P1(2:end-1);

f = (0:L/2) * Fs / L; %Ƶ������
plot(f(2:end), P1(2:end,1));