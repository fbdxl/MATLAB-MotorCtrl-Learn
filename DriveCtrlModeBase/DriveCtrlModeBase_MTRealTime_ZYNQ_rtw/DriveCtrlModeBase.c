/*
 * DriveCtrlModeBase.c
 *
 * Code generation for model "DriveCtrlModeBase".
 *
 * Model version              : 1.108
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon May 16 18:27:39 2022
 *
 * Target selection: MTRealTime_ZYNQ.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DriveCtrlModeBase.h"
#include "DriveCtrlModeBase_private.h"

/* Block signals (default storage) */
B_DriveCtrlModeBase_T DriveCtrlModeBase_B;

/* Block states (default storage) */
DW_DriveCtrlModeBase_T DriveCtrlModeBase_DW;

/* External inputs (root inport signals with default storage) */
ExtU_DriveCtrlModeBase_T DriveCtrlModeBase_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DriveCtrlModeBase_T DriveCtrlModeBase_Y;

/* Real-time model */
RT_MODEL_DriveCtrlModeBase_T DriveCtrlModeBase_M_;
RT_MODEL_DriveCtrlModeBase_T *const DriveCtrlModeBase_M = &DriveCtrlModeBase_M_;

/* Model output function */
static void DriveCtrlModeBase_output(void)
{
  /* Outport: '<Root>/SpeedActRPM' incorporates:
   *  Gain: '<Root>/rad//s2RPM'
   *  Inport: '<Root>/w'
   */
  DriveCtrlModeBase_Y.SpeedActRPM = DriveCtrlModeBase_P.rads2RPM_Gain *
    DriveCtrlModeBase_U.w;

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
   */
  TorqueRefGen_Outputs_wrapper(&DriveCtrlModeBase_U.TorqueRiseTime,
    &DriveCtrlModeBase_U.TorqueFallTime, &DriveCtrlModeBase_U.NormalTorqueValue,
    &DriveCtrlModeBase_U.TargetTorquePercent, &DriveCtrlModeBase_U.w,
    &DriveCtrlModeBase_U.RatioOfW, &DriveCtrlModeBase_U.HarMoTorquePercentSet,
    &DriveCtrlModeBase_U.SpdPercentLmt, &DriveCtrlModeBase_U.NormalRPM,
    &DriveCtrlModeBase_B.TorqueRamp, &DriveCtrlModeBase_DW.TorqueRamp_DSTATE[0]);

  /* S-Function (TeCurveSignalGen): '<Root>/TeLoadCurve' incorporates:
   *  Inport: '<Root>/LoadOutCoef'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/StaticFCoef'
   *  Outport: '<Root>/SpeedActRPM'
   */
  TeCurveSignalGen_Outputs_wrapper(&DriveCtrlModeBase_Y.SpeedActRPM,
    &DriveCtrlModeBase_U.NormalRPM, &DriveCtrlModeBase_U.NormalTorqueValue,
    &DriveCtrlModeBase_U.StaticFCoef, &DriveCtrlModeBase_U.LoadOutCoef,
    &DriveCtrlModeBase_B.TeLoadCurve, &DriveCtrlModeBase_DW.TeLoadCurve_DSTATE[0]);

  /* Outport: '<Root>/TorqueRampOut' incorporates:
   *  Sum: '<Root>/Add'
   */
  DriveCtrlModeBase_Y.TorqueRampOut = DriveCtrlModeBase_B.TorqueRamp +
    DriveCtrlModeBase_B.TeLoadCurve;

  /* S-Function (TorqueGenSpd): '<Root>/TorqGenSpd' incorporates:
   *  Inport: '<Root>/Jpu'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/Toruqe'
   *  Outport: '<Root>/SpeedActRPM'
   *  Outport: '<Root>/TorqueRampOut'
   */
  TorqueGenSpd_Outputs_wrapper(&DriveCtrlModeBase_U.Toruqe,
    &DriveCtrlModeBase_Y.SpeedActRPM, &DriveCtrlModeBase_U.NormalTorqueValue,
    &DriveCtrlModeBase_U.NormalRPM, &DriveCtrlModeBase_U.Jpu,
    &DriveCtrlModeBase_Y.TorqueRampOut, &DriveCtrlModeBase_B.TorqGenSpd,
    &DriveCtrlModeBase_DW.TorqGenSpd_DSTATE[0]);

  /* Outport: '<Root>/SpeedOutInRad//s' incorporates:
   *  Gain: '<Root>/RPM2rad//s1'
   */
  DriveCtrlModeBase_Y.SpeedOutInRads = DriveCtrlModeBase_P.RPM2rads1_Gain *
    DriveCtrlModeBase_B.TorqGenSpd;

  /* S-Function (MechPowerCalc): '<Root>/MechPowerCalc' incorporates:
   *  Inport: '<Root>/Toruqe'
   *  Inport: '<Root>/fCut'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/MechPowerFlt_kW'
   *  Outport: '<Root>/TeFltNm'
   */
  MechPowerCalc_Outputs_wrapper(&DriveCtrlModeBase_U.w,
    &DriveCtrlModeBase_U.Toruqe, &DriveCtrlModeBase_U.fCut,
    &DriveCtrlModeBase_Y.TeFltNm, &DriveCtrlModeBase_Y.MechPowerFlt_kW,
    &DriveCtrlModeBase_DW.MechPowerCalc_DSTATE[0]);

  /* S-Function (DCPowerCalc): '<Root>/DcPowerCalc' incorporates:
   *  Inport: '<Root>/DcN'
   *  Inport: '<Root>/DcP'
   *  Inport: '<Root>/IdcN'
   *  Inport: '<Root>/IdcP'
   *  Inport: '<Root>/fCut'
   *  Outport: '<Root>/DCPowerFlt_kW'
   *  Outport: '<Root>/DCPower_kW'
   */
  DCPowerCalc_Outputs_wrapper(&DriveCtrlModeBase_U.DcP, &DriveCtrlModeBase_U.DcN,
    &DriveCtrlModeBase_U.IdcP, &DriveCtrlModeBase_U.IdcN,
    &DriveCtrlModeBase_U.fCut, &DriveCtrlModeBase_Y.DCPower_kW,
    &DriveCtrlModeBase_Y.DCPowerFlt_kW,
    &DriveCtrlModeBase_DW.DcPowerCalc_DSTATE[0]);

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
  VgGridGen_Outputs_wrapper(&DriveCtrlModeBase_U.VLine,
    &DriveCtrlModeBase_U.FreqGrid, &DriveCtrlModeBase_U.GridHarmonicNum,
    &DriveCtrlModeBase_U.GridHarmonicMag, &DriveCtrlModeBase_U.dVoltPerSec,
    &DriveCtrlModeBase_Y.VgPhase1, &DriveCtrlModeBase_Y.VgPhase2,
    &DriveCtrlModeBase_Y.VgPhase3, &DriveCtrlModeBase_DW.VgGridGen_DSTATE[0]);

  /* S-Function (SineSignalGen): '<Root>/SineSiganGen' incorporates:
   *  Inport: '<Root>/VdcDiFreq'
   *  Inport: '<Root>/VdcDisRef'
   *  Inport: '<Root>/VdcRef'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/VdcRefOut'
   */
  SineSignalGen_Outputs_wrapper(&DriveCtrlModeBase_U.VdcRef,
    &DriveCtrlModeBase_U.VdcDisRef, &DriveCtrlModeBase_U.VdcDiFreq,
    &DriveCtrlModeBase_U.dVoltPerSec, &DriveCtrlModeBase_Y.VdcRefOut,
    &DriveCtrlModeBase_DW.SineSiganGen_DSTATE[0]);

  /* S-Function (Contator): '<Root>/Cont1' incorporates:
   *  Inport: '<Root>/MainCloseCmd'
   *  Inport: '<Root>/MainOpenCmd'
   *  Outport: '<Root>/MainOutCmd'
   */
  Contator_Outputs_wrapper(&DriveCtrlModeBase_U.MainCloseCmd,
    &DriveCtrlModeBase_U.MainOpenCmd, &DriveCtrlModeBase_Y.MainOutCmd,
    &DriveCtrlModeBase_DW.Cont1_DSTATE[0]);

  /* S-Function (Contator): '<Root>/Cont2' incorporates:
   *  Inport: '<Root>/PreCloseCmd'
   *  Inport: '<Root>/PreOpenCmd'
   *  Outport: '<Root>/PreOutCmd'
   */
  Contator_Outputs_wrapper(&DriveCtrlModeBase_U.PreCloseCmd,
    &DriveCtrlModeBase_U.PreOpenCmd, &DriveCtrlModeBase_Y.PreOutCmd,
    &DriveCtrlModeBase_DW.Cont2_DSTATE[0]);
}

/* Model update function */
static void DriveCtrlModeBase_update(void)
{
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
   */

  /* S-Function "TorqueRefGen_wrapper" Block: <Root>/TorqueRamp */
  TorqueRefGen_Update_wrapper(&DriveCtrlModeBase_U.TorqueRiseTime,
    &DriveCtrlModeBase_U.TorqueFallTime, &DriveCtrlModeBase_U.NormalTorqueValue,
    &DriveCtrlModeBase_U.TargetTorquePercent, &DriveCtrlModeBase_U.w,
    &DriveCtrlModeBase_U.RatioOfW, &DriveCtrlModeBase_U.HarMoTorquePercentSet,
    &DriveCtrlModeBase_U.SpdPercentLmt, &DriveCtrlModeBase_U.NormalRPM,
    &DriveCtrlModeBase_B.TorqueRamp, &DriveCtrlModeBase_DW.TorqueRamp_DSTATE[0]);

  /* Update for S-Function (TeCurveSignalGen): '<Root>/TeLoadCurve' incorporates:
   *  Inport: '<Root>/LoadOutCoef'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/StaticFCoef'
   *  Outport: '<Root>/SpeedActRPM'
   */

  /* S-Function "TeCurveSignalGen_wrapper" Block: <Root>/TeLoadCurve */
  TeCurveSignalGen_Update_wrapper(&DriveCtrlModeBase_Y.SpeedActRPM,
    &DriveCtrlModeBase_U.NormalRPM, &DriveCtrlModeBase_U.NormalTorqueValue,
    &DriveCtrlModeBase_U.StaticFCoef, &DriveCtrlModeBase_U.LoadOutCoef,
    &DriveCtrlModeBase_B.TeLoadCurve, &DriveCtrlModeBase_DW.TeLoadCurve_DSTATE[0]);

  /* Update for S-Function (TorqueGenSpd): '<Root>/TorqGenSpd' incorporates:
   *  Inport: '<Root>/Jpu'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/Toruqe'
   *  Outport: '<Root>/SpeedActRPM'
   *  Outport: '<Root>/TorqueRampOut'
   */

  /* S-Function "TorqueGenSpd_wrapper" Block: <Root>/TorqGenSpd */
  TorqueGenSpd_Update_wrapper(&DriveCtrlModeBase_U.Toruqe,
    &DriveCtrlModeBase_Y.SpeedActRPM, &DriveCtrlModeBase_U.NormalTorqueValue,
    &DriveCtrlModeBase_U.NormalRPM, &DriveCtrlModeBase_U.Jpu,
    &DriveCtrlModeBase_Y.TorqueRampOut, &DriveCtrlModeBase_B.TorqGenSpd,
    &DriveCtrlModeBase_DW.TorqGenSpd_DSTATE[0]);

  /* Update for S-Function (MechPowerCalc): '<Root>/MechPowerCalc' incorporates:
   *  Inport: '<Root>/Toruqe'
   *  Inport: '<Root>/fCut'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/MechPowerFlt_kW'
   *  Outport: '<Root>/TeFltNm'
   */

  /* S-Function "MechPowerCalc_wrapper" Block: <Root>/MechPowerCalc */
  MechPowerCalc_Update_wrapper(&DriveCtrlModeBase_U.w,
    &DriveCtrlModeBase_U.Toruqe, &DriveCtrlModeBase_U.fCut,
    &DriveCtrlModeBase_Y.TeFltNm, &DriveCtrlModeBase_Y.MechPowerFlt_kW,
    &DriveCtrlModeBase_DW.MechPowerCalc_DSTATE[0]);

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
  DCPowerCalc_Update_wrapper(&DriveCtrlModeBase_U.DcP, &DriveCtrlModeBase_U.DcN,
    &DriveCtrlModeBase_U.IdcP, &DriveCtrlModeBase_U.IdcN,
    &DriveCtrlModeBase_U.fCut, &DriveCtrlModeBase_Y.DCPower_kW,
    &DriveCtrlModeBase_Y.DCPowerFlt_kW,
    &DriveCtrlModeBase_DW.DcPowerCalc_DSTATE[0]);

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
  VgGridGen_Update_wrapper(&DriveCtrlModeBase_U.VLine,
    &DriveCtrlModeBase_U.FreqGrid, &DriveCtrlModeBase_U.GridHarmonicNum,
    &DriveCtrlModeBase_U.GridHarmonicMag, &DriveCtrlModeBase_U.dVoltPerSec,
    &DriveCtrlModeBase_Y.VgPhase1, &DriveCtrlModeBase_Y.VgPhase2,
    &DriveCtrlModeBase_Y.VgPhase3, &DriveCtrlModeBase_DW.VgGridGen_DSTATE[0]);

  /* Update for S-Function (SineSignalGen): '<Root>/SineSiganGen' incorporates:
   *  Inport: '<Root>/VdcDiFreq'
   *  Inport: '<Root>/VdcDisRef'
   *  Inport: '<Root>/VdcRef'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/VdcRefOut'
   */

  /* S-Function "SineSignalGen_wrapper" Block: <Root>/SineSiganGen */
  SineSignalGen_Update_wrapper(&DriveCtrlModeBase_U.VdcRef,
    &DriveCtrlModeBase_U.VdcDisRef, &DriveCtrlModeBase_U.VdcDiFreq,
    &DriveCtrlModeBase_U.dVoltPerSec, &DriveCtrlModeBase_Y.VdcRefOut,
    &DriveCtrlModeBase_DW.SineSiganGen_DSTATE[0]);

  /* Update for S-Function (Contator): '<Root>/Cont1' incorporates:
   *  Inport: '<Root>/MainCloseCmd'
   *  Inport: '<Root>/MainOpenCmd'
   *  Outport: '<Root>/MainOutCmd'
   */

  /* S-Function "Contator_wrapper" Block: <Root>/Cont1 */
  Contator_Update_wrapper(&DriveCtrlModeBase_U.MainCloseCmd,
    &DriveCtrlModeBase_U.MainOpenCmd, &DriveCtrlModeBase_Y.MainOutCmd,
    &DriveCtrlModeBase_DW.Cont1_DSTATE[0]);

  /* Update for S-Function (Contator): '<Root>/Cont2' incorporates:
   *  Inport: '<Root>/PreCloseCmd'
   *  Inport: '<Root>/PreOpenCmd'
   *  Outport: '<Root>/PreOutCmd'
   */

  /* S-Function "Contator_wrapper" Block: <Root>/Cont2 */
  Contator_Update_wrapper(&DriveCtrlModeBase_U.PreCloseCmd,
    &DriveCtrlModeBase_U.PreOpenCmd, &DriveCtrlModeBase_Y.PreOutCmd,
    &DriveCtrlModeBase_DW.Cont2_DSTATE[0]);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++DriveCtrlModeBase_M->Timing.clockTick0)) {
    ++DriveCtrlModeBase_M->Timing.clockTickH0;
  }

  DriveCtrlModeBase_M->Timing.t[0] = DriveCtrlModeBase_M->Timing.clockTick0 *
    DriveCtrlModeBase_M->Timing.stepSize0 +
    DriveCtrlModeBase_M->Timing.clockTickH0 *
    DriveCtrlModeBase_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void DriveCtrlModeBase_initialize(void)
{
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
   */

  /* S-Function Block: <Root>/TorqueRamp */
  {
    real_T initVector[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.TorqueRamp_DSTATE[0];
      for (i1=0; i1 < 10; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (TeCurveSignalGen): '<Root>/TeLoadCurve' incorporates:
   *  Inport: '<Root>/LoadOutCoef'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/StaticFCoef'
   *  Outport: '<Root>/SpeedActRPM'
   */

  /* S-Function Block: <Root>/TeLoadCurve */
  {
    real_T initVector[5] = { 0, 0, 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.TeLoadCurve_DSTATE[0];
      for (i1=0; i1 < 5; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (TorqueGenSpd): '<Root>/TorqGenSpd' incorporates:
   *  Inport: '<Root>/Jpu'
   *  Inport: '<Root>/NormalRPM'
   *  Inport: '<Root>/NormalTorqueValue'
   *  Inport: '<Root>/Toruqe'
   *  Outport: '<Root>/SpeedActRPM'
   *  Outport: '<Root>/TorqueRampOut'
   */

  /* S-Function Block: <Root>/TorqGenSpd */
  {
    real_T initVector[2] = { 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.TorqGenSpd_DSTATE[0];
      for (i1=0; i1 < 2; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (MechPowerCalc): '<Root>/MechPowerCalc' incorporates:
   *  Inport: '<Root>/Toruqe'
   *  Inport: '<Root>/fCut'
   *  Inport: '<Root>/w'
   *  Outport: '<Root>/MechPowerFlt_kW'
   *  Outport: '<Root>/TeFltNm'
   */

  /* S-Function Block: <Root>/MechPowerCalc */
  {
    real_T initVector[3] = { 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.MechPowerCalc_DSTATE[0];
      for (i1=0; i1 < 3; i1++) {
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
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.DcPowerCalc_DSTATE[0];
      for (i1=0; i1 < 2; i1++) {
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
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.VgGridGen_DSTATE[0];
      for (i1=0; i1 < 5; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (SineSignalGen): '<Root>/SineSiganGen' incorporates:
   *  Inport: '<Root>/VdcDiFreq'
   *  Inport: '<Root>/VdcDisRef'
   *  Inport: '<Root>/VdcRef'
   *  Inport: '<Root>/dVoltPerSec'
   *  Outport: '<Root>/VdcRefOut'
   */

  /* S-Function Block: <Root>/SineSiganGen */
  {
    real_T initVector[5] = { 0, 0, 0, 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.SineSiganGen_DSTATE[0];
      for (i1=0; i1 < 5; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (Contator): '<Root>/Cont1' incorporates:
   *  Inport: '<Root>/MainCloseCmd'
   *  Inport: '<Root>/MainOpenCmd'
   *  Outport: '<Root>/MainOutCmd'
   */

  /* S-Function Block: <Root>/Cont1 */
  {
    real_T initVector[2] = { 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.Cont1_DSTATE[0];
      for (i1=0; i1 < 2; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }

  /* InitializeConditions for S-Function (Contator): '<Root>/Cont2' incorporates:
   *  Inport: '<Root>/PreCloseCmd'
   *  Inport: '<Root>/PreOpenCmd'
   *  Outport: '<Root>/PreOutCmd'
   */

  /* S-Function Block: <Root>/Cont2 */
  {
    real_T initVector[2] = { 0, 0 };

    {
      int_T i1;
      real_T *dw_DSTATE = &DriveCtrlModeBase_DW.Cont2_DSTATE[0];
      for (i1=0; i1 < 2; i1++) {
        dw_DSTATE[i1] = initVector[i1];
      }
    }
  }
}

/* Model terminate function */
static void DriveCtrlModeBase_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  DriveCtrlModeBase_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  DriveCtrlModeBase_update();
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
  DriveCtrlModeBase_initialize();
}

void MdlTerminate(void)
{
  DriveCtrlModeBase_terminate();
}

/* Registration function */
RT_MODEL_DriveCtrlModeBase_T *DriveCtrlModeBase(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)DriveCtrlModeBase_M, 0,
                sizeof(RT_MODEL_DriveCtrlModeBase_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = DriveCtrlModeBase_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    DriveCtrlModeBase_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    DriveCtrlModeBase_M->Timing.sampleTimes =
      (&DriveCtrlModeBase_M->Timing.sampleTimesArray[0]);
    DriveCtrlModeBase_M->Timing.offsetTimes =
      (&DriveCtrlModeBase_M->Timing.offsetTimesArray[0]);

    /* task periods */
    DriveCtrlModeBase_M->Timing.sampleTimes[0] = (0.0001);

    /* task offsets */
    DriveCtrlModeBase_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(DriveCtrlModeBase_M, &DriveCtrlModeBase_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = DriveCtrlModeBase_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    DriveCtrlModeBase_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(DriveCtrlModeBase_M, 10.0);
  DriveCtrlModeBase_M->Timing.stepSize0 = 0.0001;
  DriveCtrlModeBase_M->solverInfoPtr = (&DriveCtrlModeBase_M->solverInfo);
  DriveCtrlModeBase_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&DriveCtrlModeBase_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&DriveCtrlModeBase_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  DriveCtrlModeBase_M->blockIO = ((void *) &DriveCtrlModeBase_B);
  (void) memset(((void *) &DriveCtrlModeBase_B), 0,
                sizeof(B_DriveCtrlModeBase_T));

  /* parameters */
  DriveCtrlModeBase_M->defaultParam = ((real_T *)&DriveCtrlModeBase_P);

  /* states (dwork) */
  DriveCtrlModeBase_M->dwork = ((void *) &DriveCtrlModeBase_DW);
  (void) memset((void *)&DriveCtrlModeBase_DW, 0,
                sizeof(DW_DriveCtrlModeBase_T));

  /* external inputs */
  DriveCtrlModeBase_M->inputs = (((void*)&DriveCtrlModeBase_U));
  (void)memset(&DriveCtrlModeBase_U, 0, sizeof(ExtU_DriveCtrlModeBase_T));

  /* external outputs */
  DriveCtrlModeBase_M->outputs = (&DriveCtrlModeBase_Y);
  (void) memset((void *)&DriveCtrlModeBase_Y, 0,
                sizeof(ExtY_DriveCtrlModeBase_T));

  /* Initialize Sizes */
  DriveCtrlModeBase_M->Sizes.numContStates = (0);/* Number of continuous states */
  DriveCtrlModeBase_M->Sizes.numY = (13);/* Number of model outputs */
  DriveCtrlModeBase_M->Sizes.numU = (30);/* Number of model inputs */
  DriveCtrlModeBase_M->Sizes.sysDirFeedThru = (1);/* The model is direct feedthrough */
  DriveCtrlModeBase_M->Sizes.numSampTimes = (1);/* Number of sample times */
  DriveCtrlModeBase_M->Sizes.numBlocks = (25);/* Number of blocks */
  DriveCtrlModeBase_M->Sizes.numBlockIO = (15);/* Number of block outputs */
  DriveCtrlModeBase_M->Sizes.numBlockPrms = (2);/* Sum of parameter "widths" */
  return DriveCtrlModeBase_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

/*========================================================================*
 * MT RealTime Model Framework code generation
 *
 * Model : DriveCtrlModeBase
 * Model version : 1.108
 * RealTime Model Framework version : 2020.0.0.0 (2020)
 * Source generated on : Mon May 16 18:27:39 2022
 *========================================================================*/

/* This file contains automatically generated code for functions
 * to update the inports and outports of a Simulink/Realtime Workshop
 * model. Calls to these functions should be made before each step is taken
 * (inports, call SetExternalInputs) and after each step is taken
 * (outports, call SetExternalOutputs.)
 */
#ifdef MT_ROOTMODEL_DriveCtrlModeBase
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

extern DriveCtrlModeBase_rtModel *S;
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
  ExtU_DriveCtrlModeBase_T *rtIN = (ExtU_DriveCtrlModeBase_T*) S->inputs;
  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->NormalRPM Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->NormalRPM, 0, data[index++], 0, 0);
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
    /* rtIN->fCut Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->fCut, 0, data[index++], 0, 0);
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
    /* rtIN->Jpu Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->Jpu, 0, data[index++], 0, 0);
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

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->MainCloseCmd Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->MainCloseCmd, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->MainOpenCmd Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->MainOpenCmd, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->PreCloseCmd Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->PreCloseCmd, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->PreOpenCmd Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->PreOpenCmd, 0, data[index++], 0, 0);
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
    /* rtIN->VdcRef Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->VdcRef, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->VdcDisRef Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->VdcDisRef, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->VdcDiFreq Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->VdcDiFreq, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->LoadOutCoef Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->LoadOutCoef, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtIN->StaticFCoef Type real_T -> 0 Width [1, 1] */
    MTRT_SetValueByDataType(&rtIN->StaticFCoef, 0, data[index++], 0, 0);
  } else {                             // hold this input--skip over it in the input buffer
    index += 1;
  }

  UNUSED_PARAMETER(count);
}                                      /* of SetExternalInputs */

int32_t NumInputPorts(void)
{
  return 30;
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
  ExtY_DriveCtrlModeBase_T* rtOUT = (ExtY_DriveCtrlModeBase_T*) S->outputs;
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
    /* rtOUT->TeFltNm has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->TeFltNm), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->MechPowerFlt_kW has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MechPowerFlt_kW), 0, 0,
      0);
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
    /* rtOUT->MainOutCmd has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MainOutCmd), 0, 0, 0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->PreOutCmd has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->PreOutCmd), 0, 0, 0);
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
    /* rtOUT->DCPowerFlt_kW has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPowerFlt_kW), 0, 0,
      0);
  } else {
    index += 1;
  }

  if (TaskSampleHit[0]) {              // sample and hold
    /* rtOUT->VdcRefOut has width [1, 1] type real_T -> 0 */
    mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VdcRefOut), 0, 0, 0);
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
  ExtY_DriveCtrlModeBase_T* rtOUT = (ExtY_DriveCtrlModeBase_T*) S->outputs;

  /* rtOUT->SpeedOutInRads has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->SpeedOutInRads), 0, 0, 0);

  /* rtOUT->TorqueRampOut has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->TorqueRampOut), 0, 0, 0);

  /* rtOUT->SpeedActRPM has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->SpeedActRPM), 0, 0, 0);

  /* rtOUT->TeFltNm has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->TeFltNm), 0, 0, 0);

  /* rtOUT->MechPowerFlt_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MechPowerFlt_kW), 0, 0,
    0);

  /* rtOUT->VgPhase1 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase1), 0, 0, 0);

  /* rtOUT->VgPhase2 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase2), 0, 0, 0);

  /* rtOUT->VgPhase3 has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VgPhase3), 0, 0, 0);

  /* rtOUT->MainOutCmd has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->MainOutCmd), 0, 0, 0);

  /* rtOUT->PreOutCmd has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->PreOutCmd), 0, 0, 0);

  /* rtOUT->DCPower_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPower_kW), 0, 0, 0);

  /* rtOUT->DCPowerFlt_kW has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->DCPowerFlt_kW), 0, 0, 0);

  /* rtOUT->VdcRefOut has width 1 -> [1, 1] type 0 -> 0 */
  mt_extout[index++] = MTRT_GetValueByDataType(&(rtOUT->VdcRefOut), 0, 0, 0);
  UNUSED_PARAMETER(count);
  return MT_OK;
}

static int32_t MT_ExtListSize DataSection(".MTVS.extlistsize") = 43;
static MT_ExternalIO MT_ExtList[] DataSection(".MTVS.extlist") =
{
  { 1, "NormalRPM", 0, EXT_IN, 1, 1, 1 },

  { 2, "TorqueRiseTime", 0, EXT_IN, 1, 1, 1 },

  { 3, "TorqueFallTime", 0, EXT_IN, 1, 1, 1 },

  { 4, "NormalTorqueValue", 0, EXT_IN, 1, 1, 1 },

  { 5, "TargetTorquePercent", 0, EXT_IN, 1, 1, 1 },

  { 6, "w", 0, EXT_IN, 1, 1, 1 },

  { 7, "RatioOfW", 0, EXT_IN, 1, 1, 1 },

  { 8, "HarMoTorquePercentSet", 0, EXT_IN, 1, 1, 1 },

  { 9, "SpdPercentLmt", 0, EXT_IN, 1, 1, 1 },

  { 10, "Toruqe", 0, EXT_IN, 1, 1, 1 },

  { 11, "fCut", 0, EXT_IN, 1, 1, 1 },

  { 12, "dVoltPerSec", 0, EXT_IN, 1, 1, 1 },

  { 13, "Jpu", 0, EXT_IN, 1, 1, 1 },

  { 14, "VLine", 0, EXT_IN, 1, 1, 1 },

  { 15, "FreqGrid", 0, EXT_IN, 1, 1, 1 },

  { 16, "GridHarmonicNum", 0, EXT_IN, 1, 1, 1 },

  { 17, "GridHarmonicMag", 0, EXT_IN, 1, 1, 1 },

  { 18, "MainCloseCmd", 0, EXT_IN, 1, 1, 1 },

  { 19, "MainOpenCmd", 0, EXT_IN, 1, 1, 1 },

  { 20, "PreCloseCmd", 0, EXT_IN, 1, 1, 1 },

  { 21, "PreOpenCmd", 0, EXT_IN, 1, 1, 1 },

  { 22, "DcP", 0, EXT_IN, 1, 1, 1 },

  { 23, "DcN", 0, EXT_IN, 1, 1, 1 },

  { 24, "IdcP", 0, EXT_IN, 1, 1, 1 },

  { 25, "IdcN", 0, EXT_IN, 1, 1, 1 },

  { 26, "VdcRef", 0, EXT_IN, 1, 1, 1 },

  { 27, "VdcDisRef", 0, EXT_IN, 1, 1, 1 },

  { 28, "VdcDiFreq", 0, EXT_IN, 1, 1, 1 },

  { 29, "LoadOutCoef", 0, EXT_IN, 1, 1, 1 },

  { 30, "StaticFCoef", 0, EXT_IN, 1, 1, 1 },

  { 1, "SpeedOutInRad//s", 0, EXT_OUT, 1, 1, 1 },

  { 2, "TorqueRampOut", 0, EXT_OUT, 1, 1, 1 },

  { 3, "SpeedActRPM", 0, EXT_OUT, 1, 1, 1 },

  { 4, "TeFltNm", 0, EXT_OUT, 1, 1, 1 },

  { 5, "MechPowerFlt_kW", 0, EXT_OUT, 1, 1, 1 },

  { 6, "VgPhase1", 0, EXT_OUT, 1, 1, 1 },

  { 7, "VgPhase2", 0, EXT_OUT, 1, 1, 1 },

  { 8, "VgPhase3", 0, EXT_OUT, 1, 1, 1 },

  { 9, "MainOutCmd", 0, EXT_OUT, 1, 1, 1 },

  { 10, "PreOutCmd", 0, EXT_OUT, 1, 1, 1 },

  { 11, "DCPower_kW", 0, EXT_OUT, 1, 1, 1 },

  { 12, "DCPowerFlt_kW", 0, EXT_OUT, 1, 1, 1 },

  { 13, "VdcRefOut", 0, EXT_OUT, 1, 1, 1 },

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
  "DriveCtrlModeBase";
static const char* MT_CompiledModelVersion = "1.108";
static const char* MT_CompiledModelDateTime = "Mon May 16 18:27:39 2022";
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

#endif                                 // of MT_ROOTMODEL_DriveCtrlModeBase
