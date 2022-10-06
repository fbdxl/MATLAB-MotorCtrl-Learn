clc;clear;close all;
syms Isd(t) Isq(t) Ism(t);
syms Phif Ld Lq Wr;
%Gain=-Phif
Isd=-Phif*(1-cos(Wr*t))/Ld;
Isq=-Phif*sin(Wr*t)/Lq;
Ism=sqrt(Isd*Isd + Isq*Isq);
pretty(simplify(Ism))