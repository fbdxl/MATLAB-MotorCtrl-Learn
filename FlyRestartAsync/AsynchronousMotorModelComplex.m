clc;clear;close;
syms Usd Usq Isd Isq Phisd Phisq Rs;
syms Urd Urq Ird Irq Phird Phirq Rr;
syms Lm Lls Llr Ls Lr;
syms p;
syms Wk Ws Wr Wsl;
syms Us Is Ur Ir Phis Phir;

% Ls = Lm + Lls;
% Lr = Lm + Llr;
% Phisd = Ls*Isd + Lm*Ird;
% Phisq = Ls*Isq + Lm*Irq;
% Phird = Lr*Ird + Lm*Isd;
% Phirq = Lr*Irq + Lm*Isq;

Usd = Rs*Isd + p*Phisd - Wk*Phisq;
Usq = Rs*Isq + p*Phisq + Wk*Phisd;
Urd = Rr*Ird + p*Phird - (Wk-Wr)*Phirq;
Urq = Rr*Irq + p*Phirq + (Wk-Wr)*Phird;

Is=Isd+1j*Isq;
Phis=Phisd+1j*Phisq;
Phir=Phird+1j*Phirq;
Ir=Ird+1j*Irq;

Ur=Urd+1j*Urq;
Ur=subs(Ur,p,0);
Ur=subs(Ur,Wk,Ws);
Ur=subs(Ur,Ws-Wr,Wsl)
Ur=collect(Ur,[Rr,-1j*Wsl])
Ur=subs(Ur,Ird+1j*Irq,Ir)
Ur=subs(Ur,Phird+1j*Phirq,Phir)
%Ur=subs(Ur,Isd+1j*Isq,Is)
Phir=Phird + 1j*Phirq;
Phir=subs(Phir,Phird,Lr*Ird+Lm*Isd);
Phir=subs(Phir,Phirq,Lr*Irq+Lm*Isq);
Phir=collect(Phir,[Lr,Lm])
Phir=subs(Phir,Isd+1j*Isq,Is)

% Ans1=solve(Ur==0,Ir)