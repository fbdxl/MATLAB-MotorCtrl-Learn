%===============================================================================================
%����Ƶ��ͼ
%===============================================================================================
FFTMag=ones(SheetNum,FFTLength,OscChn);
FFTMag2=ones(SheetNum,FFTLength/2+1,OscChn);
Y=ones(FFTLength,OscChn);
for n=StartSheet:StopSheet
    Y=fft(OscDataArray(n));
    FFTMag(n) = Y;
    FFTMag2(n,:,:)=FFTMag(n,1:FFTLength/2+1,:);
end

Fs = 4000;       %����Ƶ�ʹ̶�Ϊ4000Hz
f = (0:FFTLength/2) * Fs / FFTLength; %Ƶ������

%===============================================================================================
%����Ƶ��ͼ
%===============================================================================================
FontSizeMy = 12;
FontNameMy = 'Times New Roman';

%����Isd��Ƶ��
figure(1);
subplot(3,1,1);
plot(f(2:end), FFTMag2(1,2:end,1),'LineWidth',1); grid on; hold on;  
title('Isd Spectrum 2kHz Fsw 1.5kW IM');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

subplot(3,1,2);
plot(f(2:end), FFTMag2(1,2:end,3),'LineWidth',1); grid on; hold on;  
title('Isb ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);

subplot(3,1,3);
plot(f(2:end), FFTMag2(1,2:end,6),'LineWidth',1); grid on; hold on;  
title('Isb ADԭʼֵƵ�� 2kHz Fsw 50Hz����');
xlabel('f (Hz)');
ylabel('��ֵ');
set(get(gca,'XLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'YLabel'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(get(gca,'Title'),'FontSize',FontSizeMy,'FontName',FontNameMy);
set(gca,'FontSize',FontSizeMy,'FontName',FontNameMy);