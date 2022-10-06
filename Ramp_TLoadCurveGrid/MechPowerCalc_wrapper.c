
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
void MechPowerCalc_Outputs_wrapper(const real_T *Wm,
			const real_T *Torque,
			const real_T *fCut,
			real_T *MechPower_kW,
			real_T *MechPowerFlt_kW,
			const real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
MechPower_kW[0] = xD[1];//Wm[0]*Torque[0]*0.001;

MechPowerFlt_kW[0] = xD[0];
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void MechPowerCalc_Update_wrapper(const real_T *Wm,
			const real_T *Torque,
			const real_T *fCut,
			real_T *MechPower_kW,
			real_T *MechPowerFlt_kW,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
float   fTsfxCut;
float   fDcPowerInst;
    fDcPowerInst = Wm[0]*Torque[0]*0.001;
    fTsfxCut = SampleTime*fCut[0];
if(fTsfxCut<0)
{
    fTsfxCut=0;
}
    xD[0] = (fTsfxCut*fDcPowerInst+xD[0])/(1+fTsfxCut);
    
    xD[1] = (fTsfxCut*Torque[0]+xD[1])/(1+fTsfxCut);
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

