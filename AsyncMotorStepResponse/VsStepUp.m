clc;clear;close all;
syms s Rs Ws Ls Lm Lr Rr Wsl;
Nom=1/s;
Den=Rs+(s+1j*Ws)*Ls-(s+1j*Ws)*Lm^2/(Lr+Rr/(s+1j*Wsl));
F=Nom/Den;
real(F);
pretty(F);

%��������˹�任�Ľ��
Result=simplify(ilaplace(F));
pretty(Result)
%fplot(real(Result));
% syms a b c d;
% real((a+1j*b)/(c+1j*d))