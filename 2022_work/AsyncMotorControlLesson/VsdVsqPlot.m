clc;clear;close;

%Vsd Ad Dd Vsq  Aq Dq Cq Ws
M = readmatrix('VsdVsqPart.csv');

DataEnd= 13;

Vsd=M(1:DataEnd,1);
Ad=M(1:DataEnd,2);
Bd=zeros(size(Ad));
Cd=zeros(size(Ad));
Dd=M(1:DataEnd,3);

Vsq=M(1:DataEnd,4);
Aq=M(1:DataEnd,5);
Bq=zeros(size(Aq));
Dq=M(1:DataEnd,6);
Cq=M(1:DataEnd,7);

Ws=M(1:DataEnd,end);
Vs=sqrt(Vsd.*Vsd+Vsq.*Vsq);
VoltRs=sqrt(Ad.*Ad+Aq.*Aq);
VoltDiff=Bd+Bq;
VoltE=sqrt((Cd+Dd).*(Cd+Dd)+(Cq+Dq).*(Cq+Dq));

LegendStr={'Vs';'A';'B';'C'};
plot(Ws,Vs,Ws,VoltRs,...
     Ws,VoltDiff,Ws,VoltE*0.95,'LineWidth',1);
 hold on;grid on;
 %legend(LegendStr);
set(gca,'FontSize',14,'FontName','Times New Roman');
%set(gco,'LineWidth',1);

% LegendStr={'Vsq';'A';'B';'D'};
% plot(M(1:DataEnd,end),M(1:DataEnd,4),M(1:DataEnd,end),M(1:DataEnd,5),...
%      M(1:DataEnd,end),M(1:DataEnd,6),M(1:DataEnd,end),M(1:DataEnd,7));
%  hold on;grid on;legend(LegendStr);
% set(gca,'FontSize',14,'FontName','Times New Roman');

%plot(M(1:end,end),M(1:end,5));hold on;grid on;
%plot(M(1:end,end),M(1:end,6));hold on;grid on;
