function [ f ] = Product( n )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
if n==0
    f=1;
else
    f=n*Product(n-1);

end

