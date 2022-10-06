clear;clc;close;
x=[-2*pi:pi/20:2*pi];
figure(1);
plot(x,sin(x),'r:*');
axis([-9 9 -1.2 1.2]);
grid on;
hold on;
plot(x,cos(x),'b-');
xlabel('x');
ylabel('sin(x),cos(x)');
title('y=sin(x),z=cos(x)');
legend('y=sin(x)','z=cos(x)');%对图中曲线添加说明
text(0,1,'\fontsize{12}\rightarrow\it cos(x)\fontname{宋体}极大值');