function H=ditfft2(xn,M)
%DIT-FFT快速傅里叶变换程序
%程序名称：ditfft
%程序作者：grace_fight 2018/10/29

b=length(xn);                %调整补零
if(b<2^M)
    xn=[xn,zeros(1,(2^M)-b)];
end
b=length(xn);                %补零后xn长度
A=zeros(1,b);                %xn转换数组
N=2^M;                       %计算点数
nxd=bin2dec(fliplr(dec2bin([1:N]-1,M)))+1;%倒序排列序号
xn=xn(nxd);                               %倒序xn         
for i=1:N                                 %N个1点DFT，xn本身，赋值到数组A
   A(i)=xn(i);
end
for L = 1:M                               %DIT-FFT变换，M级蝶形变换
    B = 2^(L-1);                          %两个输入数据距离
    for J = 0:B-1;                        %旋转因子处理
        P=2^(M-L)*J;
        for k=(J+1):2^L:N;                %本次蝶形运算跨越时间
            W=exp(-j*2*pi*P/N);           %对应旋转因子
            T=A(k)+A(k+B)*W;              %进行蝶形运算
            A(k+B)=A(k)-A(k+B)*W;
            A(k)=T;
        end
    end
end
H=A;                                      %输出H为A