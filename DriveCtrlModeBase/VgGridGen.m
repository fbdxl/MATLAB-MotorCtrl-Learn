/*
 * Code example
 *   xD[0] = u0[0];
*/
float   iTempRampOut;
float   fdVoltPerStep;
float   ACPhaseRamp;
float   ACPhaseMag;
fdVoltPerStep = dVoltPerSec[0]*SampleTime;

ACPhaseMag = ACLine[0]*1.414/1.732;
ACPhaseRamp = xD[1];

if(ACPhaseMag>ACPhaseRamp)
{
    if(ACPhaseMag- ACPhaseRamp>fdVoltPerStep)
    {
       ACPhaseRamp += fdVoltPerStep;
    }
    else
    {
        ACPhaseRamp =ACPhaseMag;
    }
}
else
{
    if(-ACPhaseMag +ACPhaseRamp>fdVoltPerStep)
    {
        ACPhaseRamp -= fdVoltPerStep;
    }
    else
    {
        ACPhaseRamp = ACPhaseMag;
    }
}
xD[1] = ACPhaseRamp;

xD[0] += Freq[0]*2*pi*SampleTime;//½Ç¶ÈÐÅÏ¢

if(xD[0]>2*pi)
{
    xD[0]-=2*pi;
}

if(HarmonicNum[0] == 0)
{
    xD[2] = 0;
}
else
{
    xD[2] = HarmonicMag[0];
}