/* Include files */

#include "blascompat32.h"
#include "Vector_Control_SVPWM_encoderless_learn_sfun.h"
#include "c15_Vector_Control_SVPWM_encoderless_learn.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Vector_Control_SVPWM_encoderless_learn_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c15_debug_family_names[8] = { "Threshold", "Hysteresis",
  "nargin", "nargout", "u", "ubase", "ybak", "y" };

/* Function Declarations */
static void initialize_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void initialize_params_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void enable_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void disable_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void c15_update_debugger_state_c15_Vector_Control_SVPWM_encoderless_l
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_st);
static void finalize_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void sf_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void initSimStructsc15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber);
static const mxArray *c15_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static real_T c15_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_y, const char_T *c15_identifier);
static real_T c15_b_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static const mxArray *c15_b_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData);
static int32_T c15_c_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData);
static uint8_T c15_d_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_b_is_active_c15_Vector_Control_SVPWM_encoderless_learn,
   const char_T *c15_identifier);
static uint8_T c15_e_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId);
static void init_dsm_address_info
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  chartInstance->c15_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c15_is_active_c15_Vector_Control_SVPWM_encoderless_learn = 0U;
}

static void initialize_params_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static void enable_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c15_update_debugger_state_c15_Vector_Control_SVPWM_encoderless_l
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  const mxArray *c15_st;
  const mxArray *c15_y = NULL;
  real_T c15_hoistedGlobal;
  real_T c15_u;
  const mxArray *c15_b_y = NULL;
  uint8_T c15_b_hoistedGlobal;
  uint8_T c15_b_u;
  const mxArray *c15_c_y = NULL;
  real_T *c15_d_y;
  c15_d_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_st = NULL;
  c15_st = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_createcellarray(2), FALSE);
  c15_hoistedGlobal = *c15_d_y;
  c15_u = c15_hoistedGlobal;
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c15_y, 0, c15_b_y);
  c15_b_hoistedGlobal =
    chartInstance->c15_is_active_c15_Vector_Control_SVPWM_encoderless_learn;
  c15_b_u = c15_b_hoistedGlobal;
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y", &c15_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c15_y, 1, c15_c_y);
  sf_mex_assign(&c15_st, c15_y, FALSE);
  return c15_st;
}

static void set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_st)
{
  const mxArray *c15_u;
  real_T *c15_y;
  c15_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c15_doneDoubleBufferReInit = TRUE;
  c15_u = sf_mex_dup(c15_st);
  *c15_y = c15_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c15_u,
    0)), "y");
  chartInstance->c15_is_active_c15_Vector_Control_SVPWM_encoderless_learn =
    c15_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 1)),
    "is_active_c15_Vector_Control_SVPWM_encoderless_learn");
  sf_mex_destroy(&c15_u);
  c15_update_debugger_state_c15_Vector_Control_SVPWM_encoderless_l(chartInstance);
  sf_mex_destroy(&c15_st);
}

static void finalize_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static void sf_c15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  real_T c15_hoistedGlobal;
  real_T c15_b_hoistedGlobal;
  real_T c15_c_hoistedGlobal;
  real_T c15_u;
  real_T c15_ubase;
  real_T c15_ybak;
  uint32_T c15_debug_family_var_map[8];
  real_T c15_Threshold;
  real_T c15_Hysteresis;
  real_T c15_nargin = 3.0;
  real_T c15_nargout = 1.0;
  real_T c15_y;
  real_T c15_b;
  real_T c15_b_b;
  real_T *c15_b_u;
  real_T *c15_b_y;
  real_T *c15_b_ubase;
  real_T *c15_b_ybak;
  c15_b_ybak = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c15_b_ubase = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c15_b_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_b_u = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 13U, chartInstance->c15_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c15_b_u, 0U);
  _SFD_DATA_RANGE_CHECK(*c15_b_y, 1U);
  _SFD_DATA_RANGE_CHECK(*c15_b_ubase, 2U);
  _SFD_DATA_RANGE_CHECK(*c15_b_ybak, 3U);
  chartInstance->c15_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 13U, chartInstance->c15_sfEvent);
  c15_hoistedGlobal = *c15_b_u;
  c15_b_hoistedGlobal = *c15_b_ubase;
  c15_c_hoistedGlobal = *c15_b_ybak;
  c15_u = c15_hoistedGlobal;
  c15_ubase = c15_b_hoistedGlobal;
  c15_ybak = c15_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c15_debug_family_names,
    c15_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c15_Threshold, 0U,
    c15_sf_marshallOut, c15_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c15_Hysteresis, 1U,
    c15_sf_marshallOut, c15_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c15_nargin, 2U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c15_nargout, 3U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c15_u, 4U, c15_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c15_ubase, 5U, c15_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c15_ybak, 6U, c15_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c15_y, 7U, c15_sf_marshallOut,
    c15_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 3);
  c15_b = c15_ubase;
  c15_Threshold = 0.15 * c15_b;
  _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 4);
  c15_b_b = c15_ubase;
  c15_Hysteresis = 0.05 * c15_b_b;
  _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 5);
  if (CV_EML_IF(0, 1, 0, c15_u > c15_Threshold + c15_Hysteresis)) {
    _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 6);
    c15_y = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 7);
    if (CV_EML_IF(0, 1, 1, c15_u < c15_Threshold - c15_Hysteresis)) {
      _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 8);
      c15_y = 0.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, 10);
      c15_y = c15_ybak;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c15_sfEvent, -10);
  sf_debug_symbol_scope_pop();
  *c15_b_y = c15_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, chartInstance->c15_sfEvent);
  sf_debug_check_for_state_inconsistency
    (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc15_Vector_Control_SVPWM_encoderless_learn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber)
{
}

static const mxArray *c15_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData = NULL;
  real_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_u = *(real_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c15_mxArrayOutData, c15_y, FALSE);
  return c15_mxArrayOutData;
}

static real_T c15_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_y, const char_T *c15_identifier)
{
  real_T c15_b_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_b_y = c15_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_y), &c15_thisId);
  sf_mex_destroy(&c15_y);
  return c15_b_y;
}

static real_T c15_b_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  real_T c15_y;
  real_T c15_d0;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_d0, 1, 0, 0U, 0, 0U, 0);
  c15_y = c15_d0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_y;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  real_T c15_b_y;
  SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c15_y = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_b_y = c15_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_y), &c15_thisId);
  sf_mex_destroy(&c15_y);
  *(real_T *)c15_outData = c15_b_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

const mxArray
  *sf_c15_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c15_nameCaptureInfo;
  c15_ResolvedFunctionInfo c15_info[1];
  c15_ResolvedFunctionInfo (*c15_b_info)[1];
  const mxArray *c15_m0 = NULL;
  int32_T c15_i0;
  c15_ResolvedFunctionInfo *c15_r0;
  c15_nameCaptureInfo = NULL;
  c15_nameCaptureInfo = NULL;
  c15_b_info = (c15_ResolvedFunctionInfo (*)[1])c15_info;
  (*c15_b_info)[0].context = "";
  (*c15_b_info)[0].name = "mtimes";
  (*c15_b_info)[0].dominantType = "double";
  (*c15_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c15_b_info)[0].fileTimeLo = 1289494492U;
  (*c15_b_info)[0].fileTimeHi = 0U;
  (*c15_b_info)[0].mFileTimeLo = 0U;
  (*c15_b_info)[0].mFileTimeHi = 0U;
  sf_mex_assign(&c15_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1), FALSE);
  for (c15_i0 = 0; c15_i0 < 1; c15_i0++) {
    c15_r0 = &c15_info[c15_i0];
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo", c15_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c15_r0->context)), "context", "nameCaptureInfo",
                    c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo", c15_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c15_r0->name)), "name", "nameCaptureInfo", c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo",
      c15_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c15_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo", c15_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c15_r0->resolved)), "resolved",
                    "nameCaptureInfo", c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo", &c15_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo", &c15_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo",
      &c15_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c15_i0);
    sf_mex_addfield(c15_m0, sf_mex_create("nameCaptureInfo",
      &c15_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c15_i0);
  }

  sf_mex_assign(&c15_nameCaptureInfo, c15_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c15_nameCaptureInfo);
  return c15_nameCaptureInfo;
}

static const mxArray *c15_b_sf_marshallOut(void *chartInstanceVoid, void
  *c15_inData)
{
  const mxArray *c15_mxArrayOutData = NULL;
  int32_T c15_u;
  const mxArray *c15_y = NULL;
  SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c15_mxArrayOutData = NULL;
  c15_u = *(int32_T *)c15_inData;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_create("y", &c15_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c15_mxArrayOutData, c15_y, FALSE);
  return c15_mxArrayOutData;
}

static int32_T c15_c_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  int32_T c15_y;
  int32_T c15_i1;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_i1, 1, 6, 0U, 0, 0U, 0);
  c15_y = c15_i1;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void c15_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c15_mxArrayInData, const char_T *c15_varName, void *c15_outData)
{
  const mxArray *c15_b_sfEvent;
  const char_T *c15_identifier;
  emlrtMsgIdentifier c15_thisId;
  int32_T c15_y;
  SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c15_b_sfEvent = sf_mex_dup(c15_mxArrayInData);
  c15_identifier = c15_varName;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_b_sfEvent),
    &c15_thisId);
  sf_mex_destroy(&c15_b_sfEvent);
  *(int32_T *)c15_outData = c15_y;
  sf_mex_destroy(&c15_mxArrayInData);
}

static uint8_T c15_d_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_b_is_active_c15_Vector_Control_SVPWM_encoderless_learn,
   const char_T *c15_identifier)
{
  uint8_T c15_y;
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = c15_identifier;
  c15_thisId.fParent = NULL;
  c15_y = c15_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c15_b_is_active_c15_Vector_Control_SVPWM_encoderless_learn), &c15_thisId);
  sf_mex_destroy(&c15_b_is_active_c15_Vector_Control_SVPWM_encoderless_learn);
  return c15_y;
}

static uint8_T c15_e_emlrt_marshallIn
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c15_u, const emlrtMsgIdentifier *c15_parentId)
{
  uint8_T c15_y;
  uint8_T c15_u0;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_u), &c15_u0, 1, 3, 0U, 0, 0U, 0);
  c15_y = c15_u0;
  sf_mex_destroy(&c15_u);
  return c15_y;
}

static void init_dsm_address_info
  (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c15_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1602844944U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2921905133U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(402026661U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(816183639U);
}

mxArray *sf_c15_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("yXHkJCDo1BSeRdkiqEBfgD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray
  *sf_get_sim_state_info_c15_Vector_Control_SVPWM_encoderless_learn(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c15_Vector_Control_SVPWM_encoderless_learn\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c15_Vector_Control_SVPWM_encoderless_learn_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
    chartInstance = (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
           15,
           1,
           1,
           4,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation
            (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"u");
          _SFD_SET_DATA_PROPS(1,2,0,1,"y");
          _SFD_SET_DATA_PROPS(2,1,1,0,"ubase");
          _SFD_SET_DATA_PROPS(3,1,1,0,"ybak");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,2,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,191);
        _SFD_CV_INIT_EML_IF(0,1,0,92,119,129,190);
        _SFD_CV_INIT_EML_IF(0,1,1,129,160,170,190);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)c15_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c15_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c15_u;
          real_T *c15_y;
          real_T *c15_ubase;
          real_T *c15_ybak;
          c15_ybak = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c15_ubase = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c15_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c15_u = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c15_u);
          _SFD_SET_DATA_VALUE_PTR(1U, c15_y);
          _SFD_SET_DATA_VALUE_PTR(2U, c15_ubase);
          _SFD_SET_DATA_VALUE_PTR(3U, c15_ybak);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
         chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "aSnPwcxGsVDc7NoRkTCEx";
}

static void sf_opaque_initialize_c15_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
  initialize_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c15_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  enable_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c15_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  disable_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c15_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  sf_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c15_Vector_Control_SVPWM_encoderless_learn();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
  (SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c15_Vector_Control_SVPWM_encoderless_learn();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn(S);
}

static void sf_opaque_set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn(S, st);
}

static void sf_opaque_terminate_c15_Vector_Control_SVPWM_encoderless_learn(void *
  chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c15_Vector_Control_SVPWM_encoderless_learn
      ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
       chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Vector_Control_SVPWM_encoderless_learn_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc15_Vector_Control_SVPWM_encoderless_learn
    ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c15_Vector_Control_SVPWM_encoderless_learn
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c15_Vector_Control_SVPWM_encoderless_learn
      ((SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c15_Vector_Control_SVPWM_encoderless_learn
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_Vector_Control_SVPWM_encoderless_learn_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      15);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,15,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,15,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,15,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,15,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,15);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2934569001U));
  ssSetChecksum1(S,(1887386087U));
  ssSetChecksum2(S,(2776161967U));
  ssSetChecksum3(S,(1322175007U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c15_Vector_Control_SVPWM_encoderless_learn(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c15_Vector_Control_SVPWM_encoderless_learn(SimStruct *S)
{
  SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    malloc(sizeof(SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc15_Vector_Control_SVPWM_encoderless_learnInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c15_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c15_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c15_Vector_Control_SVPWM_encoderless_learn(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c15_Vector_Control_SVPWM_encoderless_learn(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c15_Vector_Control_SVPWM_encoderless_learn(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c15_Vector_Control_SVPWM_encoderless_learn_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
