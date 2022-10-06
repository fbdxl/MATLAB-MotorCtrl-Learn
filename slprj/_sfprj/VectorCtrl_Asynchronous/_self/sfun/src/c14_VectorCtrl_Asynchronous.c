/* Include files */

#include "blascompat32.h"
#include "VectorCtrl_Asynchronous_sfun.h"
#include "c14_VectorCtrl_Asynchronous.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "VectorCtrl_Asynchronous_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c14_debug_family_names[6] = { "nargin", "nargout", "Valpha",
  "Vbeta", "Mod", "Angle" };

/* Function Declarations */
static void initialize_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void initialize_params_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void enable_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void disable_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void c14_update_debugger_state_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void set_sim_state_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_st);
static void finalize_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void sf_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void initSimStructsc14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c14_machineNumber, uint32_T
  c14_chartNumber);
static const mxArray *c14_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData);
static real_T c14_emlrt_marshallIn(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c14_Angle, const char_T *c14_identifier);
static real_T c14_b_emlrt_marshallIn(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData);
static void c14_eml_error(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance);
static const mxArray *c14_b_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData);
static int32_T c14_c_emlrt_marshallIn
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void c14_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData);
static uint8_T c14_d_emlrt_marshallIn
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_b_is_active_c14_VectorCtrl_Asynchronous, const char_T *c14_identifier);
static uint8_T c14_e_emlrt_marshallIn
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId);
static void init_dsm_address_info(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  chartInstance->c14_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c14_is_active_c14_VectorCtrl_Asynchronous = 0U;
}

static void initialize_params_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static void enable_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c14_update_debugger_state_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  const mxArray *c14_st;
  const mxArray *c14_y = NULL;
  real_T c14_hoistedGlobal;
  real_T c14_u;
  const mxArray *c14_b_y = NULL;
  real_T c14_b_hoistedGlobal;
  real_T c14_b_u;
  const mxArray *c14_c_y = NULL;
  uint8_T c14_c_hoistedGlobal;
  uint8_T c14_c_u;
  const mxArray *c14_d_y = NULL;
  real_T *c14_Angle;
  real_T *c14_Mod;
  c14_Angle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c14_Mod = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c14_st = NULL;
  c14_st = NULL;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_createcellarray(3), FALSE);
  c14_hoistedGlobal = *c14_Angle;
  c14_u = c14_hoistedGlobal;
  c14_b_y = NULL;
  sf_mex_assign(&c14_b_y, sf_mex_create("y", &c14_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c14_y, 0, c14_b_y);
  c14_b_hoistedGlobal = *c14_Mod;
  c14_b_u = c14_b_hoistedGlobal;
  c14_c_y = NULL;
  sf_mex_assign(&c14_c_y, sf_mex_create("y", &c14_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c14_y, 1, c14_c_y);
  c14_c_hoistedGlobal = chartInstance->c14_is_active_c14_VectorCtrl_Asynchronous;
  c14_c_u = c14_c_hoistedGlobal;
  c14_d_y = NULL;
  sf_mex_assign(&c14_d_y, sf_mex_create("y", &c14_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c14_y, 2, c14_d_y);
  sf_mex_assign(&c14_st, c14_y, FALSE);
  return c14_st;
}

static void set_sim_state_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_st)
{
  const mxArray *c14_u;
  real_T *c14_Angle;
  real_T *c14_Mod;
  c14_Angle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c14_Mod = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c14_doneDoubleBufferReInit = TRUE;
  c14_u = sf_mex_dup(c14_st);
  *c14_Angle = c14_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c14_u, 0)), "Angle");
  *c14_Mod = c14_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c14_u,
    1)), "Mod");
  chartInstance->c14_is_active_c14_VectorCtrl_Asynchronous =
    c14_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c14_u, 2)),
    "is_active_c14_VectorCtrl_Asynchronous");
  sf_mex_destroy(&c14_u);
  c14_update_debugger_state_c14_VectorCtrl_Asynchronous(chartInstance);
  sf_mex_destroy(&c14_st);
}

static void finalize_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static void sf_c14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  real_T c14_hoistedGlobal;
  real_T c14_b_hoistedGlobal;
  real_T c14_Valpha;
  real_T c14_Vbeta;
  uint32_T c14_debug_family_var_map[6];
  real_T c14_nargin = 2.0;
  real_T c14_nargout = 2.0;
  real_T c14_Mod;
  real_T c14_Angle;
  real_T c14_a;
  real_T c14_b;
  real_T c14_y;
  real_T c14_b_a;
  real_T c14_b_b;
  real_T c14_b_y;
  real_T c14_x;
  real_T c14_b_x;
  real_T c14_A;
  real_T c14_B;
  real_T c14_c_x;
  real_T c14_c_y;
  real_T c14_d_x;
  real_T c14_d_y;
  real_T c14_e_y;
  real_T c14_e_x;
  real_T c14_f_x;
  real_T c14_b_A;
  real_T c14_b_B;
  real_T c14_g_x;
  real_T c14_f_y;
  real_T c14_h_x;
  real_T c14_g_y;
  real_T c14_h_y;
  real_T c14_i_x;
  real_T c14_j_x;
  real_T c14_c_A;
  real_T c14_c_B;
  real_T c14_k_x;
  real_T c14_i_y;
  real_T c14_l_x;
  real_T c14_j_y;
  real_T c14_k_y;
  real_T c14_m_x;
  real_T c14_n_x;
  real_T c14_d_A;
  real_T c14_d_B;
  real_T c14_o_x;
  real_T c14_l_y;
  real_T c14_p_x;
  real_T c14_m_y;
  real_T c14_n_y;
  real_T c14_q_x;
  real_T c14_r_x;
  real_T *c14_b_Angle;
  real_T *c14_b_Mod;
  real_T *c14_b_Vbeta;
  real_T *c14_b_Valpha;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  c14_b_Angle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c14_b_Vbeta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c14_b_Mod = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c14_b_Valpha = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 13U, chartInstance->c14_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c14_b_Valpha, 0U);
  _SFD_DATA_RANGE_CHECK(*c14_b_Mod, 1U);
  _SFD_DATA_RANGE_CHECK(*c14_b_Vbeta, 2U);
  _SFD_DATA_RANGE_CHECK(*c14_b_Angle, 3U);
  chartInstance->c14_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 13U, chartInstance->c14_sfEvent);
  c14_hoistedGlobal = *c14_b_Valpha;
  c14_b_hoistedGlobal = *c14_b_Vbeta;
  c14_Valpha = c14_hoistedGlobal;
  c14_Vbeta = c14_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 6U, 6U, c14_debug_family_names,
    c14_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c14_nargin, 0U, c14_sf_marshallOut,
    c14_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c14_nargout, 1U, c14_sf_marshallOut,
    c14_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c14_Valpha, 2U, c14_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c14_Vbeta, 3U, c14_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c14_Mod, 4U, c14_sf_marshallOut,
    c14_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c14_Angle, 5U, c14_sf_marshallOut,
    c14_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 3);
  c14_a = c14_Valpha;
  c14_b = c14_Valpha;
  c14_y = c14_a * c14_b;
  c14_b_a = c14_Vbeta;
  c14_b_b = c14_Vbeta;
  c14_b_y = c14_b_a * c14_b_b;
  c14_x = c14_y + c14_b_y;
  c14_Mod = c14_x;
  if (c14_Mod < 0.0) {
    c14_eml_error(chartInstance);
  }

  c14_b_x = c14_Mod;
  c14_Mod = c14_b_x;
  c14_Mod = muDoubleScalarSqrt(c14_Mod);
  _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 4);
  guard1 = FALSE;
  if (CV_EML_COND(0, 1, 0, c14_Valpha > 0.0)) {
    if (CV_EML_COND(0, 1, 1, c14_Vbeta > 0.0)) {
      CV_EML_MCDC(0, 1, 0, TRUE);
      CV_EML_IF(0, 1, 0, TRUE);
      _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 6);
      c14_A = c14_Vbeta;
      c14_B = c14_Valpha;
      c14_c_x = c14_A;
      c14_c_y = c14_B;
      c14_d_x = c14_c_x;
      c14_d_y = c14_c_y;
      c14_e_y = c14_d_x / c14_d_y;
      c14_e_x = c14_e_y;
      c14_Angle = c14_e_x;
      c14_f_x = c14_Angle;
      c14_Angle = c14_f_x;
      c14_Angle = muDoubleScalarAtan(c14_Angle);
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    CV_EML_MCDC(0, 1, 0, FALSE);
    CV_EML_IF(0, 1, 0, FALSE);
    _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 7);
    guard2 = FALSE;
    if (CV_EML_COND(0, 1, 2, c14_Valpha > 0.0)) {
      if (CV_EML_COND(0, 1, 3, c14_Vbeta < 0.0)) {
        CV_EML_MCDC(0, 1, 1, TRUE);
        CV_EML_IF(0, 1, 1, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 9);
        c14_b_A = c14_Vbeta;
        c14_b_B = c14_Valpha;
        c14_g_x = c14_b_A;
        c14_f_y = c14_b_B;
        c14_h_x = c14_g_x;
        c14_g_y = c14_f_y;
        c14_h_y = c14_h_x / c14_g_y;
        c14_i_x = c14_h_y;
        c14_j_x = c14_i_x;
        c14_j_x = muDoubleScalarAtan(c14_j_x);
        c14_Angle = c14_j_x + 6.2831853071795862;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      CV_EML_MCDC(0, 1, 1, FALSE);
      CV_EML_IF(0, 1, 1, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 10);
      guard3 = FALSE;
      if (CV_EML_COND(0, 1, 4, c14_Valpha < 0.0)) {
        if (CV_EML_COND(0, 1, 5, c14_Vbeta > 0.0)) {
          CV_EML_MCDC(0, 1, 2, TRUE);
          CV_EML_IF(0, 1, 2, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 12);
          c14_c_A = c14_Vbeta;
          c14_c_B = c14_Valpha;
          c14_k_x = c14_c_A;
          c14_i_y = c14_c_B;
          c14_l_x = c14_k_x;
          c14_j_y = c14_i_y;
          c14_k_y = c14_l_x / c14_j_y;
          c14_m_x = c14_k_y;
          c14_n_x = c14_m_x;
          c14_n_x = muDoubleScalarAtan(c14_n_x);
          c14_Angle = c14_n_x + 3.1415926535897931;
        } else {
          guard3 = TRUE;
        }
      } else {
        guard3 = TRUE;
      }

      if (guard3 == TRUE) {
        CV_EML_MCDC(0, 1, 2, FALSE);
        CV_EML_IF(0, 1, 2, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, 15);
        c14_d_A = c14_Vbeta;
        c14_d_B = c14_Valpha;
        c14_o_x = c14_d_A;
        c14_l_y = c14_d_B;
        c14_p_x = c14_o_x;
        c14_m_y = c14_l_y;
        c14_n_y = c14_p_x / c14_m_y;
        c14_q_x = c14_n_y;
        c14_r_x = c14_q_x;
        c14_r_x = muDoubleScalarAtan(c14_r_x);
        c14_Angle = c14_r_x + 3.1415926535897931;
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c14_sfEvent, -15);
  sf_debug_symbol_scope_pop();
  *c14_b_Mod = c14_Mod;
  *c14_b_Angle = c14_Angle;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, chartInstance->c14_sfEvent);
  sf_debug_check_for_state_inconsistency(_VectorCtrl_AsynchronousMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc14_VectorCtrl_Asynchronous
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c14_machineNumber, uint32_T
  c14_chartNumber)
{
}

static const mxArray *c14_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData)
{
  const mxArray *c14_mxArrayOutData = NULL;
  real_T c14_u;
  const mxArray *c14_y = NULL;
  SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc14_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c14_mxArrayOutData = NULL;
  c14_u = *(real_T *)c14_inData;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", &c14_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c14_mxArrayOutData, c14_y, FALSE);
  return c14_mxArrayOutData;
}

static real_T c14_emlrt_marshallIn(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c14_Angle, const char_T *c14_identifier)
{
  real_T c14_y;
  emlrtMsgIdentifier c14_thisId;
  c14_thisId.fIdentifier = c14_identifier;
  c14_thisId.fParent = NULL;
  c14_y = c14_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_Angle),
    &c14_thisId);
  sf_mex_destroy(&c14_Angle);
  return c14_y;
}

static real_T c14_b_emlrt_marshallIn(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  real_T c14_y;
  real_T c14_d0;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_d0, 1, 0, 0U, 0, 0U, 0);
  c14_y = c14_d0;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData)
{
  const mxArray *c14_Angle;
  const char_T *c14_identifier;
  emlrtMsgIdentifier c14_thisId;
  real_T c14_y;
  SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc14_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c14_Angle = sf_mex_dup(c14_mxArrayInData);
  c14_identifier = c14_varName;
  c14_thisId.fIdentifier = c14_identifier;
  c14_thisId.fParent = NULL;
  c14_y = c14_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_Angle),
    &c14_thisId);
  sf_mex_destroy(&c14_Angle);
  *(real_T *)c14_outData = c14_y;
  sf_mex_destroy(&c14_mxArrayInData);
}

const mxArray *sf_c14_VectorCtrl_Asynchronous_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c14_nameCaptureInfo;
  c14_ResolvedFunctionInfo c14_info[9];
  c14_ResolvedFunctionInfo (*c14_b_info)[9];
  const mxArray *c14_m0 = NULL;
  int32_T c14_i0;
  c14_ResolvedFunctionInfo *c14_r0;
  c14_nameCaptureInfo = NULL;
  c14_nameCaptureInfo = NULL;
  c14_b_info = (c14_ResolvedFunctionInfo (*)[9])c14_info;
  (*c14_b_info)[0].context = "";
  (*c14_b_info)[0].name = "mtimes";
  (*c14_b_info)[0].dominantType = "double";
  (*c14_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c14_b_info)[0].fileTimeLo = 1289494492U;
  (*c14_b_info)[0].fileTimeHi = 0U;
  (*c14_b_info)[0].mFileTimeLo = 0U;
  (*c14_b_info)[0].mFileTimeHi = 0U;
  (*c14_b_info)[1].context = "";
  (*c14_b_info)[1].name = "sqrt";
  (*c14_b_info)[1].dominantType = "double";
  (*c14_b_info)[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c14_b_info)[1].fileTimeLo = 1286797152U;
  (*c14_b_info)[1].fileTimeHi = 0U;
  (*c14_b_info)[1].mFileTimeLo = 0U;
  (*c14_b_info)[1].mFileTimeHi = 0U;
  (*c14_b_info)[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c14_b_info)[2].name = "eml_error";
  (*c14_b_info)[2].dominantType = "char";
  (*c14_b_info)[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_error.m";
  (*c14_b_info)[2].fileTimeLo = 1305296400U;
  (*c14_b_info)[2].fileTimeHi = 0U;
  (*c14_b_info)[2].mFileTimeLo = 0U;
  (*c14_b_info)[2].mFileTimeHi = 0U;
  (*c14_b_info)[3].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c14_b_info)[3].name = "eml_scalar_sqrt";
  (*c14_b_info)[3].dominantType = "double";
  (*c14_b_info)[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  (*c14_b_info)[3].fileTimeLo = 1286797138U;
  (*c14_b_info)[3].fileTimeHi = 0U;
  (*c14_b_info)[3].mFileTimeLo = 0U;
  (*c14_b_info)[3].mFileTimeHi = 0U;
  (*c14_b_info)[4].context = "";
  (*c14_b_info)[4].name = "mrdivide";
  (*c14_b_info)[4].dominantType = "double";
  (*c14_b_info)[4].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c14_b_info)[4].fileTimeLo = 1325098938U;
  (*c14_b_info)[4].fileTimeHi = 0U;
  (*c14_b_info)[4].mFileTimeLo = 1319708366U;
  (*c14_b_info)[4].mFileTimeHi = 0U;
  (*c14_b_info)[5].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c14_b_info)[5].name = "rdivide";
  (*c14_b_info)[5].dominantType = "double";
  (*c14_b_info)[5].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c14_b_info)[5].fileTimeLo = 1286797244U;
  (*c14_b_info)[5].fileTimeHi = 0U;
  (*c14_b_info)[5].mFileTimeLo = 0U;
  (*c14_b_info)[5].mFileTimeHi = 0U;
  (*c14_b_info)[6].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c14_b_info)[6].name = "eml_div";
  (*c14_b_info)[6].dominantType = "double";
  (*c14_b_info)[6].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c14_b_info)[6].fileTimeLo = 1313326210U;
  (*c14_b_info)[6].fileTimeHi = 0U;
  (*c14_b_info)[6].mFileTimeLo = 0U;
  (*c14_b_info)[6].mFileTimeHi = 0U;
  (*c14_b_info)[7].context = "";
  (*c14_b_info)[7].name = "atan";
  (*c14_b_info)[7].dominantType = "double";
  (*c14_b_info)[7].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/atan.m";
  (*c14_b_info)[7].fileTimeLo = 1305296398U;
  (*c14_b_info)[7].fileTimeHi = 0U;
  (*c14_b_info)[7].mFileTimeLo = 0U;
  (*c14_b_info)[7].mFileTimeHi = 0U;
  (*c14_b_info)[8].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/atan.m";
  (*c14_b_info)[8].name = "eml_scalar_atan";
  (*c14_b_info)[8].dominantType = "double";
  (*c14_b_info)[8].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_atan.m";
  (*c14_b_info)[8].fileTimeLo = 1286797118U;
  (*c14_b_info)[8].fileTimeHi = 0U;
  (*c14_b_info)[8].mFileTimeLo = 0U;
  (*c14_b_info)[8].mFileTimeHi = 0U;
  sf_mex_assign(&c14_m0, sf_mex_createstruct("nameCaptureInfo", 1, 9), FALSE);
  for (c14_i0 = 0; c14_i0 < 9; c14_i0++) {
    c14_r0 = &c14_info[c14_i0];
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo", c14_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c14_r0->context)), "context", "nameCaptureInfo",
                    c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo", c14_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c14_r0->name)), "name", "nameCaptureInfo", c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo",
      c14_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c14_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo", c14_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c14_r0->resolved)), "resolved",
                    "nameCaptureInfo", c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo", &c14_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo", &c14_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo",
      &c14_r0->mFileTimeLo, 7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo",
                    c14_i0);
    sf_mex_addfield(c14_m0, sf_mex_create("nameCaptureInfo",
      &c14_r0->mFileTimeHi, 7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo",
                    c14_i0);
  }

  sf_mex_assign(&c14_nameCaptureInfo, c14_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c14_nameCaptureInfo);
  return c14_nameCaptureInfo;
}

static void c14_eml_error(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance)
{
  int32_T c14_i1;
  static char_T c14_varargin_1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o',
    'o', 'l', 'b', 'o', 'x', ':', 's', 'q', 'r', 't', '_', 'd', 'o', 'm', 'a',
    'i', 'n', 'E', 'r', 'r', 'o', 'r' };

  char_T c14_u[30];
  const mxArray *c14_y = NULL;
  for (c14_i1 = 0; c14_i1 < 30; c14_i1++) {
    c14_u[c14_i1] = c14_varargin_1[c14_i1];
  }

  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", c14_u, 10, 0U, 1U, 0U, 2, 1, 30),
                FALSE);
  sf_mex_call_debug("error", 0U, 1U, 14, sf_mex_call_debug("message", 1U, 1U, 14,
    c14_y));
}

static const mxArray *c14_b_sf_marshallOut(void *chartInstanceVoid, void
  *c14_inData)
{
  const mxArray *c14_mxArrayOutData = NULL;
  int32_T c14_u;
  const mxArray *c14_y = NULL;
  SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc14_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c14_mxArrayOutData = NULL;
  c14_u = *(int32_T *)c14_inData;
  c14_y = NULL;
  sf_mex_assign(&c14_y, sf_mex_create("y", &c14_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c14_mxArrayOutData, c14_y, FALSE);
  return c14_mxArrayOutData;
}

static int32_T c14_c_emlrt_marshallIn
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  int32_T c14_y;
  int32_T c14_i2;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_i2, 1, 6, 0U, 0, 0U, 0);
  c14_y = c14_i2;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void c14_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c14_mxArrayInData, const char_T *c14_varName, void *c14_outData)
{
  const mxArray *c14_b_sfEvent;
  const char_T *c14_identifier;
  emlrtMsgIdentifier c14_thisId;
  int32_T c14_y;
  SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc14_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c14_b_sfEvent = sf_mex_dup(c14_mxArrayInData);
  c14_identifier = c14_varName;
  c14_thisId.fIdentifier = c14_identifier;
  c14_thisId.fParent = NULL;
  c14_y = c14_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_b_sfEvent),
    &c14_thisId);
  sf_mex_destroy(&c14_b_sfEvent);
  *(int32_T *)c14_outData = c14_y;
  sf_mex_destroy(&c14_mxArrayInData);
}

static uint8_T c14_d_emlrt_marshallIn
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_b_is_active_c14_VectorCtrl_Asynchronous, const char_T *c14_identifier)
{
  uint8_T c14_y;
  emlrtMsgIdentifier c14_thisId;
  c14_thisId.fIdentifier = c14_identifier;
  c14_thisId.fParent = NULL;
  c14_y = c14_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c14_b_is_active_c14_VectorCtrl_Asynchronous), &c14_thisId);
  sf_mex_destroy(&c14_b_is_active_c14_VectorCtrl_Asynchronous);
  return c14_y;
}

static uint8_T c14_e_emlrt_marshallIn
  (SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c14_u, const emlrtMsgIdentifier *c14_parentId)
{
  uint8_T c14_y;
  uint8_T c14_u0;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_u), &c14_u0, 1, 3, 0U, 0, 0U, 0);
  c14_y = c14_u0;
  sf_mex_destroy(&c14_u);
  return c14_y;
}

static void init_dsm_address_info(SFc14_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c14_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2962335313U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2013553035U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3517510036U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1951526194U);
}

mxArray *sf_c14_VectorCtrl_Asynchronous_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("nezpdrIt2IiplcLMMw1fsF");
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

static const mxArray *sf_get_sim_state_info_c14_VectorCtrl_Asynchronous(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[7],T\"Angle\",},{M[1],M[5],T\"Mod\",},{M[8],M[0],T\"is_active_c14_VectorCtrl_Asynchronous\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c14_VectorCtrl_Asynchronous_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
    chartInstance = (SFc14_VectorCtrl_AsynchronousInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_VectorCtrl_AsynchronousMachineNumber_,
           14,
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
          init_script_number_translation(_VectorCtrl_AsynchronousMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_VectorCtrl_AsynchronousMachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_VectorCtrl_AsynchronousMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"Valpha");
          _SFD_SET_DATA_PROPS(1,2,0,1,"Mod");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Vbeta");
          _SFD_SET_DATA_PROPS(3,2,0,1,"Angle");
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
        _SFD_CV_INIT_EML(0,1,1,3,0,0,0,0,6,3);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,438);
        _SFD_CV_INIT_EML_IF(0,1,0,144,168,215,437);
        _SFD_CV_INIT_EML_IF(0,1,1,215,243,297,437);
        _SFD_CV_INIT_EML_IF(0,1,2,297,325,377,437);

        {
          static int condStart[] = { 148, 160 };

          static int condEnd[] = { 156, 167 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,147,168,2,0,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 223, 235 };

          static int condEnd[] = { 231, 242 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,222,243,2,2,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 305, 317 };

          static int condEnd[] = { 313, 324 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,304,325,2,4,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_sf_marshallOut,(MexInFcnForType)c14_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c14_sf_marshallOut,(MexInFcnForType)c14_sf_marshallIn);

        {
          real_T *c14_Valpha;
          real_T *c14_Mod;
          real_T *c14_Vbeta;
          real_T *c14_Angle;
          c14_Angle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c14_Vbeta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c14_Mod = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c14_Valpha = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c14_Valpha);
          _SFD_SET_DATA_VALUE_PTR(1U, c14_Mod);
          _SFD_SET_DATA_VALUE_PTR(2U, c14_Vbeta);
          _SFD_SET_DATA_VALUE_PTR(3U, c14_Angle);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_VectorCtrl_AsynchronousMachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "2vpLsIT3SrewD60ZOtQlDC";
}

static void sf_opaque_initialize_c14_VectorCtrl_Asynchronous(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc14_VectorCtrl_AsynchronousInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
  initialize_c14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c14_VectorCtrl_Asynchronous(void *chartInstanceVar)
{
  enable_c14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c14_VectorCtrl_Asynchronous(void *chartInstanceVar)
{
  disable_c14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c14_VectorCtrl_Asynchronous(void *chartInstanceVar)
{
  sf_c14_VectorCtrl_Asynchronous((SFc14_VectorCtrl_AsynchronousInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c14_VectorCtrl_Asynchronous
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c14_VectorCtrl_Asynchronous();/* state var info */
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

extern void sf_internal_set_sim_state_c14_VectorCtrl_Asynchronous(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c14_VectorCtrl_Asynchronous();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c14_VectorCtrl_Asynchronous
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c14_VectorCtrl_Asynchronous(S);
}

static void sf_opaque_set_sim_state_c14_VectorCtrl_Asynchronous(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c14_VectorCtrl_Asynchronous(S, st);
}

static void sf_opaque_terminate_c14_VectorCtrl_Asynchronous(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc14_VectorCtrl_AsynchronousInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c14_VectorCtrl_Asynchronous
      ((SFc14_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_VectorCtrl_Asynchronous_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc14_VectorCtrl_Asynchronous
    ((SFc14_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c14_VectorCtrl_Asynchronous(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c14_VectorCtrl_Asynchronous
      ((SFc14_VectorCtrl_AsynchronousInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c14_VectorCtrl_Asynchronous(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_VectorCtrl_Asynchronous_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      14);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,14,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,14,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,14,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,14,2);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,14);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2765745745U));
  ssSetChecksum1(S,(32093287U));
  ssSetChecksum2(S,(185656898U));
  ssSetChecksum3(S,(2741892488U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c14_VectorCtrl_Asynchronous(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c14_VectorCtrl_Asynchronous(SimStruct *S)
{
  SFc14_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc14_VectorCtrl_AsynchronousInstanceStruct *)malloc(sizeof
    (SFc14_VectorCtrl_AsynchronousInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc14_VectorCtrl_AsynchronousInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.mdlStart = mdlStart_c14_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c14_VectorCtrl_Asynchronous;
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

void c14_VectorCtrl_Asynchronous_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c14_VectorCtrl_Asynchronous(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c14_VectorCtrl_Asynchronous(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c14_VectorCtrl_Asynchronous(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c14_VectorCtrl_Asynchronous_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
