function ValueAfterRamp = Ramps(ValueInput,AccTime,DecTime,ValueBase, Tsample)
%#codegen

%��̬�����������ʼ��
%syms ValueCurrent;
persistent ValueCurrent;
if isempty(ValueCurrent)
    ValueCurrent = 0;
end

StepAcc = ValueBase*Tsample/AccTime;
StepDec = ValueBase*Tsample/DecTime;
if ValueInput > ValueCurrent;
    if (ValueInput - ValueCurrent)<StepAcc;
        ValueAfterRamp = ValueInput;
    else 
        ValueAfterRamp = ValueCurrent + StepAcc;
    end
elseif ValueInput < ValueCurrent;
    if (ValueCurrent - ValueInput)<StepDec;
        ValueAfterRamp = ValueInput;
    else 
        ValueAfterRamp = ValueCurrent - StepDec;
    end
else 
    ValueAfterRamp = ValueInput;
end
ValueCurrent = ValueAfterRamp;