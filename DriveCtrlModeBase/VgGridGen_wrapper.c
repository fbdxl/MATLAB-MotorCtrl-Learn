
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */

#define	SampleTime	0.0001
#define	pi 3.14159265359
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void VgGridGen_Outputs_wrapper(const real_T *ACLine,
			const real_T *Freq,
			const real_T *HarmonicNum,
			const real_T *HarmonicMag,
			const real_T *dVoltPerSec,
			real_T *VgPhaseA,
			real_T *VgPhaseB,
			real_T *VgPhaseC,
			const real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/
float ThetaH;
ThetaH = xD[0]*HarmonicNum[0];
VgPhaseA[0] = xD[1]*sin(xD[0]) + xD[2]*sin(ThetaH);

ThetaH = (xD[0]-pi*2/3)*HarmonicNum[0];
VgPhaseB[0] = xD[1]*sin(xD[0]- pi*2/3) + xD[2]*sin(ThetaH);

ThetaH = (xD[0]+pi*2/3)*HarmonicNum[0];
VgPhaseC[0] = xD[1]*sin(xD[0]+pi*2/3) + xD[2]*sin(ThetaH);
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void VgGridGen_Update_wrapper(const real_T *ACLine,
			const real_T *Freq,
			const real_T *HarmonicNum,
			const real_T *HarmonicMag,
			const real_T *dVoltPerSec,
			real_T *VgPhaseA,
			real_T *VgPhaseB,
			real_T *VgPhaseC,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
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
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

