clc;clear;close;
syms Usd Usq Isd Isq Phisd Phisq Rs;
syms Urd Urq Ird Irq Phird Phirq Rr;
syms Lm Lls Llr;
syms p;
syms Wk Ws Wr Wsl;

Ls = Lm + Lls;
Lr = Lm + Llr;
Phisd = Ls*Isd + Lm*Ird;
Phisq = Ls*Isq + Lm*Irq;
Phird = Lr*Ird + Lm*Isd;
Phirq = Lr*Irq + Lm*Isq;

Usd = Rs*Isd + p*Phisd - Wk*Phisq;
Usq = Rs*Isq + p*Phisq + Wk*Phisd;
Urd = Rr*Ird + p*Phird + (Wk-Wr)*Phirq;
Urq = Rr*Irq + p*Phirq + (Wk-Wr)*Phird;

% p=0;
% Wk=Ws;
% Wsl=Ws-Wr;
% M=simplify(expand([Usd;Usq;Urd;Urq]))
% Usd = M(1);

M=[Urd;Urq];
M=subs(M,p,0);
M=subs(M,Wk,Ws);
M=subs(M,Phird,Lr*Ird + Lm*Isd);
M=subs(M,Phirq,Lr*Irq + Lm*Isq);
%M=subs(M,Ws-Wr,Wsl);
Ans1=solve(M,[Ird Irq])

N=[Usd;Usq];
N=subs(N,p,0);
N=subs(N,Wk,Ws);
N=subs(N,Phisd,Ls*Isd + Lm*Ird);
N=subs(N,Phisq,Ls*Isq + Lm*Irq);
N=subs(N,Ird,Ans1.Ird);
N=subs(N,Irq,Ans1.Irq);
N=subs(N,Ws-Wr,Wsl);
N=subs(N,Lls + Lm,Ls);
N=subs(N,Llr+Lm,Lr);
pretty(N)


expand(Usq);