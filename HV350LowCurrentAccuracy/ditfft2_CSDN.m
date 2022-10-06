function H=ditfft2(xn,M)
%DIT-FFT���ٸ���Ҷ�任����
%�������ƣ�ditfft
%�������ߣ�grace_fight 2018/10/29

b=length(xn);                %��������
if(b<2^M)
    xn=[xn,zeros(1,(2^M)-b)];
end
b=length(xn);                %�����xn����
A=zeros(1,b);                %xnת������
N=2^M;                       %�������
nxd=bin2dec(fliplr(dec2bin([1:N]-1,M)))+1;%�����������
xn=xn(nxd);                               %����xn         
for i=1:N                                 %N��1��DFT��xn������ֵ������A
   A(i)=xn(i);
end
for L = 1:M                               %DIT-FFT�任��M�����α任
    B = 2^(L-1);                          %�����������ݾ���
    for J = 0:B-1;                        %��ת���Ӵ���
        P=2^(M-L)*J;
        for k=(J+1):2^L:N;                %���ε��������Խʱ��
            W=exp(-j*2*pi*P/N);           %��Ӧ��ת����
            T=A(k)+A(k+B)*W;              %���е�������
            A(k+B)=A(k)-A(k+B)*W;
            A(k)=T;
        end
    end
end
H=A;                                      %���HΪA