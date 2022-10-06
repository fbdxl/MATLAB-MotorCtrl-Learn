/* Include files */

#include "blascompat32.h"
#include "VectorCtrl_Asynchronous_debugSPWM_sfun.h"
#include "c19_VectorCtrl_Asynchronous_debugSPWM.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "VectorCtrl_Asynchronous_debugSPWM_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c19_debug_family_names[7] = { "nargin", "nargout", "Valpha",
  "Vbeta", "Va", "Vb", "Vc" };

/* Function Declarations */
static void initialize_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void initialize_params_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void enable_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void disable_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void c19_update_debugger_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_st);
static void finalize_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void sf_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void initSimStructsc19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c19_machineNumber, uint32_T
  c19_chartNumber);
static const mxArray *c19_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData);
static real_T c19_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_Vc, const char_T *c19_identifier);
static real_T c19_b_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void c19_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData);
static const mxArray *c19_b_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData);
static int32_T c19_c_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void c19_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData);
static uint8_T c19_d_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_b_is_active_c19_VectorCtrl_Asynchronous_debugSPWM, const char_T *
   c19_identifier);
static uint8_T c19_e_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void init_dsm_address_info
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  chartInstance->c19_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c19_is_active_c19_VectorCtrl_Asynchronous_debugSPWM = 0U;
}

static void initialize_params_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static void enable_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c19_update_debugger_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  const mxArray *c19_st;
  const mxArray *c19_y = NULL;
  real_T c19_hoistedGlobal;
  real_T c19_u;
  const mxArray *c19_b_y = NULL;
  real_T c19_b_hoistedGlobal;
  real_T c19_b_u;
  const mxArray *c19_c_y = NULL;
  real_T c19_c_hoistedGlobal;
  real_T c19_c_u;
  const mxArray *c19_d_y = NULL;
  uint8_T c19_d_hoistedGlobal;
  uint8_T c19_d_u;
  const mxArray *c19_e_y = NULL;
  real_T *c19_Va;
  real_T *c19_Vb;
  real_T *c19_Vc;
  c19_Vc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_Vb = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_Va = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c19_st = NULL;
  c19_st = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_createcellarray(4), FALSE);
  c19_hoistedGlobal = *c19_Va;
  c19_u = c19_hoistedGlobal;
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", &c19_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 0, c19_b_y);
  c19_b_hoistedGlobal = *c19_Vb;
  c19_b_u = c19_b_hoistedGlobal;
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y", &c19_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 1, c19_c_y);
  c19_c_hoistedGlobal = *c19_Vc;
  c19_c_u = c19_c_hoistedGlobal;
  c19_d_y = NULL;
  sf_mex_assign(&c19_d_y, sf_mex_create("y", &c19_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 2, c19_d_y);
  c19_d_hoistedGlobal =
    chartInstance->c19_is_active_c19_VectorCtrl_Asynchronous_debugSPWM;
  c19_d_u = c19_d_hoistedGlobal;
  c19_e_y = NULL;
  sf_mex_assign(&c19_e_y, sf_mex_create("y", &c19_d_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 3, c19_e_y);
  sf_mex_assign(&c19_st, c19_y, FALSE);
  return c19_st;
}

static void set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_st)
{
  const mxArray *c19_u;
  real_T *c19_Va;
  real_T *c19_Vb;
  real_T *c19_Vc;
  c19_Vc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_Vb = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_Va = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c19_doneDoubleBufferReInit = TRUE;
  c19_u = sf_mex_dup(c19_st);
  *c19_Va = c19_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c19_u,
    0)), "Va");
  *c19_Vb = c19_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c19_u,
    1)), "Vb");
  *c19_Vc = c19_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c19_u,
    2)), "Vc");
  chartInstance->c19_is_active_c19_VectorCtrl_Asynchronous_debugSPWM =
    c19_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 3)),
    "is_active_c19_VectorCtrl_Asynchronous_debugSPWM");
  sf_mex_destroy(&c19_u);
  c19_update_debugger_state_c19_VectorCtrl_Asynchronous_debugSPWM(chartInstance);
  sf_mex_destroy(&c19_st);
}

static void finalize_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static void sf_c19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
  real_T c19_hoistedGlobal;
  real_T c19_b_hoistedGlobal;
  real_T c19_Valpha;
  real_T c19_Vbeta;
  uint32_T c19_debug_family_var_map[7];
  real_T c19_nargin = 2.0;
  real_T c19_nargout = 3.0;
  real_T c19_Va;
  real_T c19_Vb;
  real_T c19_Vc;
  real_T c19_b;
  real_T c19_A;
  real_T c19_x;
  real_T c19_b_x;
  real_T c19_y;
  real_T c19_b_A;
  real_T c19_c_x;
  real_T c19_d_x;
  real_T c19_b_y;
  real_T c19_c_A;
  real_T c19_e_x;
  real_T c19_f_x;
  real_T c19_c_y;
  real_T c19_d_A;
  real_T c19_g_x;
  real_T c19_h_x;
  real_T c19_d_y;
  real_T *c19_b_Vc;
  real_T *c19_b_Vb;
  real_T *c19_b_Va;
  real_T *c19_b_Vbeta;
  real_T *c19_b_Valpha;
  c19_b_Vbeta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c19_b_Vc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_b_Vb = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_b_Valpha = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c19_b_Va = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 5U, chartInstance->c19_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c19_b_Va, 0U);
  _SFD_DATA_RANGE_CHECK(*c19_b_Valpha, 1U);
  _SFD_DATA_RANGE_CHECK(*c19_b_Vb, 2U);
  _SFD_DATA_RANGE_CHECK(*c19_b_Vc, 3U);
  _SFD_DATA_RANGE_CHECK(*c19_b_Vbeta, 4U);
  chartInstance->c19_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c19_sfEvent);
  c19_hoistedGlobal = *c19_b_Valpha;
  c19_b_hoistedGlobal = *c19_b_Vbeta;
  c19_Valpha = c19_hoistedGlobal;
  c19_Vbeta = c19_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 7U, 7U, c19_debug_family_names,
    c19_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c19_nargin, 0U, c19_sf_marshallOut,
    c19_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c19_nargout, 1U, c19_sf_marshallOut,
    c19_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c19_Valpha, 2U, c19_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c19_Vbeta, 3U, c19_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c19_Va, 4U, c19_sf_marshallOut,
    c19_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c19_Vb, 5U, c19_sf_marshallOut,
    c19_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c19_Vc, 6U, c19_sf_marshallOut,
    c19_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c19_sfEvent, 3);
  c19_b = c19_Valpha;
  c19_Va = 0.816496580927726 * c19_b;
  _SFD_EML_CALL(0U, chartInstance->c19_sfEvent, 4);
  c19_A = -c19_Valpha;
  c19_x = c19_A;
  c19_b_x = c19_x;
  c19_y = c19_b_x / 2.4494897427831779;
  c19_b_A = c19_Vbeta;
  c19_c_x = c19_b_A;
  c19_d_x = c19_c_x;
  c19_b_y = c19_d_x / 1.4142135623730951;
  c19_Vb = c19_y + c19_b_y;
  _SFD_EML_CALL(0U, chartInstance->c19_sfEvent, 5);
  c19_c_A = -c19_Valpha;
  c19_e_x = c19_c_A;
  c19_f_x = c19_e_x;
  c19_c_y = c19_f_x / 2.4494897427831779;
  c19_d_A = c19_Vbeta;
  c19_g_x = c19_d_A;
  c19_h_x = c19_g_x;
  c19_d_y = c19_h_x / 1.4142135623730951;
  c19_Vc = c19_c_y - c19_d_y;
  _SFD_EML_CALL(0U, chartInstance->c19_sfEvent, -5);
  sf_debug_symbol_scope_pop();
  *c19_b_Va = c19_Va;
  *c19_b_Vb = c19_Vb;
  *c19_b_Vc = c19_Vc;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c19_sfEvent);
  sf_debug_check_for_state_inconsistency
    (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc19_VectorCtrl_Asynchronous_debugSPWM
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c19_machineNumber, uint32_T
  c19_chartNumber)
{
}

static const mxArray *c19_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData)
{
  const mxArray *c19_mxArrayOutData = NULL;
  real_T c19_u;
  const mxArray *c19_y = NULL;
  SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c19_mxArrayOutData = NULL;
  c19_u = *(real_T *)c19_inData;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", &c19_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c19_mxArrayOutData, c19_y, FALSE);
  return c19_mxArrayOutData;
}

static real_T c19_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_Vc, const char_T *c19_identifier)
{
  real_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_Vc), &c19_thisId);
  sf_mex_destroy(&c19_Vc);
  return c19_y;
}

static real_T c19_b_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  real_T c19_y;
  real_T c19_d0;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_d0, 1, 0, 0U, 0, 0U, 0);
  c19_y = c19_d0;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void c19_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData)
{
  const mxArray *c19_Vc;
  const char_T *c19_identifier;
  emlrtMsgIdentifier c19_thisId;
  real_T c19_y;
  SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c19_Vc = sf_mex_dup(c19_mxArrayInData);
  c19_identifier = c19_varName;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_Vc), &c19_thisId);
  sf_mex_destroy(&c19_Vc);
  *(real_T *)c19_outData = c19_y;
  sf_mex_destroy(&c19_mxArrayInData);
}

const mxArray
  *sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info(void)
{
  const mxArray *c19_nameCaptureInfo;
  c19_ResolvedFunctionInfo c19_info[7];
  c19_ResolvedFunctionInfo (*c19_b_info)[7];
  const mxArray *c19_m0 = NULL;
  int32_T c19_i0;
  c19_ResolvedFunctionInfo *c19_r0;
  c19_nameCaptureInfo = NULL;
  c19_nameCaptureInfo = NULL;
  c19_b_info = (c19_ResolvedFunctionInfo (*)[7])c19_info;
  (*c19_b_info)[0].context = "";
  (*c19_b_info)[0].name = "mrdivide";
  (*c19_b_info)[0].dominantType = "double";
  (*c19_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c19_b_info)[0].fileTimeLo = 1325098938U;
  (*c19_b_info)[0].fileTimeHi = 0U;
  (*c19_b_info)[0].mFileTimeLo = 1319708366U;
  (*c19_b_info)[0].mFileTimeHi = 0U;
  (*c19_b_info)[1].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c19_b_info)[1].name = "rdivide";
  (*c19_b_info)[1].dominantType = "double";
  (*c19_b_info)[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c19_b_info)[1].fileTimeLo = 1286797244U;
  (*c19_b_info)[1].fileTimeHi = 0U;
  (*c19_b_info)[1].mFileTimeLo = 0U;
  (*c19_b_info)[1].mFileTimeHi = 0U;
  (*c19_b_info)[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c19_b_info)[2].name = "eml_div";
  (*c19_b_info)[2].dominantType = "double";
  (*c19_b_info)[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c19_b_info)[2].fileTimeLo = 1313326210U;
  (*c19_b_info)[2].fileTimeHi = 0U;
  (*c19_b_info)[2].mFileTimeLo = 0U;
  (*c19_b_info)[2].mFileTimeHi = 0U;
  (*c19_b_info)[3].context = "";
  (*c19_b_info)[3].name = "sqrt";
  (*c19_b_info)[3].dominantType = "double";
  (*c19_b_info)[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c19_b_info)[3].fileTimeLo = 1286797152U;
  (*c19_b_info)[3].fileTimeHi = 0U;
  (*c19_b_info)[3].mFileTimeLo = 0U;
  (*c19_b_info)[3].mFileTimeHi = 0U;
  (*c19_b_info)[4].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c19_b_info)[4].name = "eml_error";
  (*c19_b_info)[4].dominantType = "char";
  (*c19_b_info)[4].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_error.m";
  (*c19_b_info)[4].fileTimeLo = 1305296400U;
  (*c19_b_info)[4].fileTimeHi = 0U;
  (*c19_b_info)[4].mFileTimeLo = 0U;
  (*c19_b_info)[4].mFileTimeHi = 0U;
  (*c19_b_info)[5].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c19_b_info)[5].name = "eml_scalar_sqrt";
  (*c19_b_info)[5].dominantType = "double";
  (*c19_b_info)[5].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  (*c19_b_info)[5].fileTimeLo = 1286797138U;
  (*c19_b_info)[5].fileTimeHi = 0U;
  (*c19_b_info)[5].mFileTimeLo = 0U;
  (*c19_b_info)[5].mFileTimeHi = 0U;
  (*c19_b_info)[6].context = "";
  (*c19_b_info)[6].name = "mtimes";
  (*c19_b_info)[6].dominantType = "double";
  (*c19_b_info)[6].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c19_b_info)[6].fileTimeLo = 1289494492U;
  (*c19_b_info)[6].fileTimeHi = 0U;
  (*c19_b_info)[6].mFileTimeLo = 0U;
  (*c19_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c19_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c19_i0 = 0; c19_i0 < 7; c19_i0++) {
    c19_r0 = &c19_info[c19_i0];
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo", c19_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c19_r0->context)), "context", "nameCaptureInfo",
                    c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo", c19_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c19_r0->name)), "name", "nameCaptureInfo", c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo",
      c19_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c19_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo", c19_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c19_r0->resolved)), "resolved",
                    "nameCaptureInfo", c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo", &c19_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo", &c19_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo",
      &c19_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c19_i0);
    sf_mex_addfield(c19_m0, sf_mex_create("nameCaptureInfo",
      &c19_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c19_i0);
  }

  sf_mex_assign(&c19_nameCaptureInfo, c19_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c19_nameCaptureInfo);
  return c19_nameCaptureInfo;
}

static const mxArray *c19_b_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData)
{
  const mxArray *c19_mxArrayOutData = NULL;
  int32_T c19_u;
  const mxArray *c19_y = NULL;
  SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c19_mxArrayOutData = NULL;
  c19_u = *(int32_T *)c19_inData;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", &c19_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c19_mxArrayOutData, c19_y, FALSE);
  return c19_mxArrayOutData;
}

static int32_T c19_c_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  int32_T c19_y;
  int32_T c19_i1;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_i1, 1, 6, 0U, 0, 0U, 0);
  c19_y = c19_i1;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void c19_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData)
{
  const mxArray *c19_b_sfEvent;
  const char_T *c19_identifier;
  emlrtMsgIdentifier c19_thisId;
  int32_T c19_y;
  SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    chartInstanceVoid;
  c19_b_sfEvent = sf_mex_dup(c19_mxArrayInData);
  c19_identifier = c19_varName;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_b_sfEvent),
    &c19_thisId);
  sf_mex_destroy(&c19_b_sfEvent);
  *(int32_T *)c19_outData = c19_y;
  sf_mex_destroy(&c19_mxArrayInData);
}

static uint8_T c19_d_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_b_is_active_c19_VectorCtrl_Asynchronous_debugSPWM, const char_T *
   c19_identifier)
{
  uint8_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c19_b_is_active_c19_VectorCtrl_Asynchronous_debugSPWM), &c19_thisId);
  sf_mex_destroy(&c19_b_is_active_c19_VectorCtrl_Asynchronous_debugSPWM);
  return c19_y;
}

static uint8_T c19_e_emlrt_marshallIn
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance, const
   mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  uint8_T c19_y;
  uint8_T c19_u0;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_u0, 1, 3, 0U, 0, 0U, 0);
  c19_y = c19_u0;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void init_dsm_address_info
  (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3224014340U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2582157351U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1127331350U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(849501490U);
}

mxArray *sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("s1aXIuEwoftwZX5JSIQAtE");
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray
  *sf_get_sim_state_info_c19_VectorCtrl_Asynchronous_debugSPWM(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[4],T\"Va\",},{M[1],M[6],T\"Vb\",},{M[1],M[7],T\"Vc\",},{M[8],M[0],T\"is_active_c19_VectorCtrl_Asynchronous_debugSPWM\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
    chartInstance = (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,
           19,
           1,
           1,
           5,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"Va");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Valpha");
          _SFD_SET_DATA_PROPS(2,2,0,1,"Vb");
          _SFD_SET_DATA_PROPS(3,2,0,1,"Vc");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Vbeta");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,152);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c19_sf_marshallOut,(MexInFcnForType)c19_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c19_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c19_sf_marshallOut,(MexInFcnForType)c19_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c19_sf_marshallOut,(MexInFcnForType)c19_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c19_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c19_Va;
          real_T *c19_Valpha;
          real_T *c19_Vb;
          real_T *c19_Vc;
          real_T *c19_Vbeta;
          c19_Vbeta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c19_Vc = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c19_Vb = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c19_Valpha = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c19_Va = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c19_Va);
          _SFD_SET_DATA_VALUE_PTR(1U, c19_Valpha);
          _SFD_SET_DATA_VALUE_PTR(2U, c19_Vb);
          _SFD_SET_DATA_VALUE_PTR(3U, c19_Vc);
          _SFD_SET_DATA_VALUE_PTR(4U, c19_Vbeta);
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
  return "hWTHAOieULQmaACKituXxB";
}

static void sf_opaque_initialize_c19_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
  initialize_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c19_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  enable_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c19_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  disable_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c19_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  sf_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c19_VectorCtrl_Asynchronous_debugSPWM();/* state var info */
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

extern void sf_internal_set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
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
    sf_get_sim_state_info_c19_VectorCtrl_Asynchronous_debugSPWM();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM(SimStruct* S)
{
  return sf_internal_get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM(S);
}

static void sf_opaque_set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM(S, st);
}

static void sf_opaque_terminate_c19_VectorCtrl_Asynchronous_debugSPWM(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c19_VectorCtrl_Asynchronous_debugSPWM
      ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_VectorCtrl_Asynchronous_debugSPWM_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc19_VectorCtrl_Asynchronous_debugSPWM
    ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c19_VectorCtrl_Asynchronous_debugSPWM(SimStruct
  *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c19_VectorCtrl_Asynchronous_debugSPWM
      ((SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c19_VectorCtrl_Asynchronous_debugSPWM(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_VectorCtrl_Asynchronous_debugSPWM_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      19);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,19,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,19,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,19,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,19,3);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,19);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1432477581U));
  ssSetChecksum1(S,(3002181086U));
  ssSetChecksum2(S,(1061061796U));
  ssSetChecksum3(S,(3768979157U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c19_VectorCtrl_Asynchronous_debugSPWM(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c19_VectorCtrl_Asynchronous_debugSPWM(SimStruct *S)
{
  SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *chartInstance;
  chartInstance = (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct *)
    malloc(sizeof(SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc19_VectorCtrl_Asynchronous_debugSPWMInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c19_VectorCtrl_Asynchronous_debugSPWM;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c19_VectorCtrl_Asynchronous_debugSPWM;
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

void c19_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c19_VectorCtrl_Asynchronous_debugSPWM(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c19_VectorCtrl_Asynchronous_debugSPWM(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c19_VectorCtrl_Asynchronous_debugSPWM(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c19_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
