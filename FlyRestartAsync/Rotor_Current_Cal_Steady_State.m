clc;clear;close all;

syms PhIrd Phirq Ird Irq Isd Isq;
syms Urd Urq ;
syms Ur Ir Is;
syms Rs Rr Lm Lls Llr Ls Lr Np;
syms Ws Wr Wsl;
syms p;%微分算子
syms result;
syms Tem;
syms Ism;%电流模值
Ls=Lm+Llr;
Lr=Lm+Llr;
%Wsl=Ws-Wr;

%计算转子电流
Phird=Lm*Isd+Lr*Ird;
Phirq=Lm*Isq+Lr*Irq;

Urd=Ird*Rr+p*(Phird)-Wsl*Phirq;
Urq=Irq*Rr+p*(Phirq)+Wsl*Phird;
%Urd=laplace(Urd);
%Urq=laplace(Urq);

eqn=[Urd ==0 , Urq == 0];
result=solve(eqn,[Ird Irq]);
result.Ird=simplify(result.Ird);
result.Ird=subs(result.Ird,p,0);
result.Irq=subs(result.Irq,p,0);
pretty(simplify(result.Ird));
pretty(simplify(result.Irq));
%result.Irq=pretty(simplify(result.Irq))

%计算电磁转矩
Phird=Lm*Isd+Lr*result.Ird;
Phirq=Lm*Isq+Lr*result.Irq;
Tem=1.5*Np*(Phird*Isq-Phirq*Isd)*Lm/Lr;
Tem=simplify(Tem);
Tem=subs(Tem,Isd^2+Isq^2,Ism^2);
pretty(Tem);

%绘制电机转矩的三维图形
figure(1);
%subplot(2,1,1);
Np=3;
Lm=3663/4096;
Rr=103/4096;
Lr=3914/4096;
% Ism=1;
% funx=@(Ws, s) Ws;
% funy=@(Ws,s) s;
% funz=@(Ws,s) 1.5*Np*(s*Ws*Lm^2*Rr*Ism^2)/(Rr^2+s^2*Ws^2*Lr^2);
% fmesh(funx,funy,funz,[0 1 0 1]);hold on;
% xlabel('Ws');ylabel('s');zlabel('Tem');
Ws=1.07;
Ism=1.042*1.2;
s=linspace(-1,1,10000);
Tem=(9/4)*(Ws*Lm^2*Ism^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%标幺化公式
plot(s,Tem);grid on;hold on;
lgStr=[];
lgStr=[lgStr;'3  kW IM'];

%5.5kW电机励磁转矩
%subplot(2,1,2);
Np=2;
Lm=5839/4096;
Rr=400/4096;
Lr=6092/4096;
% funx=@(Ws, s) Ws;
% funy=@(Ws,s) s;
% funz=@(Ws,s) 1.5*Np*Ws*Lm^2/(Rr/s+s*Ws^2*Lr^2/Rr);
% fmesh(funx,funy,funz,[0 1 0 1]);hold on;
% xlabel('Ws');ylabel('s');zlabel('Tem');
Ws=1.07;
s=linspace(-1,1,10000);
Ism=0.67*1.2;
Tem=(9/4)*(Ws*Lm^2*Ism^2)./(Rr./s+s*Ws^2*Lr^2/Rr);%标幺化公式
plot(s,Tem);grid on; hold on;
lgStr=[lgStr;'5.5kW IM'];
legend(lgStr);
