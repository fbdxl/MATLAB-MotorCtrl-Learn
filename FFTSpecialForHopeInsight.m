%���ļ������ں�̨FFT���������Ƚ������ļ�����Ϊcsv�ļ�
clear;clc;
%�˴�Ϊcsv�ļ�����
data=xlsread('1Hz.csv');
%ɾ����һ�У���һ��Ϊ��ţ�
%fs = 1/(data(101,[1])-data(100,[1]));       %��ȡ��һ�е�ʱ�䣬�Զ������Ӧ������.����һ�в���ʱ��������һ��ģ����ֶ����������
data(:,[1])=[];                             %ɾ����һ�У���Ϊ��һ��Ӳ��ʾ�����������ʱ��
fs=1000;
%ɾ��ǰ80�У�����ʾ������Ϣ
data([1:100],:)=[];
[Row,Column]=size(data);
%Vcģ��ʾ�������ݣ�������ֱ�ӵ���powergui��FFTģ��
Vc.time = 0:(1/fs):(Row-1)/fs;
Vc.time = Vc.time';
Vc.signals.values = data;
Vc.signals.dimensions = Column;
Vc.blockName = 'FFT_simple/Scope2';
Vc.signals.label = '';
Vc.signals.title = '';
Vc.signals.plotStyle = [1, 1, 1, 1, 1, 1, 1, 1];
power_fftscope

