clc;clear;close all;
%===============
%   ��ȡʾ��������
%===============
OSCData_NoPwm = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_NoPwm.csv', 'Range', [75911,3,75911+16384-1,4]);
OSCData_50Hz = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_50HzPwm.csv', 'Range', [65911,3,65911+16384-1,4]);



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

%===============
%   ���㷢��ʱBC������Ƶ��
%===============
Fs_50Hz = 4000;       %����Ƶ�ʹ̶�Ϊ4000Hz
[N,M]=size(OSCData_50Hz); %���ݵ���
L_50Hz=N;
Tosc_50Hz=L_50Hz/Fs_50Hz; %����ʱ��

Y_50Hz = fft(OSCData_50Hz);  
P2_50Hz=abs(Y_50Hz/L_50Hz);
P1_50Hz = P2_50Hz(1:L_50Hz/2+1,:);   %����Ҷ�任������
P1_50Hz(2:end-1) = 2*P1_50Hz(2:end-1);

FontSizeMy = 12;
FontNameMy = 'Times New Roman';
%����B�������Ƶ��
figure(1);
subplot(2,1,1);
plot(f(2:end), P1(2:end,1),'LineWidth',1); grid on; hold on;  
title('Isb ADԭʼֵƵ�� 2kHz Fsw ������');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

subplot(2,1,2);
plot(f(2:end), P1_50Hz(2:end,1),'LineWidth',1); grid on; hold on;  
title('Isb ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

%����C�������Ƶ��
figure(2);
subplot(2,1,1);
plot(f(2:end), P1(2:end,2),'LineWidth',1); grid on; hold on;  
title('Isc ADԭʼֵƵ�� 2kHz Fsw ������');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

subplot(2,1,2);
plot(f(2:end), P1_50Hz(2:end,2),'LineWidth',1); grid on; hold on;  
title('Isc ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

