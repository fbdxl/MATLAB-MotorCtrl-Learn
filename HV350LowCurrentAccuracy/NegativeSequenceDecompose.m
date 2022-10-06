clc;clear;
Alpha = cos(120*pi/180)+1i*sin(120*pi/180);

PhaseA=1+1i*0;PhaseB=cos(-120*pi/180)+1i*sin(-120*pi/180);PhaseC=cos(120*pi/180)+1i*sin(120*pi/180);
Ia=0.921*PhaseA;
Ib=1.668*PhaseB;
Ic=1.804*PhaseC;

I1=abs(Ia+Alpha*Ib+(Alpha^2)*Ic)/3
I2=abs(Ia+(Alpha^2)*Ib+Alpha*Ic)/3
I0=abs(Ia+Ib+Ic)/3