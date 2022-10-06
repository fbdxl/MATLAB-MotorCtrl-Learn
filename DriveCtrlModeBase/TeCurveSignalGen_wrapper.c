
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
void TeCurveSignalGen_Outputs_wrapper(const real_T *nrpm,
			const real_T *NormRpm,
			const real_T *TeNorm,
			const real_T *StaticFCoef,
			const real_T *KpLoadCurve,
			real_T *TLCurveOut,
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
TLCurveOut[0] = (xD[1] + xD[2])*TeNorm[0];
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void TeCurveSignalGen_Update_wrapper(const real_T *nrpm,
			const real_T *NormRpm,
			const real_T *TeNorm,
			const real_T *StaticFCoef,
			const real_T *KpLoadCurve,
			real_T *TLCurveOut,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/
float   a,b,c,d,e,f;
float   nabs,nabs2;
float   TLoad,TLoad2;
float   normrpm;

a=-0.01129;
b=2.05924;
c=-139.63511;
d=4519.34747;
e=-57519.78161;
f=279854.25277;

if(nrpm[0] < 0)
{
 nabs2=-nrpm[0];   
}
else
{
 nabs2=nrpm[0];   
}

if(NormRpm[0]>1)
{
    normrpm = NormRpm[0];
    nabs = nabs2*69/NormRpm[0];
}
else
{
    normrpm = 1;
    nabs = nabs2*69;
}

TLoad = nabs*nabs*nabs*nabs*nabs*a
        +nabs*nabs*nabs*nabs*b
         +nabs*nabs*nabs*c
         +nabs*nabs*d
         +nabs*e
         +f;
if(nabs < 1)
{
 TLoad2 =  nabs*TLoad;  
}
else
{
 TLoad2 =   TLoad;
}

if(nrpm[0] < 0)
{
   xD[1] =  -TLoad2*KpLoadCurve[0]/975340;
}
else
{
   xD[1] =  TLoad2*KpLoadCurve[0]/975340; 
}

if(nabs2 < 0.01*normrpm)
{
    if(nabs2 > 0.002*normrpm
            && nabs2 < 0.006*normrpm)
    {
        xD[2] = StaticFCoef[0]*(nabs2/normrpm - 0.002)*250;
    }
    else if( nabs2 >=0.006*normrpm)
    {
        xD[2] = StaticFCoef[0]*(0.01 - nabs2/normrpm)*250;
    }
    else
    {
         xD[2] = 0;
    }
    if(xD[0] == 1)
    {
        xD[3] += 1;
        if(xD[3] > 10000)
        {
            xD[3] = 0;
            xD[0] = 0;
        }
    }
    else
    {
       xD[0] = 0; 
        xD[3] = 0;
    }
    
}
else
{
    xD[0] = 1;
    xD[3] = 0;
    
    xD[2]  =0; 
}


if(nrpm[0] < 0)
{
    xD[2] = -xD[2];
}

if(xD[0] != 0)
{
    xD[2] = 0; 
}
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

