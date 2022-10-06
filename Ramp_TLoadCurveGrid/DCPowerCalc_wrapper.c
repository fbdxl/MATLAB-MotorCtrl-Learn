
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
void DCPowerCalc_Outputs_wrapper(const real_T *VdcP,
			const real_T *VdcN,
			const real_T *IdcP,
			const real_T *IdcN,
			const real_T *fCut,
			real_T *DCPower_kW,
			real_T *DCPowerFlt_kW,
			const real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
DCPower_kW[0] = (VdcP[0]*IdcP[0]-VdcN[0]*IdcN[0])*0.001;

DCPowerFlt_kW[0] = xD[0];
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void DCPowerCalc_Update_wrapper(const real_T *VdcP,
			const real_T *VdcN,
			const real_T *IdcP,
			const real_T *IdcN,
			const real_T *fCut,
			real_T *DCPower_kW,
			real_T *DCPowerFlt_kW,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
float   fTsfxCut;
float   fDcPowerInst;
    fDcPowerInst = (VdcP[0]*IdcP[0]-VdcN[0]*IdcN[0])*0.001;
    fTsfxCut = SampleTime*fCut[0];
if(fTsfxCut<0)
{
    fTsfxCut=0;
}
    xD[0] = (fTsfxCut*fDcPowerInst+xD[0])/(1+fTsfxCut);
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

