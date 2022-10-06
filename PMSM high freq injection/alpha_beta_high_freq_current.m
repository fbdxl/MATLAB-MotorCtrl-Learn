clc;clear;close all;
syms Wh Ld Lq ;
syms Theta; %转子角度
syms ThetaErr; %观测误差

MatRF=[cos(ThetaErr),sin(ThetaErr); -sin(ThetaErr),cos(ThetaErr)];%Matrix Rotate Forward
Mat2r2s=[cos(Theta),-sin(Theta);sin(Theta),cos(Theta)]; %dq轴到alpha beta轴变换矩阵
MatImped=[1j*Wh*Ld,0;0,1j*Wh*Lq];

Output=Mat2r2s*inv(MatImped)*MatRF;

Output=simplify(Output)