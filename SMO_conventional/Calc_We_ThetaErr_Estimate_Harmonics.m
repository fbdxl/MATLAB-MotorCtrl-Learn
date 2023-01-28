fosc=1e6;N=1e6;
Tosc=N/fosc;

WeEstRaw=out.WeEst.signals(1).values(end-N+1:end,1);
ThetaErrRaw=out.ThetaEst.signals(2).values(end-N+1:end,1);

y1=fft(WeEstRaw);
P1=abs(y1/N);
mag1=P1(1:N/2+1,:);
mag1(2:end-1)=mag1(2:end-1)*2;
phase1=angle(y1(1:N/2+1,:))*180/pi;

y1=fft(ThetaErrRaw);
P1=abs(y1/N);
mag2=P1(1:N/2+1,:);
mag2(2:end-1)=mag2(2:end-1)*2;
phase2=angle(y1(1:N/2+1,:))*180/pi;


fseq=fosc*(0:N/2)/N;
phaseErr=mod(phase2-phase1,360);
phaseErr=phaseErr - floor(phaseErr/180)*360;
EndFreq=10e3;
EndIndex=find(fseq>10e3,1);

figure(1);
subplot(2,1,1);
plot(fseq(2:EndIndex),mag1(2:EndIndex));grid on;
subplot(2,1,2);
plot(fseq(2:EndIndex),mag2(2:EndIndex));grid on;

