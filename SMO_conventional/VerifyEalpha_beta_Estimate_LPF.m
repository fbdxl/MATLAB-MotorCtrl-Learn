fosc=10e3;N=10000;
Tosc=N/fosc;

EalphaEstRaw=out.EalphaEstLPF.signals(1).values(end-N+1:end,1);
EalphaEstLPF=out.EalphaEstLPF.signals(2).values(end-N+1:end,1);

y1=fft(EalphaEstRaw);
P1=abs(y1/N);
mag1=P1(1:N/2+1,:)*2;
phase1=angle(y1(1:N/2+1,:))*180/pi;

y1=fft(EalphaEstLPF);
P1=abs(y1/N);
mag2=P1(1:N/2+1,:)*2;
phase2=angle(y1(1:N/2+1,:))*180/pi;

fseq=fosc*(0:N/2)/N;
phaseErr=mod(phase2-phase1,360);
phaseErr=phaseErr - floor(phaseErr/180)*360;

figure(1);
subplot(3,1,1);
plot(fseq,mag1);
subplot(3,1,2);
plot(fseq,mag2);
subplot(3,1,3);
plot(fseq,phaseErr);

