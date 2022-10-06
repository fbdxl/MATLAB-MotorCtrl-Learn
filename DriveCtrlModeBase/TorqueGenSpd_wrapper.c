
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
void TorqueGenSpd_Outputs_wrapper(const real_T *TorqMotor,
			const real_T *SpdAct,
			const real_T *TorqBase,
			const real_T *SpdBase,
			const real_T *Jpu,
			const real_T *TorqLoad,
			real_T *SpdSetOut,
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
SpdSetOut[0] = SpdAct[0] + xD[0]*SpdBase[0];
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void TorqueGenSpd_Update_wrapper(const real_T *TorqMotor,
			const real_T *SpdAct,
			const real_T *TorqBase,
			const real_T *SpdBase,
			const real_T *Jpu,
			const real_T *TorqLoad,
			real_T *SpdSetOut,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
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
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

