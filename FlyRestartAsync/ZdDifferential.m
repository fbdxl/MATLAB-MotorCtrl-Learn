clc;clear;close;
syms Ws Wr Lr Rr func;
syms results;
func=Wr*Lr^2*(Ws-Wr)^2-(2*Ws-Wr)*Rr^2;
results=solve(func==0,Ws);
pretty(results)