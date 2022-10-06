/* Include files */

#include "blascompat32.h"
#include "Vector_Control_SVPWM_encoderless_sfun.h"
#include "c1_Vector_Control_SVPWM_encoderless.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Vector_Control_SVPWM_encoderless_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c1_debug_family_names[6] = { "theta", "nargin", "nargout",
  "Ux", "Uy", "Sn" };

/* Function Declarations */
static void initialize_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void initialize_params_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void enable_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void disable_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void set_sim_state_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_st);
static void finalize_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void sf_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void initSimStructsc1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static real_T c1_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_Sn, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_c_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint8_T c1_d_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_b_is_active_c1_Vector_Control_SVPWM_encoderless, const char_T
   *c1_identifier);
static uint8_T c1_e_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void init_dsm_address_info
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_is_active_c1_Vector_Control_SVPWM_encoderless = 0U;
}

static void initialize_params_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
}

static void enable_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  uint8_T c1_b_hoistedGlobal;
  uint8_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  real_T *c1_Sn;
  c1_Sn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(2), FALSE);
  c1_hoistedGlobal = *c1_Sn;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal =
    chartInstance->c1_is_active_c1_Vector_Control_SVPWM_encoderless;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  sf_mex_assign(&c1_st, c1_y, FALSE);
  return c1_st;
}

static void set_sim_state_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_Sn;
  c1_Sn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c1_doneDoubleBufferReInit = TRUE;
  c1_u = sf_mex_dup(c1_st);
  *c1_Sn = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
    "Sn");
  chartInstance->c1_is_active_c1_Vector_Control_SVPWM_encoderless =
    c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
    "is_active_c1_Vector_Control_SVPWM_encoderless");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_Vector_Control_SVPWM_encoderless(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
}

static void sf_c1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
  real_T c1_hoistedGlobal;
  real_T c1_b_hoistedGlobal;
  real_T c1_Ux;
  real_T c1_Uy;
  uint32_T c1_debug_family_var_map[6];
  real_T c1_theta;
  real_T c1_nargin = 2.0;
  real_T c1_nargout = 1.0;
  real_T c1_Sn;
  real_T c1_y;
  real_T c1_x;
  real_T c1_b_y;
  real_T c1_b_x;
  real_T c1_r;
  real_T c1_a;
  real_T c1_c_y;
  real_T c1_A;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T *c1_b_Uy;
  real_T *c1_b_Ux;
  real_T *c1_b_Sn;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T guard4 = FALSE;
  boolean_T guard5 = FALSE;
  c1_b_Uy = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_b_Ux = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_b_Sn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c1_b_Sn, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_b_Ux, 1U);
  _SFD_DATA_RANGE_CHECK(*c1_b_Uy, 2U);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  c1_hoistedGlobal = *c1_b_Ux;
  c1_b_hoistedGlobal = *c1_b_Uy;
  c1_Ux = c1_hoistedGlobal;
  c1_Uy = c1_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 6U, 6U, c1_debug_family_names,
    c1_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c1_theta, 0U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c1_nargin, 1U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c1_nargout, 2U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c1_Ux, 3U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c1_Uy, 4U, c1_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c1_Sn, 5U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 2);
  c1_y = c1_Uy;
  c1_x = c1_Ux;
  c1_b_y = c1_y;
  c1_b_x = c1_x;
  c1_r = muDoubleScalarAtan2(c1_b_y, c1_b_x);
  c1_a = c1_r;
  c1_c_y = c1_a * 180.0;
  c1_A = c1_c_y;
  c1_c_x = c1_A;
  c1_d_x = c1_c_x;
  c1_theta = c1_d_x / 3.1415926535897931;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 3);
  guard1 = FALSE;
  if (CV_EML_COND(0, 1, 0, c1_theta >= 0.0)) {
    if (CV_EML_COND(0, 1, 1, c1_theta < 60.0)) {
      CV_EML_MCDC(0, 1, 0, TRUE);
      CV_EML_IF(0, 1, 0, TRUE);
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 4);
      c1_Sn = 1.0;
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    CV_EML_MCDC(0, 1, 0, FALSE);
    CV_EML_IF(0, 1, 0, FALSE);
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 5);
    guard2 = FALSE;
    if (CV_EML_COND(0, 1, 2, c1_theta >= 60.0)) {
      if (CV_EML_COND(0, 1, 3, c1_theta < 120.0)) {
        CV_EML_MCDC(0, 1, 1, TRUE);
        CV_EML_IF(0, 1, 1, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 6);
        c1_Sn = 2.0;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      CV_EML_MCDC(0, 1, 1, FALSE);
      CV_EML_IF(0, 1, 1, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 7);
      guard3 = FALSE;
      if (CV_EML_COND(0, 1, 4, c1_theta >= 120.0)) {
        if (CV_EML_COND(0, 1, 5, c1_theta < 180.0)) {
          CV_EML_MCDC(0, 1, 2, TRUE);
          CV_EML_IF(0, 1, 2, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 8);
          c1_Sn = 3.0;
        } else {
          guard3 = TRUE;
        }
      } else {
        guard3 = TRUE;
      }

      if (guard3 == TRUE) {
        CV_EML_MCDC(0, 1, 2, FALSE);
        CV_EML_IF(0, 1, 2, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 9);
        guard4 = FALSE;
        if (CV_EML_COND(0, 1, 6, c1_theta >= -180.0)) {
          if (CV_EML_COND(0, 1, 7, c1_theta < -120.0)) {
            CV_EML_MCDC(0, 1, 3, TRUE);
            CV_EML_IF(0, 1, 3, TRUE);
            _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 10);
            c1_Sn = 4.0;
          } else {
            guard4 = TRUE;
          }
        } else {
          guard4 = TRUE;
        }

        if (guard4 == TRUE) {
          CV_EML_MCDC(0, 1, 3, FALSE);
          CV_EML_IF(0, 1, 3, FALSE);
          _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 11);
          guard5 = FALSE;
          if (CV_EML_COND(0, 1, 8, c1_theta >= -120.0)) {
            if (CV_EML_COND(0, 1, 9, c1_theta < -60.0)) {
              CV_EML_MCDC(0, 1, 4, TRUE);
              CV_EML_IF(0, 1, 4, TRUE);
              _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 12);
              c1_Sn = 5.0;
            } else {
              guard5 = TRUE;
            }
          } else {
            guard5 = TRUE;
          }

          if (guard5 == TRUE) {
            CV_EML_MCDC(0, 1, 4, FALSE);
            CV_EML_IF(0, 1, 4, FALSE);
            _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 13);
            c1_Sn = 6.0;
          }
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -13);
  sf_debug_symbol_scope_pop();
  *c1_b_Sn = c1_Sn;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  sf_debug_check_for_state_inconsistency
    (_Vector_Control_SVPWM_encoderlessMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
}

static void initSimStructsc1_Vector_Control_SVPWM_encoderless
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance;
  chartInstance = (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *)
    chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static real_T c1_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_Sn, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_Sn), &c1_thisId);
  sf_mex_destroy(&c1_Sn);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d0;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_Sn;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance;
  chartInstance = (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *)
    chartInstanceVoid;
  c1_Sn = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_Sn), &c1_thisId);
  sf_mex_destroy(&c1_Sn);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

const mxArray
  *sf_c1_Vector_Control_SVPWM_encoderless_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo;
  c1_ResolvedFunctionInfo c1_info[8];
  c1_ResolvedFunctionInfo (*c1_b_info)[8];
  const mxArray *c1_m0 = NULL;
  int32_T c1_i0;
  c1_ResolvedFunctionInfo *c1_r0;
  c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  c1_b_info = (c1_ResolvedFunctionInfo (*)[8])c1_info;
  (*c1_b_info)[0].context = "";
  (*c1_b_info)[0].name = "atan2";
  (*c1_b_info)[0].dominantType = "double";
  (*c1_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/atan2.m";
  (*c1_b_info)[0].fileTimeLo = 1286797104U;
  (*c1_b_info)[0].fileTimeHi = 0U;
  (*c1_b_info)[0].mFileTimeLo = 0U;
  (*c1_b_info)[0].mFileTimeHi = 0U;
  (*c1_b_info)[1].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/atan2.m";
  (*c1_b_info)[1].name = "eml_scalar_eg";
  (*c1_b_info)[1].dominantType = "double";
  (*c1_b_info)[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  (*c1_b_info)[1].fileTimeLo = 1286797196U;
  (*c1_b_info)[1].fileTimeHi = 0U;
  (*c1_b_info)[1].mFileTimeLo = 0U;
  (*c1_b_info)[1].mFileTimeHi = 0U;
  (*c1_b_info)[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/atan2.m";
  (*c1_b_info)[2].name = "eml_scalexp_alloc";
  (*c1_b_info)[2].dominantType = "double";
  (*c1_b_info)[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  (*c1_b_info)[2].fileTimeLo = 1286797196U;
  (*c1_b_info)[2].fileTimeHi = 0U;
  (*c1_b_info)[2].mFileTimeLo = 0U;
  (*c1_b_info)[2].mFileTimeHi = 0U;
  (*c1_b_info)[3].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/atan2.m";
  (*c1_b_info)[3].name = "eml_scalar_atan2";
  (*c1_b_info)[3].dominantType = "double";
  (*c1_b_info)[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_atan2.m";
  (*c1_b_info)[3].fileTimeLo = 1286797120U;
  (*c1_b_info)[3].fileTimeHi = 0U;
  (*c1_b_info)[3].mFileTimeLo = 0U;
  (*c1_b_info)[3].mFileTimeHi = 0U;
  (*c1_b_info)[4].context = "";
  (*c1_b_info)[4].name = "mtimes";
  (*c1_b_info)[4].dominantType = "double";
  (*c1_b_info)[4].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[4].fileTimeLo = 1289494492U;
  (*c1_b_info)[4].fileTimeHi = 0U;
  (*c1_b_info)[4].mFileTimeLo = 0U;
  (*c1_b_info)[4].mFileTimeHi = 0U;
  (*c1_b_info)[5].context = "";
  (*c1_b_info)[5].name = "mrdivide";
  (*c1_b_info)[5].dominantType = "double";
  (*c1_b_info)[5].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c1_b_info)[5].fileTimeLo = 1325098938U;
  (*c1_b_info)[5].fileTimeHi = 0U;
  (*c1_b_info)[5].mFileTimeLo = 1319708366U;
  (*c1_b_info)[5].mFileTimeHi = 0U;
  (*c1_b_info)[6].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c1_b_info)[6].name = "rdivide";
  (*c1_b_info)[6].dominantType = "double";
  (*c1_b_info)[6].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c1_b_info)[6].fileTimeLo = 1286797244U;
  (*c1_b_info)[6].fileTimeHi = 0U;
  (*c1_b_info)[6].mFileTimeLo = 0U;
  (*c1_b_info)[6].mFileTimeHi = 0U;
  (*c1_b_info)[7].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c1_b_info)[7].name = "eml_div";
  (*c1_b_info)[7].dominantType = "double";
  (*c1_b_info)[7].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c1_b_info)[7].fileTimeLo = 1313326210U;
  (*c1_b_info)[7].fileTimeHi = 0U;
  (*c1_b_info)[7].mFileTimeLo = 0U;
  (*c1_b_info)[7].mFileTimeHi = 0U;
  sf_mex_assign(&c1_m0, sf_mex_createstruct("nameCaptureInfo", 1, 8), FALSE);
  for (c1_i0 = 0; c1_i0 < 8; c1_i0++) {
    c1_r0 = &c1_info[c1_i0];
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->context)), "context", "nameCaptureInfo",
                    c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c1_r0->name)), "name", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c1_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->resolved)), "resolved", "nameCaptureInfo",
                    c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c1_i0);
  }

  sf_mex_assign(&c1_nameCaptureInfo, c1_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance;
  chartInstance = (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *)
    chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, FALSE);
  return c1_mxArrayOutData;
}

static int32_T c1_c_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i1;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i1, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i1;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance;
  chartInstance = (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *)
    chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint8_T c1_d_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_b_is_active_c1_Vector_Control_SVPWM_encoderless, const char_T
   *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_Vector_Control_SVPWM_encoderless), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_Vector_Control_SVPWM_encoderless);
  return c1_y;
}

static uint8_T c1_e_emlrt_marshallIn
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance, const
   mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void init_dsm_address_info
  (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c1_Vector_Control_SVPWM_encoderless_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1770222320U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1422467642U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1381330330U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2169362196U);
}

mxArray *sf_c1_Vector_Control_SVPWM_encoderless_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("QZDEiQui440yM2E3BEcruE");
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

static const mxArray *sf_get_sim_state_info_c1_Vector_Control_SVPWM_encoderless
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[4],T\"Sn\",},{M[8],M[0],T\"is_active_c1_Vector_Control_SVPWM_encoderless\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_Vector_Control_SVPWM_encoderless_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance;
    chartInstance = (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Vector_Control_SVPWM_encoderlessMachineNumber_,
           1,
           1,
           1,
           3,
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
            (_Vector_Control_SVPWM_encoderlessMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Vector_Control_SVPWM_encoderlessMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_Vector_Control_SVPWM_encoderlessMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"Sn");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Ux");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Uy");
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
        _SFD_CV_INIT_EML(0,1,1,5,0,0,0,0,10,5);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,254);
        _SFD_CV_INIT_EML_IF(0,1,0,50,71,82,254);
        _SFD_CV_INIT_EML_IF(0,1,1,82,109,120,254);
        _SFD_CV_INIT_EML_IF(0,1,2,120,148,159,254);
        _SFD_CV_INIT_EML_IF(0,1,3,159,189,200,254);
        _SFD_CV_INIT_EML_IF(0,1,4,200,229,240,254);

        {
          static int condStart[] = { 53, 63 };

          static int condEnd[] = { 61, 71 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,53,71,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 89, 100 };

          static int condEnd[] = { 98, 109 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,89,109,2,2,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 127, 139 };

          static int condEnd[] = { 137, 148 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,127,148,2,4,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 166, 179 };

          static int condEnd[] = { 177, 189 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,3,166,189,2,6,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 207, 220 };

          static int condEnd[] = { 218, 229 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,4,207,229,2,8,&(condStart[0]),&(condEnd[0]),
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
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c1_Sn;
          real_T *c1_Ux;
          real_T *c1_Uy;
          c1_Uy = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_Ux = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c1_Sn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_Sn);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_Ux);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_Uy);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Vector_Control_SVPWM_encoderlessMachineNumber_,
         chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "WX8fwTh2gCYPscl7sVgGWH";
}

static void sf_opaque_initialize_c1_Vector_Control_SVPWM_encoderless(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar)
     ->S,0);
  initialize_params_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
  initialize_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_Vector_Control_SVPWM_encoderless(void
  *chartInstanceVar)
{
  enable_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_Vector_Control_SVPWM_encoderless(void
  *chartInstanceVar)
{
  disable_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_Vector_Control_SVPWM_encoderless(void
  *chartInstanceVar)
{
  sf_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c1_Vector_Control_SVPWM_encoderless(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_Vector_Control_SVPWM_encoderless
    ();                                /* state var info */
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

extern void sf_internal_set_sim_state_c1_Vector_Control_SVPWM_encoderless
  (SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_Vector_Control_SVPWM_encoderless
    ();                                /* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c1_Vector_Control_SVPWM_encoderless(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_Vector_Control_SVPWM_encoderless(S);
}

static void sf_opaque_set_sim_state_c1_Vector_Control_SVPWM_encoderless
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c1_Vector_Control_SVPWM_encoderless(S, st);
}

static void sf_opaque_terminate_c1_Vector_Control_SVPWM_encoderless(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_Vector_Control_SVPWM_encoderless
      ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Vector_Control_SVPWM_encoderless_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_Vector_Control_SVPWM_encoderless
    ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_Vector_Control_SVPWM_encoderless(SimStruct
  *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_Vector_Control_SVPWM_encoderless
      ((SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_Vector_Control_SVPWM_encoderless(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_Vector_Control_SVPWM_encoderless_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,1,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1028567582U));
  ssSetChecksum1(S,(1085571856U));
  ssSetChecksum2(S,(1407830977U));
  ssSetChecksum3(S,(3294844545U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_Vector_Control_SVPWM_encoderless(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_Vector_Control_SVPWM_encoderless(SimStruct *S)
{
  SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *chartInstance;
  chartInstance = (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct *)malloc
    (sizeof(SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc1_Vector_Control_SVPWM_encoderlessInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c1_Vector_Control_SVPWM_encoderless;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_Vector_Control_SVPWM_encoderless;
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

void c1_Vector_Control_SVPWM_encoderless_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_Vector_Control_SVPWM_encoderless(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_Vector_Control_SVPWM_encoderless(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_Vector_Control_SVPWM_encoderless(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_Vector_Control_SVPWM_encoderless_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
