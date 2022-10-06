
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
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void BasicRamp_Outputs_wrapper(const real_T *TargetValue,
			real_T *RampOut,
			const real_T *xD,
			const real_T *RampUpTime, const int_T p_width0,
			const real_T *RampDownTime, const int_T p_width1,
			const real_T *NormalValue, const int_T p_width2,
			const real_T *SampleTime, const int_T p_width3)
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
void BasicRamp_Update_wrapper(const real_T *TargetValue,
			real_T *RampOut,
			real_T *xD,
			const real_T *RampUpTime, const int_T p_width0,
			const real_T *RampDownTime, const int_T p_width1,
			const real_T *NormalValue, const int_T p_width2,
			const real_T *SampleTime, const int_T p_width3)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
 */

float RampUpStep;
float RampDownStep;
float RampUpTimeTmp;
float RampDownTimeTmp;

RampUpTimeTmp = RampUpTime[0];
RampDownTimeTmp = RampDownTime[0];

if(RampUpTimeTmp < 0.001)
{RampUpTimeTmp = 0.001;}

if(RampDownTimeTmp < 0.001)
{RampDownTimeTmp = 0.001;}

RampUpStep = NormalValue[0]/RampUpTimeTmp*SampleTime[0];
RampDownStep = NormalValue[0]/RampDownTimeTmp*SampleTime[0];


if(xD[0]>TargetValue[0])
{
    if((xD[0]-TargetValue[0])>RampDownStep)
    {
        xD[0] = xD[0] - RampDownStep;
    }
    else
    {
        xD[0] = TargetValue[0];
    }
}
else
{
    if((-xD[0]+TargetValue[0])>RampUpStep)
    {
        xD[0] = xD[0] + RampUpStep;
    }
    else
    {
        xD[0] = TargetValue[0];
    }
}
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
/*
 * Terminate function
 *
 */
void BasicRamp_Terminate_wrapper(real_T *xD,
			const real_T *RampUpTime, const int_T p_width0,
			const real_T *RampDownTime, const int_T p_width1,
			const real_T *NormalValue, const int_T p_width2,
			const real_T *SampleTime, const int_T p_width3)
{
/* %%%-SFUNWIZ_wrapper_Terminate_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Custom Terminate code goes here.
 */
xD[0] = 0;
/* %%%-SFUNWIZ_wrapper_Terminate_Changes_END --- EDIT HERE TO _BEGIN */
}

