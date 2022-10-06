function [ y ] = my_sign2( x )
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
if x<0
    y=-1;
elseif x == 0
    y=0;
else
    y=1;
end

