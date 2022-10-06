/*
 * RAMP_data.c
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

/* Block parameters (default storage) */
P_RAMP_T RAMP_P = {
  /* Expression: pi/30
   * Referenced by: '<Root>/RPM2rad//s'
   */
  0.10471975511965977,

  /* Expression: 30/pi
   * Referenced by: '<Root>/rad//s2RPM'
   */
  9.5492965855137211,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0
};
