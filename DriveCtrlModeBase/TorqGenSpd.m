/*
 * Code example
 *   xD[0] = u0[0];
*/
float   TorqErrPU;

float   SpdDeltaPU;
float   JPUTmp;

if(Jpu[0]<0.01)
{
    JPUTmp = 0.01;    
}
else
{
    JPUTmp = Jpu[0];
}

TorqErrPU = (TorqMotor[0] - TorqLoad[0])/TorqBase[0];

SpdDeltaPU = TorqErrPU/JPUTmp*SampleTime;

xD[0] = SpdDeltaPU;