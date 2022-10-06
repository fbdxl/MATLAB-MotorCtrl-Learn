
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

#define	pi	3.14159265359
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void BasicRampModule_Outputs_wrapper(const real_T *RiseTime,
			const real_T *FallTime,
			const real_T *NormalValue,
			const real_T *DestValue,
			real_T *RampOut,
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

RampOut[0] = xD[0];
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void BasicRampModule_Update_wrapper(const real_T *RiseTime,
			const real_T *FallTime,
			const real_T *NormalValue,
			const real_T *DestValue,
			real_T *RampOut,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
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
//float   fThetaStep;
//float   SpdRatio;
//float   SpdLmtTemp;
//float   fABSSpdRPM;
//float   fRatioOfDes;

//float fTemp;
//float   fTempSqrt;
/*
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
*/

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

fDestVule = DestValue[0];

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
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

