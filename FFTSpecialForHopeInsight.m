%本文件适用于后台FFT分析，需先将数据文件导出为csv文件
clear;clc;
%此处为csv文件名字
data=xlsread('1Hz.csv');
%删除第一列，第一列为序号；
%fs = 1/(data(101,[1])-data(100,[1]));       %读取第一列的时间，自动计算对应采样率.若第一列不是时间而是序号一类的，需手动输入采样率
data(:,[1])=[];                             %删除第一列，因为第一列硬件示波器上是相对时间
fs=1000;
%删除前80行，多是示波器信息
data([1:100],:)=[];
[Row,Column]=size(data);
%Vc模拟示波器数据，这样可直接调用powergui的FFT模块
Vc.time = 0:(1/fs):(Row-1)/fs;
Vc.time = Vc.time';
Vc.signals.values = data;
Vc.signals.dimensions = Column;
Vc.blockName = 'FFT_simple/Scope2';
Vc.signals.label = '';
Vc.signals.title = '';
Vc.signals.plotStyle = [1, 1, 1, 1, 1, 1, 1, 1];
power_fftscope

