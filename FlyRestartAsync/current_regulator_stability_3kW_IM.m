clc;clear;close all;

Ws=1;%电机参数
Wr=0.5;
Rs=101/4096;
Rr=103/4096;
Lm=3663/4096;
Lls=251/4096;
Llr=Lls;
Ls=Lm+Lls;
Lr=Lm+Llr;
Den=(Rr^2+((Ws-Wr).^2)*(Lr^2));
Zd=Rs+Ws.*(Ws-Wr)*(Lm^2)*Rr./Den;
Zq=Ws*Ls-Ws*Lr.*((Ws-Wr).^2)*(Lm^2)./Den;
Wsl=Ws-Wr;

fctrl=4000;
Pbase=3000;
Vbase=380*1.414/1.732;
Ibase=2*Pbase/Vbase/3;

%转速跟踪电流环控制对象伯德图
figure(1);
Wa=linspace(1e-1,100,10000);
s=1j*Wa;

G1=Rs+(s+1j*Ws)*Ls;
G2=(s+1j*Ws)*(Lm^2)./(Lr+Rr./(s+1j*Wsl));
Gin=1./(G1-G2);
GinMag=20*log(abs(Gin));
GinAngle=angle(Gin)*180/pi;
ax1=subplot(2,1,1);
semilogx(Wa,GinMag); grid on;hold on;
ax2=subplot(2,1,2);
semilogx(Wa,GinAngle); grid on;hold on;

% lgStr=[];
% n=1;
% for Ws=0:0.2:1
%     Wsl=Ws-Wr;
%     G1=Rs+(s+1j*Ws)*Ls;
%     G2=(s+1j*Ws)*(Lm^2)./(Lr+Rr./(s+1j*Wsl));
%     Gin=1./(G1-G2);
%     GinMag=20*log(abs(Gin));
%     GinAngle=angle(Gin)*180/pi;
%     ax1=subplot(2,1,1);
%     semilogx(Wa,GinMag); grid on;hold on;
%     ax2=subplot(2,1,2);
%     semilogx(Wa,GinAngle); grid on;hold on;
%     lgStr{n}=strcat('Ws=',num2str(Ws));n=n+1;
% end
% legend(ax1,lgStr);
% legend(ax2,lgStr);

%电流环伯德图
figure(2);
Kp=0.4*Vbase/Ibase;
Taoi=0.006*fctrl*Vbase/Ibase;
Gds=exp(-1.5*s/fctrl);
Gpi=Kp*(1+1./(Taoi*s));
Gopen=Gin.*Gds.*Gpi;
GopenMag=20*log(abs(Gopen));
GopenAngle=angle(Gopen)*180/pi;
ax1=subplot(2,1,1);
semilogx(Wa,GopenMag); grid on;hold on;
ax2=subplot(2,1,2);
semilogx(Wa,GopenAngle); grid on;hold on;
