clc;clear;close;
Length =256; %�洢���ĵ�Ԫ��
Bits = 12;%���ݿ� N bit

fidc = fopen('D:\Dev_EngConv\1-Aux\HV350ResolverCard\sine.txt','wt');%��/����ָ��·���µ��ļ�
SineTable=zeros(1,Length);
for(x = 1 : Length)
    SineValue=(2^Bits/2-1)*sin(2*pi*(x-1)/Length)+(2^Bits/2);
    SineTable(x)=SineValue;
    fprintf(fidc,'%4d,',round(SineValue));
    if rem(x,8)==0
        fprintf(fidc,'\n');
    end
    
    
end
fclose(fidc);%�ر��ļ�

plot(SineTable);
