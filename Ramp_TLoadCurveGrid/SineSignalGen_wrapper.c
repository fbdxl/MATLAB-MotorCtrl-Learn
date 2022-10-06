
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
void SineSignalGen_Outputs_wrapper(const real_T *DCMag,
			const real_T *ACMag,
			const real_T *Freq,
			const real_T *dVoltPerSec,
			real_T *SineOut,
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
SineOut[0] = xD[1] + xD[2]*sin(xD[0]);
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void SineSignalGen_Update_wrapper(const real_T *DCMag,
			const real_T *ACMag,
			const real_T *Freq,
			const real_T *dVoltPerSec,
			real_T *SineOut,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/
float   iTempRampOut;
float   fdVoltPerStep;
fdVoltPerStep = dVoltPerSec[0]*SampleTime;
if(DCMag[0]>xD[1])
{
    if(DCMag[0]- xD[1]>fdVoltPerStep)
    {
        xD[1] += fdVoltPerStep;
    }
    else
    {
        xD[1] = DCMag[0];
    }
}
else
{
    if(-DCMag[0] +xD[1]>fdVoltPerStep)
    {
        xD[1] -= fdVoltPerStep;
    }
    else
    {
        xD[1] = DCMag[0];
    }
}

if(ACMag[0]>xD[2])
{
    if(ACMag[0]- xD[2]>fdVoltPerStep)
    {
        xD[2] += fdVoltPerStep;
    }
    else
    {
        xD[2] = ACMag[0];
    }
}
else
{
    if(-ACMag[0] +xD[2]>fdVoltPerStep)
    {
        xD[2] -= fdVoltPerStep;
    }
    else
    {
        xD[2] = ACMag[0];
    }
}
        
xD[0] += Freq[0]*2*pi*SampleTime;

if(xD[0]>2*pi)
{
    xD[0]-=2*pi;
}
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

