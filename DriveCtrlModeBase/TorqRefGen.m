/*
 * Code example
 *   xD[0] = u0[0];
*/
float   fRampUp;
float   fRampDown;
float   fRiseTimeTmp;
float   fDownTimeTmp;
float   fDestVule;

//float   fHarmoTroque;
float   fThetaStep;
float   SpdRatio;
float   SpdLmtTemp;
float   fABSSpdRPM;
float   fRatioOfDes;

float fTemp;
//float   fTempSqrt;
float   fCut;
float   fTurn;
float   fKp;
float   fKi;
float   fIntPartStep;
float   fErr;

float   fPart;

float   fPIOut;

float   fPIUpLmt;
float   fPIDnLmt;

float   wFdbpu;
float   fSpdRPMTemp;
float   fTorqueAdd;
float   fTorqueAddSign;

float   fTempJspu;
if(RiseTime[0]>0.001)
{
    fRiseTimeTmp = RiseTime[0];
}
else
{
    fRiseTimeTmp = 0.001;
}

if(FallTime[0]>0.001)
{
    fDownTimeTmp = FallTime[0];
}
else
{
    fDownTimeTmp = 0.001;
}
fRampUp = NormalValue[0]/fRiseTimeTmp*SampleTime;

fRampDown = NormalValue[0]/fDownTimeTmp*SampleTime;

SpdLmtTemp = RPMNorm[0]*SpdPercentLmt[0]/100;

if(SpdLmtTemp<0.001)
{
    SpdLmtTemp = 0.001;
}

if(w[0]<0)
{
    fABSSpdRPM = -w[0]*30/pi;
}
else
{
    fABSSpdRPM = w[0]*30/pi;
}

if(fABSSpdRPM/SpdLmtTemp>1.2)
{
    fRatioOfDes = 0;
}
else if(fABSSpdRPM/SpdLmtTemp<1)
{
    fRatioOfDes = 1;
}
else
{
    fRatioOfDes = -5*(fABSSpdRPM/SpdLmtTemp - 1.2);
}


fDestVule = NormalValue[0]*DestValuePercent[0]/100;

if(xD[0]>fDestVule)
{
    if((xD[0]-fDestVule)>fRampDown)
    {
        xD[0] = xD[0] - fRampDown;
    }
    else
    {
        xD[0] = fDestVule;
    }
}
else
{
    if((-xD[0]+fDestVule)>fRampUp)
    {
        xD[0] = xD[0] + fRampUp;
    }
    else
    {
        xD[0] = fDestVule;
    }
}
fThetaStep = w[0]*SampleTime*RatioOfW[0];
xD[1] += fThetaStep;

if(xD[1]>2*pi)
{
    xD[1] -= 2*pi; 
}
else if(xD[1]<0)
{
    xD[1] += 2*pi;
}
0,0,0,0,0,0,0,0,0,0
xD[3] = xD[0]*fRatioOfDes;