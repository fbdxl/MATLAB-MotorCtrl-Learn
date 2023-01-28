clc;clear;close all;

%5.5kW永磁机参数
PN=1.5e3;
VN=380;
IN=2.6;
fN=60;
Np=2;
n=60*fN/Np;

Ld=65.13e-3;
Lq=120e-3;
Rs=6.569;
Vnoload=307;
Phif=Vnoload*sqrt(2)/sqrt(3)/(2*pi*fN);
J=0.01;

Td=Ld/Rs;
Tq=Lq/Rs;




%=============================================%
%控制基准值计算
%=============================================%
Pbase=PN;
Vbase=VN*sqrt(2)/sqrt(3);
Ibase=2*Pbase/Vbase/3;
Zbase=Vbase/Ibase;
Webase=2*pi*fN;
Wmbase=Webase/Np;
Tbase=1/Webase;
Lbase=Zbase/Webase;
Tembase=Pbase/Wmbase;
Phibase=Vbase/Webase;
Jbase=Tembase/Wmbase;

%=============================================%
%标么化电机参数
%=============================================%
RsPU=Rs/Zbase;
LdPU=Ld/Lbase;
LqPU=Lq/Lbase;
JPU=J/Jbase;
PhifPU=Phif/Phibase;

TdPU=Td/Tbase;
TqPU=Tq/Tbase;


%=============================================%
%控制参数
%=============================================%
KpCRd=1.04;
TaoiCRd=4e-3;
KpCRq=1.04;
TaoiCRq=4e-3;

KpSR=5.51;
TaoiSR=80e-3;

Ts=1e-6;
fsw=5000;
fctrl=fsw*2;
Tctrl=1/fctrl;
TctrlPU=Tctrl/Tbase;


%=============================================%
%滑模观测器参数
%=============================================%
fLPF=100;
TaoLPF=1/fLPF/2/pi;

fcutPLL=100;
fPIPLL=20;
KpPLL=2*pi*fcutPLL/Webase;
KiPLL=2*pi*fPIPLL*KpPLL;
TaoiPLL=KpPLL/KiPLL;

 