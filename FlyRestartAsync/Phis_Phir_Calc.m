clc;clear;close all;
syms Phis Phir Is Ir Lm Lr Ls;
syms result;
syms Tmp;

%将Phir表示成Phis
eqn=Ls*Is +Lm*Ir==Phis;
result=solve(eqn,Ir);
Phir=Lm*Is+Lr*result;
pretty(Phir);

%将Phis表示成Phir
eqn=Lm*Is +Lr*Ir==Tmp;
result=solve(eqn,Ir);
Phis=Ls*Is+Lm*result;
pretty(Phis);