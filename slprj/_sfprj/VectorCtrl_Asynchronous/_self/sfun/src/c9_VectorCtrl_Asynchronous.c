/* Include files */

#include "blascompat32.h"
#include "VectorCtrl_Asynchronous_sfun.h"
#include "c9_VectorCtrl_Asynchronous.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "VectorCtrl_Asynchronous_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c9_debug_family_names[8] = { "nargin", "nargout", "Valpha",
  "Vbeta", "sinwt", "coswt", "Vd", "Vq" };

/* Function Declarations */
static void initialize_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void initialize_params_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void enable_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void disable_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void c9_update_debugger_state_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void set_sim_state_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c9_st);
static void finalize_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void sf_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void initSimStructsc9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber);
static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData);
static real_T c9_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c9_Vq, const char_T *c9_identifier);
static real_T c9_b_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static int32_T c9_c_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static uint8_T c9_d_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct *
  chartInstance, const mxArray *c9_b_is_active_c9_VectorCtrl_Asynchronous, const
  char_T *c9_identifier);
static uint8_T c9_e_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void init_dsm_address_info(SFc9_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  chartInstance->c9_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c9_is_active_c9_VectorCtrl_Asynchronous = 0U;
}

static void initialize_params_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static void enable_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c9_update_debugger_state_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  const mxArray *c9_st;
  const mxArray *c9_y = NULL;
  real_T c9_hoistedGlobal;
  real_T c9_u;
  const mxArray *c9_b_y = NULL;
  real_T c9_b_hoistedGlobal;
  real_T c9_b_u;
  const mxArray *c9_c_y = NULL;
  uint8_T c9_c_hoistedGlobal;
  uint8_T c9_c_u;
  const mxArray *c9_d_y = NULL;
  real_T *c9_Vd;
  real_T *c9_Vq;
  c9_Vq = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_Vd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_st = NULL;
  c9_st = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_createcellarray(3), FALSE);
  c9_hoistedGlobal = *c9_Vd;
  c9_u = c9_hoistedGlobal;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c9_y, 0, c9_b_y);
  c9_b_hoistedGlobal = *c9_Vq;
  c9_b_u = c9_b_hoistedGlobal;
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", &c9_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c9_y, 1, c9_c_y);
  c9_c_hoistedGlobal = chartInstance->c9_is_active_c9_VectorCtrl_Asynchronous;
  c9_c_u = c9_c_hoistedGlobal;
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", &c9_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c9_y, 2, c9_d_y);
  sf_mex_assign(&c9_st, c9_y, FALSE);
  return c9_st;
}

static void set_sim_state_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance, const mxArray
   *c9_st)
{
  const mxArray *c9_u;
  real_T *c9_Vd;
  real_T *c9_Vq;
  c9_Vq = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_Vd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c9_doneDoubleBufferReInit = TRUE;
  c9_u = sf_mex_dup(c9_st);
  *c9_Vd = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 0)),
    "Vd");
  *c9_Vq = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 1)),
    "Vq");
  chartInstance->c9_is_active_c9_VectorCtrl_Asynchronous = c9_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 2)),
     "is_active_c9_VectorCtrl_Asynchronous");
  sf_mex_destroy(&c9_u);
  c9_update_debugger_state_c9_VectorCtrl_Asynchronous(chartInstance);
  sf_mex_destroy(&c9_st);
}

static void finalize_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static void sf_c9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
  real_T c9_hoistedGlobal;
  real_T c9_b_hoistedGlobal;
  real_T c9_c_hoistedGlobal;
  real_T c9_d_hoistedGlobal;
  real_T c9_Valpha;
  real_T c9_Vbeta;
  real_T c9_sinwt;
  real_T c9_coswt;
  uint32_T c9_debug_family_var_map[8];
  real_T c9_nargin = 4.0;
  real_T c9_nargout = 2.0;
  real_T c9_Vd;
  real_T c9_Vq;
  real_T c9_a;
  real_T c9_b;
  real_T c9_y;
  real_T c9_b_a;
  real_T c9_b_b;
  real_T c9_b_y;
  real_T c9_c_a;
  real_T c9_c_b;
  real_T c9_c_y;
  real_T c9_d_a;
  real_T c9_d_b;
  real_T c9_d_y;
  real_T *c9_b_Valpha;
  real_T *c9_b_Vd;
  real_T *c9_b_Vbeta;
  real_T *c9_b_Vq;
  real_T *c9_b_sinwt;
  real_T *c9_b_coswt;
  c9_b_coswt = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c9_b_sinwt = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_b_Vq = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_b_Vbeta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_b_Vd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_b_Valpha = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c9_b_Valpha, 0U);
  _SFD_DATA_RANGE_CHECK(*c9_b_Vd, 1U);
  _SFD_DATA_RANGE_CHECK(*c9_b_Vbeta, 2U);
  _SFD_DATA_RANGE_CHECK(*c9_b_Vq, 3U);
  _SFD_DATA_RANGE_CHECK(*c9_b_sinwt, 4U);
  _SFD_DATA_RANGE_CHECK(*c9_b_coswt, 5U);
  chartInstance->c9_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  c9_hoistedGlobal = *c9_b_Valpha;
  c9_b_hoistedGlobal = *c9_b_Vbeta;
  c9_c_hoistedGlobal = *c9_b_sinwt;
  c9_d_hoistedGlobal = *c9_b_coswt;
  c9_Valpha = c9_hoistedGlobal;
  c9_Vbeta = c9_b_hoistedGlobal;
  c9_sinwt = c9_c_hoistedGlobal;
  c9_coswt = c9_d_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c9_debug_family_names,
    c9_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c9_nargin, 0U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c9_nargout, 1U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c9_Valpha, 2U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_Vbeta, 3U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_sinwt, 4U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c9_coswt, 5U, c9_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c9_Vd, 6U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c9_Vq, 7U, c9_sf_marshallOut,
    c9_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 4);
  c9_a = c9_Valpha;
  c9_b = c9_coswt;
  c9_y = c9_a * c9_b;
  c9_b_a = c9_Vbeta;
  c9_b_b = c9_sinwt;
  c9_b_y = c9_b_a * c9_b_b;
  c9_Vd = c9_y + c9_b_y;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, 5);
  c9_c_a = -c9_Valpha;
  c9_c_b = c9_sinwt;
  c9_c_y = c9_c_a * c9_c_b;
  c9_d_a = c9_Vbeta;
  c9_d_b = c9_coswt;
  c9_d_y = c9_d_a * c9_d_b;
  c9_Vq = c9_c_y + c9_d_y;
  _SFD_EML_CALL(0U, chartInstance->c9_sfEvent, -5);
  sf_debug_symbol_scope_pop();
  *c9_b_Vd = c9_Vd;
  *c9_b_Vq = c9_Vq;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  sf_debug_check_for_state_inconsistency(_VectorCtrl_AsynchronousMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc9_VectorCtrl_Asynchronous
  (SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber)
{
}

static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  real_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc9_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(real_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c9_mxArrayOutData, c9_y, FALSE);
  return c9_mxArrayOutData;
}

static real_T c9_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c9_Vq, const char_T *c9_identifier)
{
  real_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_Vq), &c9_thisId);
  sf_mex_destroy(&c9_Vq);
  return c9_y;
}

static real_T c9_b_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  real_T c9_y;
  real_T c9_d0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_d0, 1, 0, 0U, 0, 0U, 0);
  c9_y = c9_d0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_Vq;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  real_T c9_y;
  SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc9_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c9_Vq = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_Vq), &c9_thisId);
  sf_mex_destroy(&c9_Vq);
  *(real_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

const mxArray *sf_c9_VectorCtrl_Asynchronous_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c9_nameCaptureInfo;
  c9_ResolvedFunctionInfo c9_info[1];
  c9_ResolvedFunctionInfo (*c9_b_info)[1];
  const mxArray *c9_m0 = NULL;
  int32_T c9_i0;
  c9_ResolvedFunctionInfo *c9_r0;
  c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  c9_b_info = (c9_ResolvedFunctionInfo (*)[1])c9_info;
  (*c9_b_info)[0].context = "";
  (*c9_b_info)[0].name = "mtimes";
  (*c9_b_info)[0].dominantType = "double";
  (*c9_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c9_b_info)[0].fileTimeLo = 1289494492U;
  (*c9_b_info)[0].fileTimeHi = 0U;
  (*c9_b_info)[0].mFileTimeLo = 0U;
  (*c9_b_info)[0].mFileTimeHi = 0U;
  sf_mex_assign(&c9_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1), FALSE);
  for (c9_i0 = 0; c9_i0 < 1; c9_i0++) {
    c9_r0 = &c9_info[c9_i0];
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c9_r0->context)), "context", "nameCaptureInfo",
                    c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c9_r0->name)), "name", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c9_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", c9_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c9_r0->resolved)), "resolved", "nameCaptureInfo",
                    c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c9_i0);
    sf_mex_addfield(c9_m0, sf_mex_create("nameCaptureInfo", &c9_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c9_i0);
  }

  sf_mex_assign(&c9_nameCaptureInfo, c9_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c9_nameCaptureInfo);
  return c9_nameCaptureInfo;
}

static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  int32_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc9_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(int32_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c9_mxArrayOutData, c9_y, FALSE);
  return c9_mxArrayOutData;
}

static int32_T c9_c_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  int32_T c9_y;
  int32_T c9_i1;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_i1, 1, 6, 0U, 0, 0U, 0);
  c9_y = c9_i1;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_b_sfEvent;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  int32_T c9_y;
  SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc9_VectorCtrl_AsynchronousInstanceStruct *)
    chartInstanceVoid;
  c9_b_sfEvent = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_sfEvent),
    &c9_thisId);
  sf_mex_destroy(&c9_b_sfEvent);
  *(int32_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static uint8_T c9_d_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct *
  chartInstance, const mxArray *c9_b_is_active_c9_VectorCtrl_Asynchronous, const
  char_T *c9_identifier)
{
  uint8_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c9_b_is_active_c9_VectorCtrl_Asynchronous), &c9_thisId);
  sf_mex_destroy(&c9_b_is_active_c9_VectorCtrl_Asynchronous);
  return c9_y;
}

static uint8_T c9_e_emlrt_marshallIn(SFc9_VectorCtrl_AsynchronousInstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  uint8_T c9_y;
  uint8_T c9_u0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_u0, 1, 3, 0U, 0, 0U, 0);
  c9_y = c9_u0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void init_dsm_address_info(SFc9_VectorCtrl_AsynchronousInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c9_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3732150062U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2358286437U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(390906088U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(226983478U);
}

mxArray *sf_c9_VectorCtrl_Asynchronous_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("84vBggreRLxcZyANWoEMWF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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

static const mxArray *sf_get_sim_state_info_c9_VectorCtrl_Asynchronous(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"Vd\",},{M[1],M[7],T\"Vq\",},{M[8],M[0],T\"is_active_c9_VectorCtrl_Asynchronous\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_VectorCtrl_Asynchronous_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
    chartInstance = (SFc9_VectorCtrl_AsynchronousInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_VectorCtrl_AsynchronousMachineNumber_,
           9,
           1,
           1,
           6,
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
          _SFD_SET_DATA_PROPS(1,2,0,1,"Vd");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Vbeta");
          _SFD_SET_DATA_PROPS(3,2,0,1,"Vq");
          _SFD_SET_DATA_PROPS(4,1,1,0,"sinwt");
          _SFD_SET_DATA_PROPS(5,1,1,0,"coswt");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,131);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)c9_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)c9_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c9_Valpha;
          real_T *c9_Vd;
          real_T *c9_Vbeta;
          real_T *c9_Vq;
          real_T *c9_sinwt;
          real_T *c9_coswt;
          c9_coswt = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c9_sinwt = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c9_Vq = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c9_Vbeta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c9_Vd = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c9_Valpha = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c9_Valpha);
          _SFD_SET_DATA_VALUE_PTR(1U, c9_Vd);
          _SFD_SET_DATA_VALUE_PTR(2U, c9_Vbeta);
          _SFD_SET_DATA_VALUE_PTR(3U, c9_Vq);
          _SFD_SET_DATA_VALUE_PTR(4U, c9_sinwt);
          _SFD_SET_DATA_VALUE_PTR(5U, c9_coswt);
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
  return "DCheLWjzwrx33szjjjYCYE";
}

static void sf_opaque_initialize_c9_VectorCtrl_Asynchronous(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc9_VectorCtrl_AsynchronousInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c9_VectorCtrl_Asynchronous
    ((SFc9_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
  initialize_c9_VectorCtrl_Asynchronous
    ((SFc9_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c9_VectorCtrl_Asynchronous(void *chartInstanceVar)
{
  enable_c9_VectorCtrl_Asynchronous((SFc9_VectorCtrl_AsynchronousInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c9_VectorCtrl_Asynchronous(void *chartInstanceVar)
{
  disable_c9_VectorCtrl_Asynchronous((SFc9_VectorCtrl_AsynchronousInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c9_VectorCtrl_Asynchronous(void *chartInstanceVar)
{
  sf_c9_VectorCtrl_Asynchronous((SFc9_VectorCtrl_AsynchronousInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c9_VectorCtrl_Asynchronous
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c9_VectorCtrl_Asynchronous
    ((SFc9_VectorCtrl_AsynchronousInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_VectorCtrl_Asynchronous();/* state var info */
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

extern void sf_internal_set_sim_state_c9_VectorCtrl_Asynchronous(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_VectorCtrl_Asynchronous();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c9_VectorCtrl_Asynchronous
    ((SFc9_VectorCtrl_AsynchronousInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c9_VectorCtrl_Asynchronous
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c9_VectorCtrl_Asynchronous(S);
}

static void sf_opaque_set_sim_state_c9_VectorCtrl_Asynchronous(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c9_VectorCtrl_Asynchronous(S, st);
}

static void sf_opaque_terminate_c9_VectorCtrl_Asynchronous(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_VectorCtrl_AsynchronousInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c9_VectorCtrl_Asynchronous
      ((SFc9_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_VectorCtrl_Asynchronous_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc9_VectorCtrl_Asynchronous
    ((SFc9_VectorCtrl_AsynchronousInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_VectorCtrl_Asynchronous(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_VectorCtrl_Asynchronous
      ((SFc9_VectorCtrl_AsynchronousInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c9_VectorCtrl_Asynchronous(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_VectorCtrl_Asynchronous_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      9);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,9,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,9,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,9,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,9,2);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,9);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1309752666U));
  ssSetChecksum1(S,(3999896337U));
  ssSetChecksum2(S,(237466416U));
  ssSetChecksum3(S,(2354156163U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c9_VectorCtrl_Asynchronous(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c9_VectorCtrl_Asynchronous(SimStruct *S)
{
  SFc9_VectorCtrl_AsynchronousInstanceStruct *chartInstance;
  chartInstance = (SFc9_VectorCtrl_AsynchronousInstanceStruct *)malloc(sizeof
    (SFc9_VectorCtrl_AsynchronousInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc9_VectorCtrl_AsynchronousInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.mdlStart = mdlStart_c9_VectorCtrl_Asynchronous;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c9_VectorCtrl_Asynchronous;
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

void c9_VectorCtrl_Asynchronous_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c9_VectorCtrl_Asynchronous(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_VectorCtrl_Asynchronous(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_VectorCtrl_Asynchronous(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_VectorCtrl_Asynchronous_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
