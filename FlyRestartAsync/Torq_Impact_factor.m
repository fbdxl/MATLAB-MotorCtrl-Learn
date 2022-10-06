clc;clear;close all;
syms Tem Np Ws Lm Ism Rr s Lr;
syms DTemDRr DTemDLm;

%����ת����Rr֮��Ĺ�ϵ
Nom=Ws*Lm^2*Rr*s;
Denom=Rr^2+(s*Ws*Lr)^2;
Tem=1.5*Np*Nom/Denom;
DTemDRr=simplify(diff(Tem,Rr));
pretty(DTemDRr);

%����ת����Lm֮��Ĺ�ϵ���Ƶ������н�����ΪLr=Lm
Denom=Rr^2+(s*Ws*Lm)^2;
Tem=1.5*Np*Nom/Denom;
DTemDLm=simplify(diff(Tem,Lm));
pretty(DTemDLm);
