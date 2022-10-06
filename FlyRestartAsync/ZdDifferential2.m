clc;clear;close;
syms Ws Wr Lr Rr Lm func Rs Zd;
syms results;
Zd=Rs + Rr*(Ws*(Ws-Wr)*Lm^2)/(Rr^2+(Ws-Wr)^2*Lr^2);
DZd=diff(Zd,Ws);
results=solve(DZd==0,Ws);
pretty(results);
Ws=results(1);
Zd=Rs + Rr*(Ws*(Ws-Wr)*Lm^2)/(Rr^2+(Ws-Wr)^2*Lr^2);
pretty(Zd)