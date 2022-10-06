/* Include files */

#include "blascompat32.h"
#include "VectorCtrl_Asynchronous_debugSPWM_sfun.h"
#include "c2_VectorCtrl_Asynchronous_debugSPWM.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "VectorCtrl_Asynchronous_debugSPWM_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c2_debug_family_names[11] = { "StepAcc", "StepDec", "nargin",
  "nargout", "ValueInput", "AccTime", "DecTime", "ValueBase", "Tsample",
  "ValueCurrent", "ValueAfterRamp" };

/* Function Declarations */
static void initialize_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void initialize_params_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void enable_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void disable_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_st);
static void finalize_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void sf_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void initSimStructsc2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static real_T c2_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_ValueAfterRamp, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_c_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static uint8_T c2_d_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_b_is_active_c2_VectorCtrl_Asynchronous_debugSPWM, const char_T
   *c2_identifier);
static uint8_T c2_e_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_is_active_c2_VectorCtrl_Asynchronous_debugSPWM = 0U;
}

static void initialize_params_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static void enable_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  real_T c2_hoistedGlobal;
  real_T c2_u;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_b_hoistedGlobal;
  uint8_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  real_T *c2_ValueAfterRamp;
  c2_ValueAfterRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(2), FALSE);
  c2_hoistedGlobal = *c2_ValueAfterRamp;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal =
    chartInstance->c2_is_active_c2_VectorCtrl_Asynchronous_debugSPWM;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  sf_mex_assign(&c2_st, c2_y, FALSE);
  return c2_st;
}

static void set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T *c2_ValueAfterRamp;
  c2_ValueAfterRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c2_doneDoubleBufferReInit = TRUE;
  c2_u = sf_mex_dup(c2_st);
  *c2_ValueAfterRamp = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "ValueAfterRamp");
  chartInstance->c2_is_active_c2_VectorCtrl_Asynchronous_debugSPWM =
    c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 1)),
    "is_active_c2_VectorCtrl_Asynchronous_debugSPWM");
  sf_mex_destroy(&c2_u);
  c2_update_debugger_state_c2_VectorCtrl_Asynchronous_debugSPWM(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static void sf_c2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  real_T c2_hoistedGlobal;
  real_T c2_b_hoistedGlobal;
  real_T c2_c_hoistedGlobal;
  real_T c2_d_hoistedGlobal;
  real_T c2_e_hoistedGlobal;
  real_T c2_f_hoistedGlobal;
  real_T c2_ValueInput;
  real_T c2_AccTime;
  real_T c2_DecTime;
  real_T c2_ValueBase;
  real_T c2_Tsample;
  real_T c2_ValueCurrent;
  uint32_T c2_debug_family_var_map[11];
  real_T c2_StepAcc;
  real_T c2_StepDec;
  real_T c2_nargin = 6.0;
  real_T c2_nargout = 1.0;
  real_T c2_ValueAfterRamp;
  real_T c2_a;
  real_T c2_b;
  real_T c2_y;
  real_T c2_A;
  real_T c2_B;
  real_T c2_x;
  real_T c2_b_y;
  real_T c2_b_x;
  real_T c2_c_y;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_d_y;
  real_T c2_b_A;
  real_T c2_b_B;
  real_T c2_c_x;
  real_T c2_e_y;
  real_T c2_d_x;
  real_T c2_f_y;
  real_T *c2_b_ValueCurrent;
  real_T *c2_b_Tsample;
  real_T *c2_b_ValueBase;
  real_T *c2_b_DecTime;
  real_T *c2_b_AccTime;
  real_T *c2_b_ValueInput;
  real_T *c2_b_ValueAfterRamp;
  c2_b_ValueCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_b_Tsample = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_b_ValueBase = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_b_DecTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_b_AccTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_b_ValueAfterRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_b_ValueInput = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c2_b_ValueInput, 0U);
  _SFD_DATA_RANGE_CHECK(*c2_b_ValueAfterRamp, 1U);
  _SFD_DATA_RANGE_CHECK(*c2_b_AccTime, 2U);
  _SFD_DATA_RANGE_CHECK(*c2_b_DecTime, 3U);
  _SFD_DATA_RANGE_CHECK(*c2_b_ValueBase, 4U);
  _SFD_DATA_RANGE_CHECK(*c2_b_Tsample, 5U);
  _SFD_DATA_RANGE_CHECK(*c2_b_ValueCurrent, 6U);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  c2_hoistedGlobal = *c2_b_ValueInput;
  c2_b_hoistedGlobal = *c2_b_AccTime;
  c2_c_hoistedGlobal = *c2_b_DecTime;
  c2_d_hoistedGlobal = *c2_b_ValueBase;
  c2_e_hoistedGlobal = *c2_b_Tsample;
  c2_f_hoistedGlobal = *c2_b_ValueCurrent;
  c2_ValueInput = c2_hoistedGlobal;
  c2_AccTime = c2_b_hoistedGlobal;
  c2_DecTime = c2_c_hoistedGlobal;
  c2_ValueBase = c2_d_hoistedGlobal;
  c2_Tsample = c2_e_hoistedGlobal;
  c2_ValueCurrent = c2_f_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 11U, 11U, c2_debug_family_names,
    c2_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c2_StepAcc, 0U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c2_StepDec, 1U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c2_nargin, 2U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c2_nargout, 3U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c2_ValueInput, 4U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_AccTime, 5U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_DecTime, 6U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_ValueBase, 7U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_Tsample, 8U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_ValueCurrent, 9U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c2_ValueAfterRamp, 10U,
    c2_sf_marshallOut, c2_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 5);
  c2_a = c2_ValueBase;
  c2_b = c2_Tsample;
  c2_y = c2_a * c2_b;
  c2_A = c2_y;
  c2_B = c2_AccTime;
  c2_x = c2_A;
  c2_b_y = c2_B;
  c2_b_x = c2_x;
  c2_c_y = c2_b_y;
  c2_StepAcc = c2_b_x / c2_c_y;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 6);
  c2_b_a = c2_ValueBase;
  c2_b_b = c2_Tsample;
  c2_d_y = c2_b_a * c2_b_b;
  c2_b_A = c2_d_y;
  c2_b_B = c2_DecTime;
  c2_c_x = c2_b_A;
  c2_e_y = c2_b_B;
  c2_d_x = c2_c_x;
  c2_f_y = c2_e_y;
  c2_StepDec = c2_d_x / c2_f_y;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 7);
  if (CV_EML_IF(0, 1, 0, c2_ValueInput > c2_ValueCurrent)) {
    _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 8);
    if (CV_EML_IF(0, 1, 1, c2_ValueInput - c2_ValueCurrent < c2_StepAcc)) {
      _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 9);
      c2_ValueAfterRamp = c2_ValueInput;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 11);
      c2_ValueAfterRamp = c2_ValueCurrent + c2_StepAcc;
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 13);
    if (CV_EML_IF(0, 1, 2, c2_ValueInput < c2_ValueCurrent)) {
      _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 14);
      if (CV_EML_IF(0, 1, 3, c2_ValueCurrent - c2_ValueInput < c2_StepDec)) {
        _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 15);
        c2_ValueAfterRamp = c2_ValueInput;
      } else {
        _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 17);
        c2_ValueAfterRamp = c2_ValueCurrent - c2_StepDec;
      }
    } else {
      _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 20);
      c2_ValueAfterRamp = c2_ValueInput;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, -20);
  sf_debug_symbol_scope_pop();
  *c2_b_ValueAfterRamp = c2_ValueAfterRamp;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  sf_debug_check_for_state_inconsistency
    (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc2_VectorCtrl_Asynchronous_debugSPWM
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  real_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(real_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, FALSE);
  return c2_mxArrayOutData;
}

static real_T c2_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_ValueAfterRamp, const char_T *c2_identifier)
{
  real_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_ValueAfterRamp),
    &c2_thisId);
  sf_mex_destroy(&c2_ValueAfterRamp);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d0;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_ValueAfterRamp;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c2_ValueAfterRamp = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_ValueAfterRamp),
    &c2_thisId);
  sf_mex_destroy(&c2_ValueAfterRamp);
  *(real_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

const mxArray
  *sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo;
  c2_ResolvedFunctionInfo c2_info[4];
  c2_ResolvedFunctionInfo (*c2_b_info)[4];
  const mxArray *c2_m0 = NULL;
  int32_T c2_i0;
  c2_ResolvedFunctionInfo *c2_r0;
  c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  c2_b_info = (c2_ResolvedFunctionInfo (*)[4])c2_info;
  (*c2_b_info)[0].context = "";
  (*c2_b_info)[0].name = "mtimes";
  (*c2_b_info)[0].dominantType = "double";
  (*c2_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c2_b_info)[0].fileTimeLo = 1289494492U;
  (*c2_b_info)[0].fileTimeHi = 0U;
  (*c2_b_info)[0].mFileTimeLo = 0U;
  (*c2_b_info)[0].mFileTimeHi = 0U;
  (*c2_b_info)[1].context = "";
  (*c2_b_info)[1].name = "mrdivide";
  (*c2_b_info)[1].dominantType = "double";
  (*c2_b_info)[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c2_b_info)[1].fileTimeLo = 1325098938U;
  (*c2_b_info)[1].fileTimeHi = 0U;
  (*c2_b_info)[1].mFileTimeLo = 1319708366U;
  (*c2_b_info)[1].mFileTimeHi = 0U;
  (*c2_b_info)[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c2_b_info)[2].name = "rdivide";
  (*c2_b_info)[2].dominantType = "double";
  (*c2_b_info)[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c2_b_info)[2].fileTimeLo = 1286797244U;
  (*c2_b_info)[2].fileTimeHi = 0U;
  (*c2_b_info)[2].mFileTimeLo = 0U;
  (*c2_b_info)[2].mFileTimeHi = 0U;
  (*c2_b_info)[3].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c2_b_info)[3].name = "eml_div";
  (*c2_b_info)[3].dominantType = "double";
  (*c2_b_info)[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c2_b_info)[3].fileTimeLo = 1313326210U;
  (*c2_b_info)[3].fileTimeHi = 0U;
  (*c2_b_info)[3].mFileTimeLo = 0U;
  (*c2_b_info)[3].mFileTimeHi = 0U;
  sf_mex_assign(&c2_m0, sf_mex_createstruct("nameCaptureInfo", 1, 4), FALSE);
  for (c2_i0 = 0; c2_i0 < 4; c2_i0++) {
    c2_r0 = &c2_info[c2_i0];
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c2_r0->context)), "context", "nameCaptureInfo",
                    c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c2_r0->name)), "name", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c2_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c2_r0->resolved)), "resolved", "nameCaptureInfo",
                    c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c2_i0);
  }

  sf_mex_assign(&c2_nameCaptureInfo, c2_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  int32_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(int32_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, FALSE);
  return c2_mxArrayOutData;
}

static int32_T c2_c_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_i1;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_i1, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i1;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_y;
  SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static uint8_T c2_d_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_b_is_active_c2_VectorCtrl_Asynchronous_debugSPWM, const char_T
   *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_VectorCtrl_Asynchronous_debugSPWM), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_VectorCtrl_Asynchronous_debugSPWM);
  return c2_y;
}

static uint8_T c2_e_emlrt_marshallIn
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info
  (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1195440275U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(496178383U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(877963192U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2278172787U);
}

mxArray *sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("pk5qKJWGeDl2MEZdV74jYC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
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

static const mxArray *sf_get_sim_state_info_c2_VectorCtrl_Asynchronous_debugSPWM
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"ValueAfterRamp\",},{M[8],M[0],T\"is_active_c2_VectorCtrl_Asynchronous_debugSPWM\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
    chartInstance = (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
           2,
           1,
           1,
           7,
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
            (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"ValueInput");
          _SFD_SET_DATA_PROPS(1,2,0,1,"ValueAfterRamp");
          _SFD_SET_DATA_PROPS(2,1,1,0,"AccTime");
          _SFD_SET_DATA_PROPS(3,1,1,0,"DecTime");
          _SFD_SET_DATA_PROPS(4,1,1,0,"ValueBase");
          _SFD_SET_DATA_PROPS(5,1,1,0,"Tsample");
          _SFD_SET_DATA_PROPS(6,1,1,0,"ValueCurrent");
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
        _SFD_CV_INIT_EML(0,1,1,4,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,656);
        _SFD_CV_INIT_EML_IF(0,1,0,221,249,399,623);
        _SFD_CV_INIT_EML_IF(0,1,1,255,293,336,398);
        _SFD_CV_INIT_EML_IF(0,1,2,399,431,581,623);
        _SFD_CV_INIT_EML_IF(0,1,3,437,475,518,580);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)c2_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c2_ValueInput;
          real_T *c2_ValueAfterRamp;
          real_T *c2_AccTime;
          real_T *c2_DecTime;
          real_T *c2_ValueBase;
          real_T *c2_Tsample;
          real_T *c2_ValueCurrent;
          c2_ValueCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c2_Tsample = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c2_ValueBase = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c2_DecTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c2_AccTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c2_ValueAfterRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c2_ValueInput = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_ValueInput);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_ValueAfterRamp);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_AccTime);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_DecTime);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_ValueBase);
          _SFD_SET_DATA_VALUE_PTR(5U, c2_Tsample);
          _SFD_SET_DATA_VALUE_PTR(6U, c2_ValueCurrent);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
         chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "vjr0QTb0T5xOoNFxvQncrC";
}

static void sf_opaque_initialize_c2_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
  initialize_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  enable_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  disable_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  sf_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c2_VectorCtrl_Asynchronous_debugSPWM();/* state var info */
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

extern void sf_internal_set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
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
    sf_get_sim_state_info_c2_VectorCtrl_Asynchronous_debugSPWM();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM(S);
}

static void sf_opaque_set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM(S, st);
}

static void sf_opaque_terminate_c2_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_VectorCtrl_Asynchronous_debugSPWM
      ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_VectorCtrl_Asynchronous_debugSPWM_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_VectorCtrl_Asynchronous_debugSPWM
    ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_VectorCtrl_Asynchronous_debugSPWM(SimStruct *
  S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_VectorCtrl_Asynchronous_debugSPWM
      ((SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)(((ChartInfoStruct
          *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_VectorCtrl_Asynchronous_debugSPWM(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_VectorCtrl_Asynchronous_debugSPWM_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,2,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,6);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3898847992U));
  ssSetChecksum1(S,(725357185U));
  ssSetChecksum2(S,(1736347518U));
  ssSetChecksum3(S,(431083798U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_VectorCtrl_Asynchronous_debugSPWM(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_VectorCtrl_Asynchronous_debugSPWM(SimStruct *S)
{
  SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)malloc
    (sizeof(SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc2_VectorCtrl_Asynchronous_debugSPWMInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c2_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_VectorCtrl_Asynchronous_debugSPWM;
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

void c2_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_VectorCtrl_Asynchronous_debugSPWM(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_VectorCtrl_Asynchronous_debugSPWM(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_VectorCtrl_Asynchronous_debugSPWM(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
