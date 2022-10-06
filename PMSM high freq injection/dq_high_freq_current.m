clc;clear;close all;
syms Rsd Rsq Ld Lq Wh ThetaErr;
syms Zd Zq;
MatRF=[cos(ThetaErr),sin(ThetaErr); -sin(ThetaErr),cos(ThetaErr)];%Matrix Rotate Forward
MatImped=[Rsd+1j*Wh*Ld,0;0,Rsq+1j*Wh*Lq];

% MatImped2=[Zd,0;0,Zq];
% Zd=Rs+1j*Wh*Ld;
% Zq=Rs+1j*Wh*Lq;

Output=inv(MatRF)*inv(MatImped)*MatRF;

Output=simplify(Output);

Output=subs(Output,Rsd+1j*Wh*Ld,Zd); %ע�⣬Ҫ��������Zd��Zq�Ķ�����������subs���Ż���Ч
Output=subs(Output,Rsq+1j*Wh*Lq,Zq)