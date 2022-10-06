
%=============================================%
%铭牌参数
%=============================================%
PN=5500;
VN=380;
IN=11.7;
fN=50;
n=1440;

%=============================================%
%等效电路参数
%=============================================%
Rs=1.06;
Rr=0.565;
Lls=5.4e-3;
Llr=5.4e-3;
Lm=119.3e-3;
Ls=Lm+Lls;
Lr=Lm+Llr;
Taor=Lr/Rr;
Taos=Ls/Rs;
J=0.09;



%=============================================%
%控制基准值计算
%=============================================%
np=ceil(60*fN/n);
Pbase=PN;
Vbase=VN*sqrt(2)/sqrt(3);
Ibase=2*Pbase/Vbase/3;
Zbase=Vbase/Ibase;
Webase=2*pi*fN;
Wmbase=Webase/np;
Timebase=1/Webase;
Lbase=Zbase/Webase;
Tembase=Pbase/Wmbase;
Phibase=Vbase/Webase;
Jbase=Tembase/Wmbase;

%=============================================%
%标么化电机参数
%=============================================%
RsPU=Rs/Zbase;
RrPU=Rr/Zbase;
LmPU=Lm/Lbase;
LlsPU=Lls/Lbase;
LlrPU=Llr/Lbase;
LsPU=LmPU+LlsPU;
LrPU=LmPU+LlrPU;
JPU=J/Jbase;
LeakCoef=1-LmPU^2/LsPU/LrPU;
TaorPU=Taor/Timebase;
TaosPU=Taos/Timebase;

