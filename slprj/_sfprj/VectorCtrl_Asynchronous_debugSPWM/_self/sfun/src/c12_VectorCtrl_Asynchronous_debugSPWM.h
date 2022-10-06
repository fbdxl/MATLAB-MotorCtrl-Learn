#ifndef __c12_VectorCtrl_Asynchronous_debugSPWM_h__
#define __c12_VectorCtrl_Asynchronous_debugSPWM_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c12_ResolvedFunctionInfo;

typedef struct {
  int32_T c12_sfEvent;
  boolean_T c12_isStable;
  boolean_T c12_doneDoubleBufferReInit;
  uint8_T c12_is_active_c12_VectorCtrl_Asynchronous_debugSPWM;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
} SFc12_VectorCtrl_Asynchronous_debugSPWMInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c12_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c12_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(mxArray *
  plhs[]);
extern void c12_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
