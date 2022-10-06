clc;clear;close all;

hgcf_1=figure(1);
hgcf_2=figure(2);


%========================
%5.5kW异步机转速跟踪转矩
%========================
Lm=5839/4096;
Rr=89/4096;
Lr=6092/4096;
Ws=1.05;
% Wr=linspace(-1,1,10000);
% s=(Ws-Wr)/Ws;
s=linspace(-1,1,10000);
Ztorq=(9/4)*(Ws*Lm^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%标幺化公式

for Ism=1:0.4:2

Tem=Ztorq*Ism^2;%标幺化公式
%figure(1);plot(Wr,Tem);grid on;hold on;
hline=plot(s,Tem);grid on;hold on;
hline.DisplayName=strcat('Ism=',num2str(Ism));

end

legend;

axis([-inf,inf,-3,3]);
set(gca,'FontSize',16,'FontName','Times New Roman');
set(findobj('type','line'),'LineWidth',1);


