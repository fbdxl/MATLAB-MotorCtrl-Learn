% syms y;
% dsolve('Dy==7',y(0)=0)
clc;clear;
syms y(t) a
eqn = diff(y) == a*y;
S = dsolve(eqn,'t')