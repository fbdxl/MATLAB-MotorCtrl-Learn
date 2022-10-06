/* Include files */

#include "blascompat32.h"
#include "PWM2010a_analysis_sfun.h"
#include "c11_PWM2010a_analysis.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "PWM2010a_analysis_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c11_debug_family_names[8] = { "sin30", "cos30", "nargin",
  "nargout", "ValphaL", "VbetaL", "Valpha", "Vbeta" };

/* Function Declarations */
static void initialize_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance);
static void initialize_params_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance);
static void enable_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance);
static void disable_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct *
  chartInstance);
static void c11_update_debugger_state_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance);
static void set_sim_state_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance, const mxArray *c11_st);
static void finalize_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance);
static void sf_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance);
static void initSimStructsc11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber);
static const mxArray *c11_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static real_T c11_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_Vbeta, const char_T *c11_identifier);
static real_T c11_b_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_b_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static int32_T c11_c_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static uint8_T c11_d_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_b_is_active_c11_PWM2010a_analysis, const
  char_T *c11_identifier);
static uint8_T c11_e_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void init_dsm_address_info(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance)
{
  chartInstance->c11_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c11_is_active_c11_PWM2010a_analysis = 0U;
}

static void initialize_params_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance)
{
}

static void enable_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct *
  chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c11_update_debugger_state_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance)
{
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  real_T c11_hoistedGlobal;
  real_T c11_u;
  const mxArray *c11_b_y = NULL;
  real_T c11_b_hoistedGlobal;
  real_T c11_b_u;
  const mxArray *c11_c_y = NULL;
  uint8_T c11_c_hoistedGlobal;
  uint8_T c11_c_u;
  const mxArray *c11_d_y = NULL;
  real_T *c11_Valpha;
  real_T *c11_Vbeta;
  c11_Vbeta = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Valpha = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellarray(3), FALSE);
  c11_hoistedGlobal = *c11_Valpha;
  c11_u = c11_hoistedGlobal;
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_b_hoistedGlobal = *c11_Vbeta;
  c11_b_u = c11_b_hoistedGlobal;
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", &c11_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_c_hoistedGlobal = chartInstance->c11_is_active_c11_PWM2010a_analysis;
  c11_c_u = c11_c_hoistedGlobal;
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", &c11_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c11_y, 2, c11_d_y);
  sf_mex_assign(&c11_st, c11_y, FALSE);
  return c11_st;
}

static void set_sim_state_c11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  real_T *c11_Valpha;
  real_T *c11_Vbeta;
  c11_Vbeta = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Valpha = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c11_doneDoubleBufferReInit = TRUE;
  c11_u = sf_mex_dup(c11_st);
  *c11_Valpha = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u, 0)), "Valpha");
  *c11_Vbeta = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u, 1)), "Vbeta");
  chartInstance->c11_is_active_c11_PWM2010a_analysis = c11_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 2)),
     "is_active_c11_PWM2010a_analysis");
  sf_mex_destroy(&c11_u);
  c11_update_debugger_state_c11_PWM2010a_analysis(chartInstance);
  sf_mex_destroy(&c11_st);
}

static void finalize_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance)
{
}

static void sf_c11_PWM2010a_analysis(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance)
{
  real_T c11_hoistedGlobal;
  real_T c11_b_hoistedGlobal;
  real_T c11_ValphaL;
  real_T c11_VbetaL;
  uint32_T c11_debug_family_var_map[8];
  real_T c11_sin30;
  real_T c11_cos30;
  real_T c11_nargin = 2.0;
  real_T c11_nargout = 2.0;
  real_T c11_Valpha;
  real_T c11_Vbeta;
  real_T c11_a;
  real_T c11_y;
  real_T c11_b_a;
  real_T c11_b_y;
  real_T c11_A;
  real_T c11_x;
  real_T c11_b_x;
  real_T c11_c_a;
  real_T c11_c_y;
  real_T c11_d_a;
  real_T c11_d_y;
  real_T c11_b_A;
  real_T c11_c_x;
  real_T c11_d_x;
  real_T *c11_b_Vbeta;
  real_T *c11_b_Valpha;
  real_T *c11_b_VbetaL;
  real_T *c11_b_ValphaL;
  c11_b_Vbeta = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_b_VbetaL = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c11_b_Valpha = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_b_ValphaL = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c11_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c11_b_ValphaL, 0U);
  _SFD_DATA_RANGE_CHECK(*c11_b_Valpha, 1U);
  _SFD_DATA_RANGE_CHECK(*c11_b_VbetaL, 2U);
  _SFD_DATA_RANGE_CHECK(*c11_b_Vbeta, 3U);
  chartInstance->c11_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c11_sfEvent);
  c11_hoistedGlobal = *c11_b_ValphaL;
  c11_b_hoistedGlobal = *c11_b_VbetaL;
  c11_ValphaL = c11_hoistedGlobal;
  c11_VbetaL = c11_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c11_debug_family_names,
    c11_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c11_sin30, 0U, c11_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c11_cos30, 1U, c11_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c11_nargin, 2U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c11_nargout, 3U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c11_ValphaL, 4U, c11_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c11_VbetaL, 5U, c11_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c11_Valpha, 6U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c11_Vbeta, 7U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 3);
  c11_sin30 = 0.49999999999999994;
  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 4);
  c11_cos30 = 0.86602540378443871;
  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 5);
  c11_a = c11_ValphaL;
  c11_y = c11_a * 0.86602540378443871;
  c11_b_a = c11_VbetaL;
  c11_b_y = c11_b_a * 0.49999999999999994;
  c11_A = c11_y + c11_b_y;
  c11_x = c11_A;
  c11_b_x = c11_x;
  c11_Valpha = c11_b_x / 1.7320508075688772;
  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 6);
  c11_c_a = -c11_ValphaL;
  c11_c_y = c11_c_a * 0.49999999999999994;
  c11_d_a = c11_VbetaL;
  c11_d_y = c11_d_a * 0.86602540378443871;
  c11_b_A = c11_c_y + c11_d_y;
  c11_c_x = c11_b_A;
  c11_d_x = c11_c_x;
  c11_Vbeta = c11_d_x / 1.7320508075688772;
  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, -6);
  sf_debug_symbol_scope_pop();
  *c11_b_Valpha = c11_Valpha;
  *c11_b_Vbeta = c11_Vbeta;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c11_sfEvent);
  sf_debug_check_for_state_inconsistency(_PWM2010a_analysisMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc11_PWM2010a_analysis
  (SFc11_PWM2010a_analysisInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber)
{
}

static const mxArray *c11_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  real_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_PWM2010a_analysisInstanceStruct *chartInstance;
  chartInstance = (SFc11_PWM2010a_analysisInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(real_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, FALSE);
  return c11_mxArrayOutData;
}

static real_T c11_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_Vbeta, const char_T *c11_identifier)
{
  real_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_Vbeta),
    &c11_thisId);
  sf_mex_destroy(&c11_Vbeta);
  return c11_y;
}

static real_T c11_b_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_y;
  real_T c11_d0;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d0, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d0;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_Vbeta;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  SFc11_PWM2010a_analysisInstanceStruct *chartInstance;
  chartInstance = (SFc11_PWM2010a_analysisInstanceStruct *)chartInstanceVoid;
  c11_Vbeta = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_Vbeta),
    &c11_thisId);
  sf_mex_destroy(&c11_Vbeta);
  *(real_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

const mxArray *sf_c11_PWM2010a_analysis_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo;
  c11_ResolvedFunctionInfo c11_info[11];
  c11_ResolvedFunctionInfo (*c11_b_info)[11];
  const mxArray *c11_m0 = NULL;
  int32_T c11_i0;
  c11_ResolvedFunctionInfo *c11_r0;
  c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  c11_b_info = (c11_ResolvedFunctionInfo (*)[11])c11_info;
  (*c11_b_info)[0].context = "";
  (*c11_b_info)[0].name = "mrdivide";
  (*c11_b_info)[0].dominantType = "double";
  (*c11_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c11_b_info)[0].fileTimeLo = 1325098938U;
  (*c11_b_info)[0].fileTimeHi = 0U;
  (*c11_b_info)[0].mFileTimeLo = 1319708366U;
  (*c11_b_info)[0].mFileTimeHi = 0U;
  (*c11_b_info)[1].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c11_b_info)[1].name = "rdivide";
  (*c11_b_info)[1].dominantType = "double";
  (*c11_b_info)[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c11_b_info)[1].fileTimeLo = 1286797244U;
  (*c11_b_info)[1].fileTimeHi = 0U;
  (*c11_b_info)[1].mFileTimeLo = 0U;
  (*c11_b_info)[1].mFileTimeHi = 0U;
  (*c11_b_info)[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c11_b_info)[2].name = "eml_div";
  (*c11_b_info)[2].dominantType = "double";
  (*c11_b_info)[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c11_b_info)[2].fileTimeLo = 1313326210U;
  (*c11_b_info)[2].fileTimeHi = 0U;
  (*c11_b_info)[2].mFileTimeLo = 0U;
  (*c11_b_info)[2].mFileTimeHi = 0U;
  (*c11_b_info)[3].context = "";
  (*c11_b_info)[3].name = "sin";
  (*c11_b_info)[3].dominantType = "double";
  (*c11_b_info)[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sin.m";
  (*c11_b_info)[3].fileTimeLo = 1286797150U;
  (*c11_b_info)[3].fileTimeHi = 0U;
  (*c11_b_info)[3].mFileTimeLo = 0U;
  (*c11_b_info)[3].mFileTimeHi = 0U;
  (*c11_b_info)[4].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sin.m";
  (*c11_b_info)[4].name = "eml_scalar_sin";
  (*c11_b_info)[4].dominantType = "double";
  (*c11_b_info)[4].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  (*c11_b_info)[4].fileTimeLo = 1286797136U;
  (*c11_b_info)[4].fileTimeHi = 0U;
  (*c11_b_info)[4].mFileTimeLo = 0U;
  (*c11_b_info)[4].mFileTimeHi = 0U;
  (*c11_b_info)[5].context = "";
  (*c11_b_info)[5].name = "cos";
  (*c11_b_info)[5].dominantType = "double";
  (*c11_b_info)[5].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/cos.m";
  (*c11_b_info)[5].fileTimeLo = 1286797106U;
  (*c11_b_info)[5].fileTimeHi = 0U;
  (*c11_b_info)[5].mFileTimeLo = 0U;
  (*c11_b_info)[5].mFileTimeHi = 0U;
  (*c11_b_info)[6].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/cos.m";
  (*c11_b_info)[6].name = "eml_scalar_cos";
  (*c11_b_info)[6].dominantType = "double";
  (*c11_b_info)[6].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  (*c11_b_info)[6].fileTimeLo = 1286797122U;
  (*c11_b_info)[6].fileTimeHi = 0U;
  (*c11_b_info)[6].mFileTimeLo = 0U;
  (*c11_b_info)[6].mFileTimeHi = 0U;
  (*c11_b_info)[7].context = "";
  (*c11_b_info)[7].name = "mtimes";
  (*c11_b_info)[7].dominantType = "double";
  (*c11_b_info)[7].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c11_b_info)[7].fileTimeLo = 1289494492U;
  (*c11_b_info)[7].fileTimeHi = 0U;
  (*c11_b_info)[7].mFileTimeLo = 0U;
  (*c11_b_info)[7].mFileTimeHi = 0U;
  (*c11_b_info)[8].context = "";
  (*c11_b_info)[8].name = "sqrt";
  (*c11_b_info)[8].dominantType = "double";
  (*c11_b_info)[8].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c11_b_info)[8].fileTimeLo = 1286797152U;
  (*c11_b_info)[8].fileTimeHi = 0U;
  (*c11_b_info)[8].mFileTimeLo = 0U;
  (*c11_b_info)[8].mFileTimeHi = 0U;
  (*c11_b_info)[9].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c11_b_info)[9].name = "eml_error";
  (*c11_b_info)[9].dominantType = "char";
  (*c11_b_info)[9].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_error.m";
  (*c11_b_info)[9].fileTimeLo = 1305296400U;
  (*c11_b_info)[9].fileTimeHi = 0U;
  (*c11_b_info)[9].mFileTimeLo = 0U;
  (*c11_b_info)[9].mFileTimeHi = 0U;
  (*c11_b_info)[10].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c11_b_info)[10].name = "eml_scalar_sqrt";
  (*c11_b_info)[10].dominantType = "double";
  (*c11_b_info)[10].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  (*c11_b_info)[10].fileTimeLo = 1286797138U;
  (*c11_b_info)[10].fileTimeHi = 0U;
  (*c11_b_info)[10].mFileTimeLo = 0U;
  (*c11_b_info)[10].mFileTimeHi = 0U;
  sf_mex_assign(&c11_m0, sf_mex_createstruct("nameCaptureInfo", 1, 11), FALSE);
  for (c11_i0 = 0; c11_i0 < 11; c11_i0++) {
    c11_r0 = &c11_info[c11_i0];
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo", c11_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c11_r0->context)), "context", "nameCaptureInfo",
                    c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo", c11_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c11_r0->name)), "name", "nameCaptureInfo", c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo",
      c11_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c11_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo", c11_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c11_r0->resolved)), "resolved",
                    "nameCaptureInfo", c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo", &c11_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo", &c11_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo",
      &c11_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c11_i0);
    sf_mex_addfield(c11_m0, sf_mex_create("nameCaptureInfo",
      &c11_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c11_i0);
  }

  sf_mex_assign(&c11_nameCaptureInfo, c11_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c11_nameCaptureInfo);
  return c11_nameCaptureInfo;
}

static const mxArray *c11_b_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int32_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_PWM2010a_analysisInstanceStruct *chartInstance;
  chartInstance = (SFc11_PWM2010a_analysisInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(int32_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, FALSE);
  return c11_mxArrayOutData;
}

static int32_T c11_c_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  int32_T c11_y;
  int32_T c11_i1;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_i1, 1, 6, 0U, 0, 0U, 0);
  c11_y = c11_i1;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_sfEvent;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  int32_T c11_y;
  SFc11_PWM2010a_analysisInstanceStruct *chartInstance;
  chartInstance = (SFc11_PWM2010a_analysisInstanceStruct *)chartInstanceVoid;
  c11_b_sfEvent = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_sfEvent),
    &c11_thisId);
  sf_mex_destroy(&c11_b_sfEvent);
  *(int32_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static uint8_T c11_d_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_b_is_active_c11_PWM2010a_analysis, const
  char_T *c11_identifier)
{
  uint8_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c11_b_is_active_c11_PWM2010a_analysis), &c11_thisId);
  sf_mex_destroy(&c11_b_is_active_c11_PWM2010a_analysis);
  return c11_y;
}

static uint8_T c11_e_emlrt_marshallIn(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  uint8_T c11_y;
  uint8_T c11_u0;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_u0, 1, 3, 0U, 0, 0U, 0);
  c11_y = c11_u0;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void init_dsm_address_info(SFc11_PWM2010a_analysisInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c11_PWM2010a_analysis_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2295683815U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(818380685U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4046248499U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(847936470U);
}

mxArray *sf_c11_PWM2010a_analysis_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("5caw1Fw3SjjvOE7Wv6FvnF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c11_PWM2010a_analysis(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"Valpha\",},{M[1],M[7],T\"Vbeta\",},{M[8],M[0],T\"is_active_c11_PWM2010a_analysis\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_PWM2010a_analysis_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc11_PWM2010a_analysisInstanceStruct *chartInstance;
    chartInstance = (SFc11_PWM2010a_analysisInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_PWM2010a_analysisMachineNumber_,
           11,
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
          init_script_number_translation(_PWM2010a_analysisMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_PWM2010a_analysisMachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_PWM2010a_analysisMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"ValphaL");
          _SFD_SET_DATA_PROPS(1,2,0,1,"Valpha");
          _SFD_SET_DATA_PROPS(2,1,1,0,"VbetaL");
          _SFD_SET_DATA_PROPS(3,2,0,1,"Vbeta");
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
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,216);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)c11_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)c11_sf_marshallIn);

        {
          real_T *c11_ValphaL;
          real_T *c11_Valpha;
          real_T *c11_VbetaL;
          real_T *c11_Vbeta;
          c11_Vbeta = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c11_VbetaL = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c11_Valpha = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c11_ValphaL = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c11_ValphaL);
          _SFD_SET_DATA_VALUE_PTR(1U, c11_Valpha);
          _SFD_SET_DATA_VALUE_PTR(2U, c11_VbetaL);
          _SFD_SET_DATA_VALUE_PTR(3U, c11_Vbeta);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_PWM2010a_analysisMachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "3KsbaHuyNVWlF5owCFVahF";
}

static void sf_opaque_initialize_c11_PWM2010a_analysis(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar);
  initialize_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_PWM2010a_analysis(void *chartInstanceVar)
{
  enable_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c11_PWM2010a_analysis(void *chartInstanceVar)
{
  disable_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c11_PWM2010a_analysis(void *chartInstanceVar)
{
  sf_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c11_PWM2010a_analysis(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c11_PWM2010a_analysis
    ((SFc11_PWM2010a_analysisInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c11_PWM2010a_analysis();/* state var info */
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

extern void sf_internal_set_sim_state_c11_PWM2010a_analysis(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c11_PWM2010a_analysis();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c11_PWM2010a_analysis(SimStruct* S)
{
  return sf_internal_get_sim_state_c11_PWM2010a_analysis(S);
}

static void sf_opaque_set_sim_state_c11_PWM2010a_analysis(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c11_PWM2010a_analysis(S, st);
}

static void sf_opaque_terminate_c11_PWM2010a_analysis(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_PWM2010a_analysisInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_PWM2010a_analysis_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc11_PWM2010a_analysis((SFc11_PWM2010a_analysisInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_PWM2010a_analysis(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_PWM2010a_analysis
      ((SFc11_PWM2010a_analysisInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c11_PWM2010a_analysis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_PWM2010a_analysis_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      11);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,11,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,11,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,11,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,11,2);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,11);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2610637157U));
  ssSetChecksum1(S,(3338145919U));
  ssSetChecksum2(S,(1926839630U));
  ssSetChecksum3(S,(1110428737U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c11_PWM2010a_analysis(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c11_PWM2010a_analysis(SimStruct *S)
{
  SFc11_PWM2010a_analysisInstanceStruct *chartInstance;
  chartInstance = (SFc11_PWM2010a_analysisInstanceStruct *)malloc(sizeof
    (SFc11_PWM2010a_analysisInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc11_PWM2010a_analysisInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_PWM2010a_analysis;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_PWM2010a_analysis;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c11_PWM2010a_analysis;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c11_PWM2010a_analysis;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_PWM2010a_analysis;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_PWM2010a_analysis;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_PWM2010a_analysis;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_PWM2010a_analysis;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_PWM2010a_analysis;
  chartInstance->chartInfo.mdlStart = mdlStart_c11_PWM2010a_analysis;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_PWM2010a_analysis;
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

void c11_PWM2010a_analysis_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c11_PWM2010a_analysis(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_PWM2010a_analysis(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_PWM2010a_analysis(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_PWM2010a_analysis_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
