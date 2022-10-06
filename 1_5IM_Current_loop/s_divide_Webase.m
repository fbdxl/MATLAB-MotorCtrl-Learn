clc;clear;close all;

syms Vsd Isd;
syms Rs Rou Ls s Webase Lm Lr Tr Lr;

Vsd = Rs*Isd + Rou*Ls*s*Isd/Webase + Lm/Lr*s/Webase*(Lm/(1+Tr*s/Webase))*Isd;
Vsd = expand(Vsd)
pretty(simplify(Vsd/Isd))
pretty(simplify(solve(Vsd==1,Isd)));