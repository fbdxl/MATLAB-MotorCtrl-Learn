for n=1:1:100
    EPS=EPS/2;
    if(1+EPS)==1
        EPS=EPS*2;break
    end
end
n,EPS