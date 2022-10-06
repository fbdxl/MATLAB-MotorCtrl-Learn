syms f
a=sym([0  0 f
       0  f  0
       0  0  f]);
b=[0  0  1
     1  0  1
      0  1  0];
a*b;