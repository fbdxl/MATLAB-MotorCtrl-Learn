clc;clear;close all;
syms Tem Np Ws Lm Ism Rr s Lr;
syms DTemDRr DTemDLm;

%励磁转矩与Rr之间的关系
Nom=Ws*Lm^2*Rr*s;
Denom=Rr^2+(s*Ws*Lr)^2;
Tem=1.5*Np*Nom/Denom;
DTemDRr=simplify(diff(Tem,Rr));
pretty(DTemDRr);

%励磁转矩与Lm之间的关系，推导过程中近似认为Lr=Lm
Denom=Rr^2+(s*Ws*Lm)^2;
Tem=1.5*Np*Nom/Denom;
DTemDLm=simplify(diff(Tem,Lm));
pretty(DTemDLm);
