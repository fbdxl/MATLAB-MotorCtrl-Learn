clc;clear;close all;
syms Wh Ld Lq ;
syms Theta; %ת�ӽǶ�
syms ThetaErr; %�۲����

MatRF=[cos(ThetaErr),sin(ThetaErr); -sin(ThetaErr),cos(ThetaErr)];%Matrix Rotate Forward
Mat2r2s=[cos(Theta),-sin(Theta);sin(Theta),cos(Theta)]; %dq�ᵽalpha beta��任����
MatImped=[1j*Wh*Ld,0;0,1j*Wh*Lq];

Output=Mat2r2s*inv(MatImped)*MatRF;

Output=simplify(Output)