%clc;clear;close all;
%===============
%   获取示波器数据
%===============
SheetNum=11;
FFTLength=16384;
OscChn=7;

StartSheet = 1;
StopSheet = 1;

OscDataArray=ones(SheetNum, FFTLength, OscChn);
for n=StartSheet:StopSheet
    SheetNameTmp = strcat('CurrentRipple_',num2str(n*5),'Hz');
    OscDataTmp = zeros(FFTLength,OscChn);
    OscDataTmp = readmatrix('CurrentRipple1.5kWAsyncMotor\CurrentRipple_0Hz.xlsx','sheet',SheetNameTmp, 'Range', [100,2,100+16384-1,8]);
    OscDataArray(n+1,:,:) = reshape(OscDataTmp,[1,FFTLength,OscChn]);
end
%OSCData_NoPwm = readmatrix('CurrentRipple1.5kWAsyncMotor\CurrentRipple_0Hz.xlsx','sheet','CurrentRipple_0Hz', 'Range', [100,3,100+16384-1,4]);
%OSCData_50Hz = readmatrix('OSC_2022-06-05_1stConverter_2kfsw_50HzPwm.csv', 'Range', [65911,3,65911+16384-1,4]);
% A=ones(2,3,4);
% B=zeros(3,4);
% A(1,:,:)=B;

% n=1;
% opts = detectImportOptions('CurrentRipple1.5kWAsyncMotor\CurrentRipple_0Hz.xlsx');
% opts.Sheet = strcat('CurrentRipple_',num2str(n*5),'Hz');
% opts.SelectedVariableNames = [2:8]; 
% opts.DataRange = '100:16483';
% M = readmatrix('CurrentRipple1.5kWAsyncMotor\CurrentRipple_0Hz.xlsx',opts);

%===============================================================================================
%绘制频谱图
%===============================================================================================
FFTMag=ones(SheetNum,FFTLength,OscChn);
FFTMag2=ones(SheetNum,FFTLength/2+1,OscChn);
Y=ones(FFTLength,OscChn);
for n=StartSheet:StopSheet
    Y=fft(OscDataTmp);
    FFTMag(n+1,:,:) = abs(Y);
    FFTMag2(n+1,:,:)=FFTMag(n+1,1:FFTLength/2+1,:);
end

Fs = 4000;       %采样频率固定为4000Hz
f = (0:FFTLength/2) * Fs / FFTLength; %频率序列

% %===============================================================================================
% %绘制频谱图
% %===============================================================================================
% FontSizeMy = 12;
% FontNameMy = 'Times New Roman';
% 
% %绘制Isd的频谱
% figure(1);
% subplot(3,1,1);
% plot(f(2:end), FFTMag2(1,2:end,1),'LineWidth',1); grid on; hold on;  
% title('Isd Spectrum 2kHz Fsw 1.5kW IM');
% xlabel('f (Hz)');
% ylabel('幅值');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
% 
% subplot(3,1,2);
% plot(f(2:end), FFTMag2(1,2:end,3),'LineWidth',1); grid on; hold on;  
% title('Isb AD原始值频谱 2kHz Fsw 50Hz发波');
% xlabel('f (Hz)');
% ylabel('幅值');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
% 
% subplot(3,1,3);
% plot(f(2:end), FFTMag2(1,2:end,6),'LineWidth',1); grid on; hold on;  
% title('Isb AD原始值频谱 2kHz Fsw 50Hz发波');
% xlabel('f (Hz)');
% ylabel('幅值');
% set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
% set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);
