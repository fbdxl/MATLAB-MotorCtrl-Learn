/*
 * RAMP.c
 *
 * Code generation for model "RAMP".
 *
 * Model version              : 1.108
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Aug 29 19:28:20 2022
 *
 * Target selection: MTRealTime_ZYNQ.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RAMP.h"
#include "RAMP_private.h"

/* Block signals (default storage) */
B_RAMP_T RAMP_B;

/* Block states (default storage) */
DW_RAMP_T RAMP_DW;

/* External inputs (root inport signals with default storage) */
ExtU_RAMP_T RAMP_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_RAMP_T RAMP_Y;

/* Real-time model */
RT_MODEL_RAMP_T RAMP_M_;
RT_MODEL_RAMP_T *const RAMP_M = &RAMP_M_;

/* Model output function */
static void RAMP_output(void)
{
  /* S-Function (RAMP_FUNCTION): '<Root>/SpeedRamp' incorporates:
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/SpeedFallTime'
   *  Inport: '<Root>/SpeedRiseTime'
   *  Inport: '<Root>/TargetSpeedPercent'
   */
  RAMP_FUNCTION_Outputs_wrapper(&RAMP_U.SpeedRiseTime, &RAMP_U.SpeedFallTime,
    &RAMP_U.NormalRPM, &RAMP_U.TargetSpeedPercent, &RAMP_B.SpeedRamp,
    &RAMP_DW.SpeedRamp_DSTATE);

  /* Outport: '<Root>/SpeedOutInRad//s' incorporates:
   *  Gain: '<Root>/RPM2rad//s'
   */
  RAMP_Y.SpeedOutInRads = RAMP_P.RPM2rads_Gain * RAMP_B.SpeedRamp;

  /* S-Function (TorqueRefGen): '<Root>/TorqueRamp' incorporates:
   *  Inport: '<Root>/HarMoTorquePercentSet'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/RatioOfW'
   *  Inport: '<Root>/SpdPercentLmt'
   *  Inport: '<Root>/TargetTorquePercent'
   *  Inport: '<Root>/TorqueFallTime'
   *  Inport: '<Root>/TorqueRiseTime'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/TorqueRampOut'
   */
  TorqueRefGen_Outputs_wrapper(&RAMP_U.TorqueRiseTime, &RAMP_U.TorqueFallTime,
    &RAMP_U.NormalTorqueValue, &RAMP_U.TargetTorquePercent, &RAMP_U.w,
    &RAMP_U.RatioOfW, &RAMP_U.HarMoTorquePercentSet, &RAMP_U.SpdPercentLmt,
    &RAMP_U.NormalRPM, &RAMP_Y.TorqueRampOut, &RAMP_DW.TorqueRamp_DSTATE[0]);

  /* Outport: '<Root>/SpeedActRPM' incorporates:
   *  Gain: '<Root>/rad//s2RPM'
   *  Inport: '<Root>/w'
   */
  RAMP_Y.SpeedActRPM = RAMP_P.rads2RPM_Gain * RAMP_U.w;

  /* S-Function (DCPowerCalc): '<Root>/DcPowerCalc' incorporates:
   *  Inport: '<Root>/DcN'
   *  Inport: '<Root>/DcP'
   *  Inport: '<Root>/IdcN'
   *  Inport: '<Root>/IdcP'
   *  Inport: '<Root>/fCut'
   *  Outport: '<Root>/DCPowerFlt_kW'
   *  Outport: '<Root>/DCPower_kW'
   */
  DCPowerCalc_Outputs_wrapper(&RAMP_U.DcP, &RAMP_U.DcN, &RAMP_U.IdcP,
    &RAMP_U.IdcN, &RAMP_U.fCut, &RAMP_Y.DCPower_kW, &RAMP_Y.DCPowerFlt_kW,
    &RAMP_DW.DcPowerCalc_DSTATE[0]);

  /* S-Function (MechPowerCalc): '<Root>/MechPowerCalc' incorporates:
   *  Inport: '<Root>/Toruqe'
   *  Inport: '<Root>/fCut'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/MPowerFlt_kW'
   *  Outport: '<Root>/MPower_kW'
   */
  MechPowerCalc_Outputs_wrapper(&RAMP_U.w, &RAMP_U.Toruqe, &RAMP_U.fCut,
    &RAMP_Y.MPower_kW, &RAMP_Y.MPowerFlt_kW, &RAMP_DW.MechPowerCalc_DSTATE[0]);

  /* S-Function (SineSignalGen): '<Root>/SineSiganGen' incorporates:
   *  Inport: '<Root>/ACFreq'
   *  Inport: '<Root>/ACMag'
   *  Inport: '<Root>/DCMag'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/DCVoltRef'
   */
  SineSignalGen_Outputs_wrapper(&RAMP_U.DCMag, &RAMP_U.ACMag, &RAMP_U.ACFreq,
    &RAMP_U.dVoltPerSec, &RAMP_Y.DCVoltRef, &RAMP_DW.SineSiganGen_DSTATE[0]);

  /* S-Function (VgGridGen): '<Root>/VgGridGen' incorporates:
   *  Inport: '<Root>/FreqGrid'
   *  Inport: '<Root>/GridHarmonicMag'
   *  Inport: '<Root>/GridHarmonicNum'
   *  Inport: '<Root>/VLine'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/VgPhase1'
   *  Outport: '<Root>/VgPhase2'
   *  Outport: '<Root>/VgPhase3'
   */
  VgGridGen_Outputs_wrapper(&RAMP_U.VLine, &RAMP_U.FreqGrid,
    &RAMP_U.GridHarmonicNum, &RAMP_U.GridHarmonicMag, &RAMP_U.dVoltPerSec,
    &RAMP_Y.VgPhase1, &RAMP_Y.VgPhase2, &RAMP_Y.VgPhase3,
    &RAMP_DW.VgGridGen_DSTATE[0]);

  /* Outport: '<Root>/Digital1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  RAMP_Y.Digital1 = RAMP_P.Constant_Value;

  /* Outport: '<Root>/Digital0' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  RAMP_Y.Digital0 = RAMP_P.Constant1_Value;
}

/* Model update function */
static void RAMP_update(void)
{
  /* Update for S-Function (RAMP_FUNCTION): '<Root>/SpeedRamp' incorporates:
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/SpeedFallTime'
   *  Inport: '<Root>/SpeedRiseTime'
   *  Inport: '<Root>/TargetSpeedPercent'
   */

  /* S-Function "RAMP_FUNCTION_wrapper" Block: <Root>/SpeedRamp */
  RAMP_FUNCTION_Update_wrapper(&RAMP_U.SpeedRiseTime, &RAMP_U.SpeedFallTime,
    &RAMP_U.NormalRPM, &RAMP_U.TargetSpeedPercent, &RAMP_B.SpeedRamp,
    &RAMP_DW.SpeedRamp_DSTATE);

  /* Update for S-Function (TorqueRefGen): '<Root>/TorqueRamp' incorporates:
   *  Inport: '<Root>/HarMoTorquePercentSet'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/RatioOfW'
   *  Inport: '<Root>/SpdPercentLmt'
   *  Inport: '<Root>/TargetTorquePercent'
   *  Inport: '<Root>/TorqueFallTime'
   *  Inport: '<Root>/TorqueRiseTime'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/TorqueRampOut'
   */

  /* S-Function "TorqueRefGen_wrapper" Block: <Root>/TorqueRamp */
  TorqueRefGen_Update_wrapper(&RAMP_U.TorqueRiseTime, &RAMP_U.TorqueFallTime,
    &RAMP_U.NormalTorqueValue, &RAMP_U.TargetTorquePercent, &RAMP_U.w,
    &RAMP_U.RatioOfW, &RAMP_U.HarMoTorquePercentSet, &RAMP_U.SpdPercentLmt,
    &RAMP_U.NormalRPM, &RAMP_Y.TorqueRampOut, &RAMP_DW.TorqueRamp_DSTATE[0]);

  /* Update for S-Function (DCPowerCalc): '<Root>/DcPowerCalc' incorporates:
   *  Inport: '<Root>/DcN'
   *  Inport: '<Root>/DcP'
   *  Inport: '<Root>/IdcN'
   *  Inport: '<Root>/IdcP'
   *  Inport: '<Root>/fCut'
   *  Outport: '<Root>/DCPowerFlt_kW'
   *  Outport: '<Root>/DCPower_kW'
   */

  /* S-Function "DCPowerCalc_wrapper" Block: <Root>/DcPowerCalc */
  DCPowerCalc_Update_wrapper(&RAMP_U.DcP, &RAMP_U.DcN, &RAMP_U.IdcP,
    &RAMP_U.IdcN, &RAMP_U.fCut, &RAMP_Y.DCPower_kW, &RAMP_Y.DCPowerFlt_kW,
    &RAMP_DW.DcPowerCalc_DSTATE[0]);

  /* Update for S-Function (MechPowerCalc): '<Root>/MechPowerCalc' incorporates:
   *  Inport: '<Root>/Toruqe'
   *  Inport: '<Root>/fCut'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/MPowerFlt_kW'
   *  Outport: '<Root>/MPower_kW'
   */

  /* S-Function "MechPowerCalc_wrapper" Block: <Root>/MechPowerCalc */
  MechPowerCalc_Update_wrapper(&RAMP_U.w, &RAMP_U.Toruqe, &RAMP_U.fCut,
    &RAMP_Y.MPower_kW, &RAMP_Y.MPowerFlt_kW, &RAMP_DW.MechPowerCalc_DSTATE[0]);

  /* Update for S-Function (SineSignalGen): '<Root>/SineSiganGen' incorporates:
   *  Inport: '<Root>/ACFreq'
   *  Inport: '<Root>/ACMag'
   *  Inport: '<Root>/DCMag'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/DCVoltRef'
   */

  /* S-Function "SineSignalGen_wrapper" Block: <Root>/SineSiganGen */
  SineSignalGen_Update_wrapper(&RAMP_U.DCMag, &RAMP_U.ACMag, &RAMP_U.ACFreq,
    &RAMP_U.dVoltPerSec, &RAMP_Y.DCVoltRef, &RAMP_DW.SineSiganGen_DSTATE[0]);

  /* Update for S-Function (VgGridGen): '<Root>/VgGridGen' incorporates:
   *  Inport: '<Root>/FreqGrid'
   *  Inport: '<Root>/GridHarmonicMag'
   *  Inport: '<Root>/GridHarmonicNum'
   *  Inport: '<Root>/VLine'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/VgPhase1'
   *  Outport: '<Root>/VgPhase2'
   *  Outport: '<Root>/VgPhase3'
   */

  /* S-Function "VgGridGen_wrapper" Block: <Root>/VgGridGen */
  VgGridGen_Update_wrapper(&RAMP_U.VLine, &RAMP_U.FreqGrid,
    &RAMP_U.GridHarmonicNum, &RAMP_U.GridHarmonicMag, &RAMP_U.dVoltPerSec,
    &RAMP_Y.VgPhase1, &RAMP_Y.VgPhase2, &RAMP_Y.VgPhase3,
    &RAMP_DW.VgGridGen_DSTATE[0]);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++RAMP_M->Timing.clockTick0)) {
    ++RAMP_M->Timing.clockTickH0;
  }

  RAMP_M->Timing.t[0] = RAMP_M->Timing.clockTick0 * RAMP_M->Timing.stepSize0 +
    RAMP_M->Timing.clockTickH0 * RAMP_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void RAMP_initialize(void)
{
  /* InitializeConditions for S-Function (RAMP_FUNCTION): '<Root>/SpeedRamp' incorporates:
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/SpeedFallTime'
   *  Inport: '<Root>/SpeedRiseTime'
   *  Inport: '<Root>/TargetSpeedPercent'
   */

  /* S-Function Block: <Root>/SpeedRamp */
  {
    real_T initVector[1] = { 0 };

    {
      int_T i1;
      for (i1=0; i1 < 1; i1++) {
        RAMP_DW.SpeedRamp_DSTATE = initVector[0];
      }
    }
  }

  /* InitializeConditions for S-Function (TorqueRefGen): '<Root>/TorqueRamp' incorporates:
   *  Inport: '<Root>/HarMoTorquePercentSet'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/RatioOfW'
   *  Inport: '<Root>/SpdPercentLmt'
   *  Inport: '<Root>/TargetTorquePercent'
   *  Inport: '<Root>/TorqueFallTime'
   *  Inport: '<Root>/TorqueRiseTime'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/TorqueRampOut'
   */

  /* S-Function Block: <Root>/TorqueRamp */
  {
    real_T initVector[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &RAMP_DW.TorqueRamp_DSTATE[0];
      for (i1=0; i1 < 10; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (DCPowerCalc): '<Root>/DcPowerCalc' incorporates:
   *  Inport: '<Root>/DcN'
   *  Inport: '<Root>/DcP'
   *  Inport: '<Root>/IdcN'
   *  Inport: '<Root>/IdcP'
   *  Inport: '<Root>/fCut'
   *  Outport: '<Root>/DCPowerFlt_kW'
   *  Outport: '<Root>/DCPower_kW'
   */

  /* S-Function Block: <Root>/DcPowerCalc */
  {
    real_T initVector[2] = { 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &RAMP_DW.DcPowerCalc_DSTATE[0];
      for (i1=0; i1 < 2; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (MechPowerCalc): '<Root>/MechPowerCalc' incorporates:
   *  Inport: '<Root>/Toruqe'
   *  Inport: '<Root>/fCut'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/MPowerFlt_kW'
   *  Outport: '<Root>/MPower_kW'
   */

  /* S-Function Block: <Root>/MechPowerCalc */
  {
    real_T initVector[3] = { 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &RAMP_DW.MechPowerCalc_DSTATE[0];
      for (i1=0; i1 < 3; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (SineSignalGen): '<Root>/SineSiganGen' incorporates:
   *  Inport: '<Root>/ACFreq'
   *  Inport: '<Root>/ACMag'
   *  Inport: '<Root>/DCMag'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/DCVoltRef'
   */

  /* S-Function Block: <Root>/SineSiganGen */
  {
    real_T initVector[5] = { 0, 0, 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &RAMP_DW.SineSiganGen_DSTATE[0];
      for (i1=0; i1 < 5; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (VgGridGen): '<Root>/VgGridGen' incorporates:
   *  Inport: '<Root>/FreqGrid'
   *  Inport: '<Root>/GridHarmonicMag'
   *  Inport: '<Root>/GridHarmonicNum'
   *  Inport: '<Root>/VLine'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/VgPhase1'
   *  Outport: '<Root>/VgPhase2'
   *  Outport: '<Root>/VgPhase3'
   */

  /* S-Function Block: <Root>/VgGridGen */
  {
    real_T initVector[5] = { 0, 0, 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &RAMP_DW.VgGridGen_DSTATE[0];
      for (i1=0; i1 < 5; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }
}

/* Model terminate function */
static void RAMP_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  RAMP_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  RAMP_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  RAMP_initialize();
}

void MdlTerminate(void)
{
  RAMP_terminate();
}

/* Registration function */
RT_MODEL_RAMP_T *RAMP(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)RAMP_M, 0,
                sizeof(RT_MODEL_RAMP_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = RAMP_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    RAMP_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    RAMP_M->Timing.sampleTimes = (&RAMP_M->Timing.sampleTimesArray[0]);
    RAMP_M->Timing.offsetTimes = (&RAMP_M->Timing.offsetTimesArray[0]);

    /* task periods */
    RAMP_M->Timing.sampleTimes[0] = (0.0001);

    /* task offsets */
    RAMP_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(RAMP_M, &RAMP_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = RAMP_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    RAMP_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(RAMP_M, 10.0);
  RAMP_M->Timing.stepSize0 = 0.0001;
  RAMP_M->solverInfoPtr = (&RAMP_M->solverInfo);
  RAMP_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&RAMP_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&RAMP_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  RAMP_M->blockIO = ((void *) &RAMP_B);
  (void) memset(((void *) &RAMP_B), 0,
                sizeof(B_RAMP_T));

  /* parameters */
  RAMP_M->defaultParam = ((real_T *)&RAMP_P);

  /* states (dwork) */
  RAMP_M->dwork = ((void *) &RAMP_DW);
  (void) memset((void *)&RAMP_DW, 0,
                sizeof(DW_RAMP_T));

  /* external inputs */
  RAMP_M->inputs = (((void*)&RAMP_U));
  (void)memset(&RAMP_U, 0, sizeof(ExtU_RAMP_T));

  /* external outputs */
  RAMP_M->outputs = (&RAMP_Y);
  (void) memset((void *)&RAMP_Y, 0,
                sizeof(ExtY_RAMP_T));

  /* Initialize Sizes */
  RAMP_M->Sizes.numContStates = (0);   /* Number of continuous states */
  RAMP_M->Sizes.numY = (13);           /* Number of model outputs */
  RAMP_M->Sizes.numU = (26);           /* Number of model inputs */
  RAMP_M->Sizes.sysDirFeedThru = (1);  /* The model is direct feedthrough */
  RAMP_M->Sizes.numSampTimes = (1);    /* Number of sample times */
  RAMP_M->Sizes.numBlocks = (23);      /* Number of blocks */
  RAMP_M->Sizes.numBlockIO = (10);     /* Number of block outputs */
  RAMP_M->Sizes.numBlockPrms = (4);    /* Sum of parameter "widths" */
  return RAMP_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

/*========================================================================*
 * MT RealTime Model Framework code generation
 *
 * Model : RAMP
 * Model version : 1.108
 * RealTime Model Framework version : 2020.0.0.0 (2020)
 * Source generated on : Mon Aug 29 19:28:19 2022
 *========================================================================*/

/* This file contains automatically generated code for functions
 * to update the inports and outports of a Simulink/Realtime Workshop
 * model. Calls to these functions should be made before each step is taken
 * (inports, call SetExternalInputs) and after each step is taken
 * (outports, call SetExternalOutputs.)
 */
#ifdef MT_ROOTMODEL_RAMP
#include "mt_modelframework_ex.h"
#include <stddef.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

unsigned char ReadSideDirtyFlag = 0, WriteSideDirtyFlag = 0;

/*========================================================================*
 * Function: MTRT_GetValueByDataType//MTRT_GetValueByDataType
 *
 * Abstract:
 *		Converting to and from double and datatypes used in the model
 *
 * Output Parameters
 *      ptr : address to the source
 *      subindex : index value if vector
 *      type   : the source's data type
 *      Complex : true if a complex data type
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
double MTRT_GetValueByDataType(void* ptr, int32_t subindex, int32_t type,
  int32_t Complex)
{
  switch (type)
  {
   case 0:
    return (double)(((real_T*)ptr)[subindex]);

   case 1:
    return (double)(((real32_T*)ptr)[subindex]);

   case 2:
    return (double)(((int8_T*)ptr)[subindex]);

   case 3:
    return (double)(((uint8_T*)ptr)[subindex]);

   case 4:
    return (double)(((int16_T*)ptr)[subindex]);

   case 5:
    return (double)(((uint16_T*)ptr)[subindex]);

   case 6:
    return (double)(((int32_T*)ptr)[subindex]);

   case 7:
    return (double)(((uint32_T*)ptr)[subindex]);

   case 8:
    return (double)(((boolean_T*)ptr)[subindex]);

   case 10:
    return MTRT_GetValueByDataType(ptr, subindex, 6, Complex);

   case 13:
    return MTRT_GetValueByDataType(ptr, subindex, 7, Complex);

   case 15:
    return MTRT_GetValueByDataType(ptr, subindex, 6, Complex);

   case 16:
    return MTRT_GetValueByDataType(ptr, subindex, 6, Complex);

   case 17:
    return MTRT_GetValueByDataType(ptr, subindex, 3, Complex);

   case 18:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 19:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 20:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 21:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 22:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 23:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 24:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 25:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 26:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 27:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);

   case 28:
    return MTRT_GetValueByDataType(ptr, subindex, 0, Complex);
  }

  // return ((double *)ptr)[subindex];
  return rtNaN;
}

/*========================================================================*
 * Function: MTRT_SetValueByDataType
 *
 * Abstract:
 *		Converting to and from double and datatypes used in the model
 *
 * Output Parameters
 *      ptr : address to the destination
 *      subindex : index value if vector
 *      value : value to set on the destination
 *      type   : the destination's data type
 *      Complex : true if a complex data type
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
int32_t MTRT_SetValueByDataType(void* ptr, int32_t subindex, double value,
  int32_t type, int32_t Complex)
{
  //Complex is only used for R14.3 and down
  switch (type)
  {
   case 0:
    ((real_T *)ptr)[subindex] = (real_T)value;
    return MT_OK;

   case 1:
    ((real32_T *)ptr)[subindex] = (real32_T)value;
    return MT_OK;

   case 2:
    ((int8_T *)ptr)[subindex] = (int8_T)value;
    return MT_OK;

   case 3:
    ((uint8_T *)ptr)[subindex] = (uint8_T)value;
    return MT_OK;

   case 4:
    ((int16_T *)ptr)[subindex] = (int16_T)value;
    return MT_OK;

   case 5:
    ((uint16_T *)ptr)[subindex] = (uint16_T)value;
    return MT_OK;

   case 6:
    ((int32_T *)ptr)[subindex] = (int32_T)value;
    return MT_OK;

   case 7:
    ((uint32_T *)ptr)[subindex] = (uint32_T)value;
    return MT_OK;

   case 8:
    ((boolean_T *)ptr)[subindex] = (boolean_T)value;
    return MT_OK;

   case 10:
    //Type is renamed. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 13:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 7, Complex);

   case 15:
    //Type is enum. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 16:
    //Type is enum. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 17:
    //Type is renamed. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 3, Complex);

   case 18:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 19:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 20:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 21:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 27:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 28:
    //Type is matrix. Call SetValueByDataType on its contained type
    return MTRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
  }

  //No matching datatype conversion
  return MT_ERROR;
}

extern RAMP_rtModel *S;
extern _SITexportglobals SITexportglobals;

/*========================================================================*
 * Function: SetExternalInputs
 *
 * Abstract:
 *		Set data to model ports on the specified task
 *
 * Input Parameters
 *      data : data to set
 *      TaskSampleHit : task id
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
void SetExternalInputs(double* data, int_T* TaskSampleHit)
{
  int index = 0, count = 0;
  ExtU_RAMP_T *rtIN = (ExtU_RAMP_T*) S->inputs;
  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->SpeedRiseTime Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->SpeedRiseTime, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->SpeedFallTime Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->SpeedFallTime, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->NormalRPM Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->NormalRPM, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->TargetSpeedPercent Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->TargetSpeedPercent, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->TorqueRiseTime Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->TorqueRiseTime, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->TorqueFallTime Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->TorqueFallTime, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->NormalTorqueValue Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->NormalTorqueValue, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->TargetTorquePercent Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->TargetTorquePercent, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->w Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->w, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->RatioOfW Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->RatioOfW, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->HarMoTorquePercentSet Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->HarMoTorquePercentSet, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->SpdPercentLmt Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->SpdPercentLmt, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->Toruqe Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->Toruqe, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->DcP Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->DcP, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->DcN Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->DcN, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->IdcP Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->IdcP, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->IdcN Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->IdcN, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->fCut Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->fCut, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->DCMag Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->DCMag, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->ACMag Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->ACMag, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->ACFreq Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->ACFreq, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->dVoltPerSec Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->dVoltPerSec, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->VLine Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->VLine, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->FreqGrid Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->FreqGrid, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->GridHarmonicNum Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->GridHarmonicNum, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->GridHarmonicMag Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->GridHarmonicMag, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  UNUSED_PARAMETER(count);
}                                      /* of SetExternalInputs */

int32_t NumInputPorts(void)
{
  return 26;
}

int32_t NumOutputPorts(void)
{
  return 13;
}

double mt_extout[13];

/*========================================================================*
 * Function: SetExternalOutputs
 *
 * Abstract:
 *		Set data to model ports on the specified task
 *
 * Input Parameters
 *      data : data to set
 *      TaskSampleHit : task id
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
void SetExternalOutputs(double* data, int_T* TaskSampleHit)
{
  int index = 0, count = 0;
  ExtY_RAMP_T* rtOUT = (ExtY_RAMP_T*) S->outputs;
  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->SpeedOutInRads has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->SpeedOutInRads), 0, 0,
      0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->TorqueRampOut has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->TorqueRampOut), 0, 0,
      0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->SpeedActRPM has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->SpeedActRPM), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->DCPower_kW has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPower_kW), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->DCVoltRef has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCVoltRef), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->VgPhase1 has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase1), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->VgPhase2 has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase2), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->VgPhase3 has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase3), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->DCPowerFlt_kW has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPowerFlt_kW), 0, 0,
      0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->MPower_kW has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MPower_kW), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->MPowerFlt_kW has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MPowerFlt_kW), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->Digital1 has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->Digital1), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->Digital0 has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->Digital0), 0, 0, 0);
  } else {
    index += 1;
  }

  if (data != NULL) {
    memcpy(&data[0], &mt_extout[0], sizeof(mt_extout));
  }

  UNUSED_PARAMETER(count);
}

/*========================================================================*
 * Function: MT_InitExternalOutputs
 *
 * Abstract:
 *		Initialize model ports
 *
 * Output Parameters
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
int32_t MT_InitExternalOutputs()
{
  int index = 0, count = 0;
  ExtY_RAMP_T* rtOUT = (ExtY_RAMP_T*) S->outputs;

  /* rtOUT->SpeedOutInRads has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->SpeedOutInRads), 0, 0, 0);

  /* rtOUT->TorqueRampOut has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->TorqueRampOut), 0, 0, 0);

  /* rtOUT->SpeedActRPM has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->SpeedActRPM), 0, 0, 0);

  /* rtOUT->DCPower_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPower_kW), 0, 0, 0);

  /* rtOUT->DCVoltRef has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCVoltRef), 0, 0, 0);

  /* rtOUT->VgPhase1 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase1), 0, 0, 0);

  /* rtOUT->VgPhase2 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase2), 0, 0, 0);

  /* rtOUT->VgPhase3 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase3), 0, 0, 0);

  /* rtOUT->DCPowerFlt_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPowerFlt_kW), 0, 0, 0);

  /* rtOUT->MPower_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MPower_kW), 0, 0, 0);

  /* rtOUT->MPowerFlt_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MPowerFlt_kW), 0, 0, 0);

  /* rtOUT->Digital1 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->Digital1), 0, 0, 0);

  /* rtOUT->Digital0 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->Digital0), 0, 0, 0);
  UNUSED_PARAMETER(count);
  return MT_OK;
}

static int32_t MT_ExtListSize DataSection(".MTVS.extlistsize") = 39;
static MT_ExternalIO MT_ExtList[] DataSection(".MTVS.extlist") =
{
  { 1, "SpeedRiseTime", 0, EXT_IN, 1, 1, 1 },

  { 2, "SpeedFallTime", 0, EXT_IN, 1, 1, 1 },

  { 3, "NormalRPM", 0, EXT_IN, 1, 1, 1 },

  { 4, "TargetSpeedPercent", 0, EXT_IN, 1, 1, 1 },

  { 5, "TorqueRiseTime", 0, EXT_IN, 1, 1, 1 },

  { 6, "TorqueFallTime", 0, EXT_IN, 1, 1, 1 },

  { 7, "NormalTorqueValue", 0, EXT_IN, 1, 1, 1 },

  { 8, "TargetTorquePercent", 0, EXT_IN, 1, 1, 1 },

  { 9, "w", 0, EXT_IN, 1, 1, 1 },

  { 10, "RatioOfW", 0, EXT_IN, 1, 1, 1 },

  { 11, "HarMoTorquePercentSet", 0, EXT_IN, 1, 1, 1 },

  { 12, "SpdPercentLmt", 0, EXT_IN, 1, 1, 1 },

  { 13, "Toruqe", 0, EXT_IN, 1, 1, 1 },

  { 14, "DcP", 0, EXT_IN, 1, 1, 1 },

  { 15, "DcN", 0, EXT_IN, 1, 1, 1 },

  { 16, "IdcP", 0, EXT_IN, 1, 1, 1 },

  { 17, "IdcN", 0, EXT_IN, 1, 1, 1 },

  { 18, "fCut", 0, EXT_IN, 1, 1, 1 },

  { 19, "DCMag", 0, EXT_IN, 1, 1, 1 },

  { 20, "ACMag", 0, EXT_IN, 1, 1, 1 },

  { 21, "ACFreq", 0, EXT_IN, 1, 1, 1 },

  { 22, "dVoltPerSec", 0, EXT_IN, 1, 1, 1 },

  { 23, "VLine", 0, EXT_IN, 1, 1, 1 },

  { 24, "FreqGrid", 0, EXT_IN, 1, 1, 1 },

  { 25, "GridHarmonicNum", 0, EXT_IN, 1, 1, 1 },

  { 26, "GridHarmonicMag", 0, EXT_IN, 1, 1, 1 },

  { 1, "SpeedOutInRad//s", 0, EXT_OUT, 1, 1, 1 },

  { 2, "TorqueRampOut", 0, EXT_OUT, 1, 1, 1 },

  { 3, "SpeedActRPM", 0, EXT_OUT, 1, 1, 1 },

  { 4, "DCPower_kW", 0, EXT_OUT, 1, 1, 1 },

  { 5, "DCVoltRef", 0, EXT_OUT, 1, 1, 1 },

  { 6, "VgPhase1", 0, EXT_OUT, 1, 1, 1 },

  { 7, "VgPhase2", 0, EXT_OUT, 1, 1, 1 },

  { 8, "VgPhase3", 0, EXT_OUT, 1, 1, 1 },

  { 9, "DCPowerFlt_kW", 0, EXT_OUT, 1, 1, 1 },

  { 10, "MPower_kW", 0, EXT_OUT, 1, 1, 1 },

  { 11, "MPowerFlt_kW", 0, EXT_OUT, 1, 1, 1 },

  { 12, "Digital1", 0, EXT_OUT, 1, 1, 1 },

  { 13, "Digital0", 0, EXT_OUT, 1, 1, 1 },

  { -1, "", 0, 0, 0, 0, 0 }
};

/* This Task List is generated to allow access to the task specs without
 * initializing the model.
 * 0th entry is for scheduler (base rate)
 * rest for multirate model's tasks.
 */
MT_Task MT_TaskList[] DataSection(".MTVS.tasklist") =
{
  { 0, 0.0001, 0 }
};

int32_t MT_NumTasks DataSection(".MTVS.numtasks") = 1;
static const char* MT_CompiledModelName DataSection(".MTVS.compiledmodelname") =
  "RAMP";
static const char* MT_CompiledModelVersion = "1.108";
static const char* MT_CompiledModelDateTime = "Mon Aug 29 19:28:19 2022";
static const char* MT_builder DataSection(".MTVS.builder") =
  "MT Model Framework 2020.0.0.0 (2020) for Simulink Coder 9.0 (R2018b)";
static const char* MT_BuilderVersion DataSection(".MTVS.builderversion") =
  "2020.0.0.0";

/*========================================================================*
 * Function: MTRT_GetBuildInfo
 *
 * Abstract:
 *	Get the DLL versioning etc information.
 *
 * Output Parameters:
 *	detail	: String containing model build information.
 *	len		: the build info string length. If a value of "-1" is specified, the minimum buffer size of "detail" is returned as its value.
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_GetBuildInfo(char* detail, int32_t* len)
{
  int32_t msgLength = 0;
  char *msgBuffer = NULL;

  /* Message */
  const char msg[] =
    "%s\nModel Name: %s\nModel Version: %s\nVeriStand Model Framework Version: %s\nCompiled On: %s";

  /* There are no console properties to set for VxWorks, because the console is simply serial output data.
     Just do printf for VxWorks and ignore all console properties. */
#if ! defined (VXWORKS) && ! defined (kMTOSLinux) && ! defined (standalone )

  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hStdout, FOREGROUND_INTENSITY | FOREGROUND_BLUE |
    FOREGROUND_GREEN | FOREGROUND_RED);

#endif

  /* Print to screen */
  printf("\n*******************************************************************************\n");
  msgLength = printf(msg, MT_builder, MT_CompiledModelName,
                     MT_CompiledModelVersion, MT_BuilderVersion,
                     MT_CompiledModelDateTime);
  printf("\n*******************************************************************************\n");

#if ! defined (VXWORKS) && ! defined (kMTOSLinux) && ! defined (standalone )

  SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_GREEN |
    FOREGROUND_RED);

#endif

  if (*len == -1) {
    /* Return the required minimum buffer size */
    *len = msgLength;
  } else {
    /* allocate the buffer */
    msgBuffer = (char*)calloc(msgLength + 1, sizeof(char));
    sprintf (msgBuffer, msg, MT_builder, MT_CompiledModelName,
             MT_CompiledModelVersion, MT_BuilderVersion,
             MT_CompiledModelDateTime);
    if (*len >= msgLength) {
      *len = msgLength + 1;
    }

    /* Copy into external buffer */
    strncpy(detail, msgBuffer, *len);

    /* Release memory */
    free(msgBuffer);
  }

  return MT_OK;
}

/*========================================================================*
 * Function: MTRT_GetSignalSpec
 *
 * Abstract:
 *	If index == -1, lookup parameter by the ID.
 *	If ID_len == 0 or if ID == null, return number of parameters in model.
 *	Otherwise, lookup parameter by index, and return the information.
 *
 * Input/Output Parameters:
 *	index		: index of the signal (in/out)
 *	ID			: ID of signal to be looked up (in), ID of signal at index (out)
 *	ID_len		: length of input ID(in), length of ID (out)
 *	bnlen		: length of buffer blkname (in), length of output blkname (out)
 *	snlen		: length of buffer signame (in), length of output signame (out)
 *
 * Output Parameters:
 *	blkname		: Name of the source block for the signal
 *	portnum		: port number of the block that is the source of the signal (0 indexed)
 *	signame		: Name of the signal
 *	datatype	: same as with parameters. Currently assuming all data to be double.
 *	dims		: The port's dimension of length 'numdims'.
 *	numdims		: the port's number of dimensions. If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value.
 *
 * Returns:
 *	MT_OK if no error(if sigidx == -1, number of signals)
 *========================================================================*/
//zhaowei
//DLL_EXPORT int32_t MTRT_GetSignalSpec(int32_t* sidx, char* ID, int32_t* ID_len, char* blkname, int32_t *bnlen,
//							int32_t *portnum, char* signame, int32_t *snlen, int32_t *dattype, int32_t* dims, int32_t* numdim)
//{
//	int32_t sigidx = *sidx;
//	int32_t i = 0;
//	char *addr = NULL;
//	char *IDblk = 0;
//	int32_t IDport = 0;
//
//	if (sigidx < 0)
//	{
//		/* check if ID has been specified. */
//		if ((ID != NULL) && (ID_len != NULL) &&  (*ID_len > 0))
//		{
//			/* parse ID into blkname and port */
//			addr = strrchr(ID, ':');
//			if (addr == NULL)
//			{
//				return MT_SigListSize;
//			}
//
//			/* Calculate the char offset into the string after the port */
//			i = addr - ID;
//
//			/* malformed ID */
//			if (i<=0)
//			{
//				return MT_SigListSize;
//			}
//
//			IDblk = ID;
//			IDport = atoi(ID+i+1);
//
//			/* lookup the table for matching ID */
//			for (i=0; i<MT_SigListSize; i++)
//			{
//				/* 11 to accomodate ':','/', port number and null character */
//                char *tempID = (char *)calloc(strlen(MT_SigList[i].blockname)+strlen(MT_SigList[i].signalname) + 11, sizeof(char));
//
//                if (strlen(MT_SigList[i].signalname)>0)
//				{
//                    sprintf(tempID,"%s:%d%s%s",MT_SigList[i].blockname,MT_SigList[i].portno+1,"/",MT_SigList[i].signalname);
//				}
//                else
//				{
//                    sprintf(tempID,"%s:%d",MT_SigList[i].blockname,MT_SigList[i].portno+1);
//				}
//
//				if (!strcmp(IDblk,tempID) && IDport==(MT_SigList[i].portno+1))
//				{
//					break;
//				}
//
//                free(tempID);
//			}
//
//			if (i < MT_SigListSize)
//			{
//				sigidx = *sidx = i;
//			}
//			else
//			{
//				return MT_SigListSize;
//			}
//
//		}
//		else
//		{
//			// no index or ID specified.
//			return MT_SigListSize;
//		}
//	}
//
//	if (sigidx>=0 && sigidx<MT_SigListSize)
//	{
//		if (ID != NULL)
//		{
//			// no need for return string to be null terminated!
//			/* 11 to accomodate ':','/', port number and null character */
//			char *tempID = (char *)calloc(strlen(MT_SigList[sigidx].blockname)+strlen(MT_SigList[sigidx].signalname)+ 11, sizeof(char));
//
//            if (strlen(MT_SigList[sigidx].signalname)>0)
//			{
//                sprintf(tempID,"%s:%d%s%s",MT_SigList[sigidx].blockname,MT_SigList[sigidx].portno+1,"/",MT_SigList[sigidx].signalname);
//			}
//            else
//			{
//                sprintf(tempID,"%s:%d",MT_SigList[sigidx].blockname,MT_SigList[sigidx].portno+1);
//			}
//
//			if ((int32_t)strlen(tempID)<*ID_len)
//			{
//				*ID_len = strlen(tempID);
//			}
//
//			strncpy(ID, tempID, *ID_len);
//			free(tempID);
//		}
//
//		if (blkname != NULL)
//		{
//			// no need for return string to be null terminated!
//			if ((int32_t)strlen(MT_SigList[sigidx].blockname)<*bnlen)
//			{
//				*bnlen = strlen(MT_SigList[sigidx].blockname);
//			}
//
//	      	strncpy(blkname, MT_SigList[sigidx].blockname, *bnlen);
//	   	}
//
//	   	if (signame != NULL)
//		{
//			// no need for return string to be null terminated!
//			if ((int32_t)strlen(MT_SigList[sigidx].signalname)<*snlen)
//			{
//				*snlen = strlen(MT_SigList[sigidx].signalname);
//			}
//
//			strncpy(signame, MT_SigList[sigidx].signalname, *snlen);
//	   	}
//
//	   	if (portnum != NULL)
//		{
//	   		*portnum = MT_SigList[sigidx].portno;
//		}
//
//	   	if (dattype != NULL)
//		{
//	   		*dattype = MT_SigList[sigidx].datatype;
//		}
//
//		if (numdim != NULL)
//		{
//			if (*numdim == -1)
//			{
//				*numdim = MT_SigList[sigidx].numofdims;
//			}
//			else if (dims != NULL)
//			{
//				for (i=0;i < *numdim; i++)
//				{
//					dims[i] = MT_SigDimList[MT_SigList[sigidx].dimListOffset +i];
//				}
//			}
//		}
//
//	   	return MT_OK;
//	}
//	return MT_SigListSize;
//}
//zhaowei

/*========================================================================*
 * Function: MTRT_GetParameterIndices
 *
 * Abstract:
 *	Returns an array of indices to tunable parameters
 *
 * Output Parameters:
 *	indices	: buffer to store the parameter indices of length "len"
 *	len		: returns the number of indices. If a value of "-1" is specified, the minimum buffer size of "indices" is returned as its value.
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
//zhaowei
//DLL_EXPORT int32_t MTRT_GetParameterIndices(int32_t* indices, int32_t* len)
//{
//	int32_t i;
//
//	if((len == NULL) || (indices == NULL))
//	{
//		return MT_ERROR;
//	}
//
//	if (*len == -1)
//	{
//		*len = MT_ParamListSize;
//	}
//	else
//	{
//		for(i=0; (i < MT_ParamListSize) && (i < *len); i++)
//		{
//			indices[i] = MT_ParamList[i].idx;
//		}
//
//		*len = i;
//	}
//
//	return MT_OK;
//}
//zhaowei

/*========================================================================*
 * Function: MTRT_GetParameterSpec
 *
 * Abstract:
 *	If index == -1, lookup parameter by the ID.
 *	If ID_len == 0 or if ID == null, return number of parameters in model.
 *	Otherwise, lookup parameter by index, and return the information.
 *
 * Input/Output Parameters:
 *	paramidx	: index of the parameter(in/out). If a value of "-1" is specified, the parameter's ID is used instead
 *	ID			: ID of parameter to be looked up (in), ID of parameter at index (out)
 *	ID_len		: length of input ID (in), length of ID (out)
 *	pnlen		: length of buffer paramname(in), length of the returned paramname (out)
 *	numdim		: length of buffer dimension(in), length of output dimension (out). If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value
 *
 * Output Parameters:
 *	paramname	: Name of the parameter
 *	datatype	: datatype of the parameter (currently assuming 0: double, .. )
 *	dims		: array of dimensions with length 'numdim'
 *
 * Returns:
 *	MT_OK if no error (if paramidx == -1, number of tunable parameters)
 *========================================================================*/
//zhaowei
//DLL_EXPORT int32_t MTRT_GetParameterSpec(int32_t* pidx, char* ID, int32_t* ID_len, char* paramname, int32_t *pnlen,
//						    int32_t *dattype, int32_t* dims, int32_t* numdim)
//{
//	int32_t i = 0;
//	int32_t paramidx = *pidx;
//
//	if (paramidx < 0)
//	{
//		// check if ID has been specified.
//		if ( (ID != NULL) && (ID_len != NULL) && (*ID_len > 0) )
//		{
//			// lookup the table for matching ID
//			for (i=0; i < MT_ParamListSize; i++)
//			{
//				if (strcmp(ID,MT_ParamList[i].paramname) == 0)
//				{
//					/* found matching string */
//					break;
//				}
//			}
//
//			if (i < MT_ParamListSize)
//			{
//				/* note the index into the rtParamAttribs */
//				paramidx = *pidx = i;
//			}
//			else
//			{
//				return MT_ParamListSize;
//			}
//		}
//		else
//		{
//			// no index or ID specified.
//			return MT_ParamListSize;
//		}
//	}
//
//	if ((paramidx >= 0) && (paramidx<MT_ParamListSize))
//	{
//		if(ID != NULL)
//		{
//	    	if ((int32_t)strlen(MT_ParamList[paramidx].paramname) < *ID_len)
//			{
//				*ID_len = strlen(MT_ParamList[paramidx].paramname);
//			}
//			strncpy(ID, MT_ParamList[paramidx].paramname, *ID_len);
//	   	}
//
//	   	if(paramname != NULL)
//		{
//			/* no need for return string to be null terminated! */
//			if ((int32_t)strlen(MT_ParamList[paramidx].paramname) < *pnlen)
//			{
//				*pnlen = strlen(MT_ParamList[paramidx].paramname);
//			}
//		    strncpy(paramname, MT_ParamList[paramidx].paramname, *pnlen);
//	   	}
//
//	   	if (dattype != NULL)
//		{
//	   		*dattype = MT_ParamList[paramidx].datatype;
//		}
//
//	   	if (numdim != NULL)
//		{
//			if (*numdim == -1)
//			{
//				*numdim = MT_ParamList[paramidx].numofdims;
//			}
//			else if (dims != NULL)
//			{
//				for (i = 0; i < *numdim; i++)
//				{
//					dims[i] = MT_ParamDimList[MT_ParamList[paramidx].dimListOffset + i];
//				}
//			}
//		}
//
//	   	return MT_OK;
//	}
//	return MT_ParamListSize;
//}
//zhaowei
/*========================================================================*
 * Function: MTRT_GetExtIOSpec
 *
 * Abstract:
 *	Returns the model's inport or outport specification
 *
 * Input Parameters:
 *	index	: index of the task
 *
 * Output Parameters:
 *	idx		: idx of the IO.
 *	name	: Name of the IO block
 *	tid		: task id
 *	type	: EXT_IN or EXT_OUT
 *	dims	: The port's dimension of length 'numdims'.
 *	numdims : the port's number of dimensions. If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value.
 *
 * Returns
 *	MT_OK if no error. (if index == -1, return number of tasks in the model)
 *========================================================================*/
DLL_EXPORT int32_t MTRT_GetExtIOSpec(int32_t index, int32_t *idx, char* name,
  int32_t* tid, int32_t *type, int32_t *dims, int32_t* numdims)
{
  if (index == -1) {
    return MT_ExtListSize;
  }

  if (idx != NULL) {
    *idx = MT_ExtList[index].idx;
  }

  if (name != NULL) {
    int32_t sz = strlen(name);
    strncpy(name, MT_ExtList[index].name, sz-1);
    name[sz-1]= 0;
  }

  if (tid != NULL) {
    *tid = MT_ExtList[index].TID;
  }

  if (type != NULL) {
    *type = MT_ExtList[index].type;
  }

  if (numdims != NULL) {
    if (*numdims == -1) {
      *numdims = 2;
    } else if (numdims != NULL) {
      /* Return port dimensions */
      dims[0] = MT_ExtList[index].dimX;
      dims[1] = MT_ExtList[index].dimY;
    }
  }

  return MT_OK;
}

int32_t MT_InitParamDoubleBuf(void)
{
  return MT_OK;
}

int32_t MT_InitializeParamStruct(void)
{
  return MT_OK;
}

DLL_EXPORT int32_t MTRT_SetParameter(int32_t index, int32_t subindex, double
  value)
{
  return MT_ERROR;
}

DLL_EXPORT int32_t MTRT_GetParameter(int32_t index, int32_t subindex, double
  *value)
{
  return MT_ERROR;
}

DLL_EXPORT int32_t MTRT_GetVectorParameter(uint32_t index, double* paramvalues,
  uint32_t paramlength)
{
  return MT_ERROR;
}

DLL_EXPORT int32_t MTRT_SetVectorParameter(uint32_t index, const double
  * paramvalues, uint32_t paramlength)
{
  return MT_ERROR;
}

DLL_EXPORT int32_t MTRT_SetScalarParameterInline(uint32_t index, uint32_t
  subindex, double paramvalue)
{
  return MT_ERROR;
}

#endif                                 // of MT_ROOTMODEL_RAMP
