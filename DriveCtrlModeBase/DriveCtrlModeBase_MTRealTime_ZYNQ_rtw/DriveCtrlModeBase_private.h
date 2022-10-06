/*
 * DriveCtrlModeBase_private.h
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

#ifndef RTW_HEADER_DriveCtrlModeBase_private_h_
#define RTW_HEADER_DriveCtrlModeBase_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifdef __cplusplus

extern "C" {

#endif

  extern void TorqueRefGen_Start_wrapper(real_T *xD);
  extern void TorqueRefGen_Outputs_wrapper(const real_T *RiseTime,
    const real_T *FallTime,
    const real_T *NormalValue,
    const real_T *DestValuePercent,
    const real_T *w,
    const real_T *RatioOfW,
    const real_T *HarmoTorquePercent,
    const real_T *SpdPercentLmt,
    const real_T *RPMNorm,
    real_T *RampOut,
    const real_T *xD);
  extern void TorqueRefGen_Update_wrapper(const real_T *RiseTime,
    const real_T *FallTime,
    const real_T *NormalValue,
    const real_T *DestValuePercent,
    const real_T *w,
    const real_T *RatioOfW,
    const real_T *HarmoTorquePercent,
    const real_T *SpdPercentLmt,
    const real_T *RPMNorm,
    real_T *RampOut,
    real_T *xD);
  extern void TorqueRefGen_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TeCurveSignalGen_Start_wrapper(real_T *xD);
  extern void TeCurveSignalGen_Outputs_wrapper(const real_T *nrpm,
    const real_T *NormRpm,
    const real_T *TeNorm,
    const real_T *StaticFCoef,
    const real_T *KpLoadCurve,
    real_T *TLCurveOut,
    const real_T *xD);
  extern void TeCurveSignalGen_Update_wrapper(const real_T *nrpm,
    const real_T *NormRpm,
    const real_T *TeNorm,
    const real_T *StaticFCoef,
    const real_T *KpLoadCurve,
    real_T *TLCurveOut,
    real_T *xD);
  extern void TeCurveSignalGen_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TorqueGenSpd_Start_wrapper(real_T *xD);
  extern void TorqueGenSpd_Outputs_wrapper(const real_T *TorqMotor,
    const real_T *SpdAct,
    const real_T *TorqBase,
    const real_T *SpdBase,
    const real_T *Jpu,
    const real_T *TorqLoad,
    real_T *SpdSetOut,
    const real_T *xD);
  extern void TorqueGenSpd_Update_wrapper(const real_T *TorqMotor,
    const real_T *SpdAct,
    const real_T *TorqBase,
    const real_T *SpdBase,
    const real_T *Jpu,
    const real_T *TorqLoad,
    real_T *SpdSetOut,
    real_T *xD);
  extern void TorqueGenSpd_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void MechPowerCalc_Start_wrapper(real_T *xD);
  extern void MechPowerCalc_Outputs_wrapper(const real_T *Wm,
    const real_T *Torque,
    const real_T *fCut,
    real_T *MechPower_kW,
    real_T *MechPowerFlt_kW,
    const real_T *xD);
  extern void MechPowerCalc_Update_wrapper(const real_T *Wm,
    const real_T *Torque,
    const real_T *fCut,
    real_T *MechPower_kW,
    real_T *MechPowerFlt_kW,
    real_T *xD);
  extern void MechPowerCalc_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void DCPowerCalc_Start_wrapper(real_T *xD);
  extern void DCPowerCalc_Outputs_wrapper(const real_T *VdcP,
    const real_T *VdcN,
    const real_T *IdcP,
    const real_T *IdcN,
    const real_T *fCut,
    real_T *DCPower_kW,
    real_T *DCPowerFlt_kW,
    const real_T *xD);
  extern void DCPowerCalc_Update_wrapper(const real_T *VdcP,
    const real_T *VdcN,
    const real_T *IdcP,
    const real_T *IdcN,
    const real_T *fCut,
    real_T *DCPower_kW,
    real_T *DCPowerFlt_kW,
    real_T *xD);
  extern void DCPowerCalc_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void VgGridGen_Start_wrapper(real_T *xD);
  extern void VgGridGen_Outputs_wrapper(const real_T *ACLine,
    const real_T *Freq,
    const real_T *HarmonicNum,
    const real_T *HarmonicMag,
    const real_T *dVoltPerSec,
    real_T *VgPhaseA,
    real_T *VgPhaseB,
    real_T *VgPhaseC,
    const real_T *xD);
  extern void VgGridGen_Update_wrapper(const real_T *ACLine,
    const real_T *Freq,
    const real_T *HarmonicNum,
    const real_T *HarmonicMag,
    const real_T *dVoltPerSec,
    real_T *VgPhaseA,
    real_T *VgPhaseB,
    real_T *VgPhaseC,
    real_T *xD);
  extern void VgGridGen_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void SineSignalGen_Start_wrapper(real_T *xD);
  extern void SineSignalGen_Outputs_wrapper(const real_T *DCMag,
    const real_T *ACMag,
    const real_T *Freq,
    const real_T *dVoltPerSec,
    real_T *SineOut,
    const real_T *xD);
  extern void SineSignalGen_Update_wrapper(const real_T *DCMag,
    const real_T *ACMag,
    const real_T *Freq,
    const real_T *dVoltPerSec,
    real_T *SineOut,
    real_T *xD);
  extern void SineSignalGen_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void Contator_Start_wrapper(real_T *xD);
  extern void Contator_Outputs_wrapper(const real_T *CloseCmd,
    const real_T *OpenCmd,
    real_T *ConCmd,
    const real_T *xD);
  extern void Contator_Update_wrapper(const real_T *CloseCmd,
    const real_T *OpenCmd,
    real_T *ConCmd,
    real_T *xD);
  extern void Contator_Terminate_wrapper(real_T *xD);

#ifdef __cplusplus

}
#endif
#endif                                 /* RTW_HEADER_DriveCtrlModeBase_private_h_ */
