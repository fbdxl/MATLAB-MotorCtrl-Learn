clc;clear;close all;

%5.5kW电机参数
Lm=5839/4096;
Rr=99/4096;
Lr=6092/4096;
Llr=241/4096;
% funx=@(Ws, s) Ws;
% funy=@(Ws,s) s;
% funz=@(Ws,s) 1.5*Np*Ws*Lm^2/(Rr/s+s*Ws^2*Lr^2/Rr);
% fmesh(funx,funy,funz,[0 1 0 1]);hold on;
% xlabel('Ws');ylabel('s');zlabel('Tem');
Ws=1.07;
s=linspace(-1,1,10000);
Ism=1/Lm;
Tem=(9/4)*(Ws*Lm^2*Ism^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%标幺化公式

%绘制不同Rr下的转矩曲线
figure(1);
lgStr=[];
n=1;
for RrQ12=100:200:800
    Rr=RrQ12/4096;
    Tem=(9/4)*(Ws*Lm^2*Ism^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%标幺化公式
    plot(s,Tem);grid on; hold on;
    lgStr{n}=strcat('Rrpu=',num2str(Rr,3));n=n+1;
end
legend(lgStr);

%绘制不同Lm下的转矩曲线
figure(2);
lgStr=[];
n=1;
Rr=200/4096;
for LmQ12=5839:1000:9000
    Lm=LmQ12/4096;
    Lr=Lm+Llr;
    Ism=1/Lm;
    Tem=(9/4)*(Ws*Lm^2*Ism^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%标幺化公式
    plot(s,Tem);grid on; hold on;
    lgStr{n}=strcat('Lmpu=',num2str(Lm,3));n=n+1;
end
legend(lgStr);
% plot(s,Tem);grid on; hold on;
% lgStr=[lgStr;'5.5kW IM'];
% legend(lgStr);
