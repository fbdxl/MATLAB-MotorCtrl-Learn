function[sys,x0,str,ts]=ziji_sfun4(t,x,u,flag)
switch flag,
    case 0,
    [sys,x0,str,ts]=mdlInitializeSizes;
    case 3,
    sys=mdlOutputs(t,x,u);
    case 2,
    sys2=[];
    case 9,
    sys=[];
otherwise
    error(['unhandled flag=',num2str(flag)]);
end

function[sys,x0,str,ts]=mdlInitializeSizes()
sizes=simsizes;
sizes.NumContStates=0;
sizes.NumDiscStates=0;
sizes.NumOutputs=1;
sizes.NumInputs=6;
sizes.DirFeedthrough=1;
sizes.NumSampleTimes=1;
sys=simsizes(sizes);
x0=[];
str=[];
ts=[-1 0];
function sys=mdlOutputs(t,x,u)
if u(6)==4
        if u(2)>=(-u(4))
           sys=1;
        else
           if u(3)<=(-u(4))
              sys=2;
           else
              if u(1)<=(-u(5))
                 sys=4;
              else
                 sys=3;
              end
           end
        end
    
else
    sys=0;
end
        

        


