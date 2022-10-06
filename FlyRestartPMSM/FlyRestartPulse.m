clc;clear;close all;
syms Vsd(t) Vsq(t) Isd(t) Isq(t) Wr;
syms Rs Ld Lq Phif;
Vsd =Rs*Isd + Ld*diff(Isd,t) - Wr*Lq*Isq;
Vsq =Rs*Isq + Lq*diff(Isq,t) + Wr*Ld*Isd + Wr*Phif;
Vsd=subs(Vsd,Rs,0);
Vsq=subs(Vsq,Rs,0);
eqn=[Vsd == 0,Vsq == 0];
[Isd,Isq]=dsolve(eqn,'Isd(0)=0,Isq(0)=0');
% subs(Isd,Rs,0);
% subs(Isq,Rs,0);
pretty(simplify(Isd))
pretty(simplify(Isq))
