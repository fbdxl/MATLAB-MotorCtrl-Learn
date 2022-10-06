/* Include files */

#include "blascompat32.h"
#include "Vector_Control_SVPWM_encoderless_learn_sfun.h"
#include "c3_Vector_Control_SVPWM_encoderless_learn.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Vector_Control_SVPWM_encoderless_learn_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c3_debug_family_names[16] = { "Ts", "Udc", "X", "Y", "Z",
  "a", "b", "nargin", "nargout", "Ux", "Uy", "Sn", "UDC", "T1", "T2", "T0" };

/* Function Declarations */
static void initialize_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void initialize_params_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void enable_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void disable_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_Vector_Control_SVPWM_encoderless_lea
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_st);
static void finalize_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void sf_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void c3_chartstep_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void initSimStructsc3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static real_T c3_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_T0, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_c_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static uint8_T c3_d_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_b_is_active_c3_Vector_Control_SVPWM_encoderless_learn,
   const char_T *c3_identifier);
static uint8_T c3_e_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_is_active_c3_Vector_Control_SVPWM_encoderless_learn = 0U;
}

static void initialize_params_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static void enable_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c3_update_debugger_state_c3_Vector_Control_SVPWM_encoderless_lea
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_u;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  real_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  real_T c3_c_hoistedGlobal;
  real_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  uint8_T c3_d_hoistedGlobal;
  uint8_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  real_T *c3_T0;
  real_T *c3_T1;
  real_T *c3_T2;
  c3_T0 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_T2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_T1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(4), FALSE);
  c3_hoistedGlobal = *c3_T0;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *c3_T1;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *c3_T2;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal =
    chartInstance->c3_is_active_c3_Vector_Control_SVPWM_encoderless_learn;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  sf_mex_assign(&c3_st, c3_y, FALSE);
  return c3_st;
}

static void set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T *c3_T0;
  real_T *c3_T1;
  real_T *c3_T2;
  c3_T0 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_T2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_T1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c3_doneDoubleBufferReInit = TRUE;
  c3_u = sf_mex_dup(c3_st);
  *c3_T0 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 0)),
    "T0");
  *c3_T1 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
    "T1");
  *c3_T2 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 2)),
    "T2");
  chartInstance->c3_is_active_c3_Vector_Control_SVPWM_encoderless_learn =
    c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 3)),
    "is_active_c3_Vector_Control_SVPWM_encoderless_learn");
  sf_mex_destroy(&c3_u);
  c3_update_debugger_state_c3_Vector_Control_SVPWM_encoderless_lea(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void finalize_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static void sf_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  real_T *c3_Ux;
  real_T *c3_Uy;
  real_T *c3_Sn;
  real_T *c3_T1;
  real_T *c3_T2;
  real_T *c3_T0;
  real_T *c3_UDC;
  c3_UDC = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_T0 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_T2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_T1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_Sn = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_Uy = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_Ux = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c3_Ux, 0U);
  _SFD_DATA_RANGE_CHECK(*c3_Uy, 1U);
  _SFD_DATA_RANGE_CHECK(*c3_Sn, 2U);
  _SFD_DATA_RANGE_CHECK(*c3_T1, 3U);
  _SFD_DATA_RANGE_CHECK(*c3_T2, 4U);
  _SFD_DATA_RANGE_CHECK(*c3_T0, 5U);
  _SFD_DATA_RANGE_CHECK(*c3_UDC, 6U);
  chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_Vector_Control_SVPWM_encoderless_learn(chartInstance);
  sf_debug_check_for_state_inconsistency
    (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c3_chartstep_c3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
  real_T c3_hoistedGlobal;
  real_T c3_b_hoistedGlobal;
  real_T c3_c_hoistedGlobal;
  real_T c3_d_hoistedGlobal;
  real_T c3_Ux;
  real_T c3_Uy;
  real_T c3_Sn;
  real_T c3_UDC;
  uint32_T c3_debug_family_var_map[16];
  real_T c3_Ts;
  real_T c3_Udc;
  real_T c3_X;
  real_T c3_Y;
  real_T c3_Z;
  real_T c3_a;
  real_T c3_b;
  real_T c3_nargin = 4.0;
  real_T c3_nargout = 3.0;
  real_T c3_T1;
  real_T c3_T2;
  real_T c3_T0;
  real_T c3_B;
  real_T c3_y;
  real_T c3_b_y;
  real_T c3_c_y;
  real_T c3_b_a;
  real_T c3_b_b;
  real_T c3_b_B;
  real_T c3_d_y;
  real_T c3_e_y;
  real_T c3_f_y;
  real_T c3_c_b;
  real_T c3_g_y;
  real_T c3_c_a;
  real_T c3_d_b;
  real_T c3_c_B;
  real_T c3_h_y;
  real_T c3_i_y;
  real_T c3_j_y;
  real_T c3_e_b;
  real_T c3_k_y;
  real_T c3_d_a;
  real_T c3_f_b;
  real_T c3_e_a;
  real_T c3_l_y;
  real_T c3_A;
  real_T c3_d_B;
  real_T c3_x;
  real_T c3_m_y;
  real_T c3_b_x;
  real_T c3_n_y;
  real_T c3_f_a;
  real_T c3_o_y;
  real_T c3_b_A;
  real_T c3_e_B;
  real_T c3_c_x;
  real_T c3_p_y;
  real_T c3_d_x;
  real_T c3_q_y;
  real_T *c3_b_T0;
  real_T *c3_b_T2;
  real_T *c3_b_T1;
  real_T *c3_b_UDC;
  real_T *c3_b_Sn;
  real_T *c3_b_Uy;
  real_T *c3_b_Ux;
  c3_b_UDC = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_b_T0 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_b_T2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_b_T1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_b_Sn = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_b_Uy = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_b_Ux = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  c3_hoistedGlobal = *c3_b_Ux;
  c3_b_hoistedGlobal = *c3_b_Uy;
  c3_c_hoistedGlobal = *c3_b_Sn;
  c3_d_hoistedGlobal = *c3_b_UDC;
  c3_Ux = c3_hoistedGlobal;
  c3_Uy = c3_b_hoistedGlobal;
  c3_Sn = c3_c_hoistedGlobal;
  c3_UDC = c3_d_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 16U, 16U, c3_debug_family_names,
    c3_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c3_Ts, 0U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_Udc, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_X, 2U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_Y, 3U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_Z, 4U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_a, 5U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_b, 6U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_nargin, 7U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_nargout, 8U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c3_Ux, 9U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Uy, 10U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_Sn, 11U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c3_UDC, 12U, c3_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c3_T1, 13U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_T2, 14U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c3_T0, 15U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 2);
  c3_Ts = 0.0002;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 3);
  c3_Udc = c3_UDC;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 5);
  c3_B = c3_Udc;
  c3_y = c3_B;
  c3_b_y = c3_y;
  c3_c_y = 0.00034641016151377546 / c3_b_y;
  c3_b_a = c3_c_y;
  c3_b_b = c3_Uy;
  c3_X = c3_b_a * c3_b_b;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 6);
  c3_b_B = c3_Udc;
  c3_d_y = c3_b_B;
  c3_e_y = c3_d_y;
  c3_f_y = 0.00017320508075688773 / c3_e_y;
  c3_c_b = c3_Ux;
  c3_g_y = 1.7320508075688772 * c3_c_b;
  c3_c_a = c3_f_y;
  c3_d_b = c3_g_y + c3_Uy;
  c3_Y = c3_c_a * c3_d_b;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 7);
  c3_c_B = c3_Udc;
  c3_h_y = c3_c_B;
  c3_i_y = c3_h_y;
  c3_j_y = 0.00017320508075688773 / c3_i_y;
  c3_e_b = c3_Ux;
  c3_k_y = -1.7320508075688772 * c3_e_b;
  c3_d_a = c3_j_y;
  c3_f_b = c3_k_y + c3_Uy;
  c3_Z = c3_d_a * c3_f_b;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 9);
  if (CV_EML_IF(0, 1, 0, c3_Sn == 1.0)) {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 10);
    c3_T1 = -c3_Z;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 10);
    c3_T2 = c3_X;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 11);
    if (CV_EML_IF(0, 1, 1, c3_Sn == 2.0)) {
      _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 12);
      c3_T1 = c3_Z;
      _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 12);
      c3_T2 = c3_Y;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 13);
      if (CV_EML_IF(0, 1, 2, c3_Sn == 3.0)) {
        _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 14);
        c3_T1 = c3_X;
        _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 14);
        c3_T2 = -c3_Y;
      } else {
        _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 15);
        if (CV_EML_IF(0, 1, 3, c3_Sn == 4.0)) {
          _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 16);
          c3_T1 = -c3_X;
          _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 16);
          c3_T2 = c3_Z;
        } else {
          _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 17);
          if (CV_EML_IF(0, 1, 4, c3_Sn == 5.0)) {
            _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 18);
            c3_T1 = -c3_Y;
            _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 18);
            c3_T2 = -c3_Z;
          } else {
            _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 19);
            c3_T1 = c3_Y;
            _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 19);
            c3_T2 = -c3_X;
          }
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 22);
  if (CV_EML_IF(0, 1, 5, c3_T1 + c3_T2 > c3_Ts)) {
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 23);
    c3_a = c3_T1;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 23);
    c3_b = c3_T2;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 24);
    c3_e_a = c3_a;
    c3_l_y = c3_e_a * 0.0002;
    c3_A = c3_l_y;
    c3_d_B = c3_a + c3_b;
    c3_x = c3_A;
    c3_m_y = c3_d_B;
    c3_b_x = c3_x;
    c3_n_y = c3_m_y;
    c3_T1 = c3_b_x / c3_n_y;
    _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 25);
    c3_f_a = c3_b;
    c3_o_y = c3_f_a * 0.0002;
    c3_b_A = c3_o_y;
    c3_e_B = c3_a + c3_b;
    c3_c_x = c3_b_A;
    c3_p_y = c3_e_B;
    c3_d_x = c3_c_x;
    c3_q_y = c3_p_y;
    c3_T2 = c3_d_x / c3_q_y;
  }

  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, 28);
  c3_T0 = (c3_Ts - c3_T1) - c3_T2;
  _SFD_EML_CALL(0U, chartInstance->c3_sfEvent, -28);
  sf_debug_symbol_scope_pop();
  *c3_b_T1 = c3_T1;
  *c3_b_T2 = c3_T2;
  *c3_b_T0 = c3_T0;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
}

static void initSimStructsc3_Vector_Control_SVPWM_encoderless_learn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static real_T c3_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_T0, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_T0), &c3_thisId);
  sf_mex_destroy(&c3_T0);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_T0;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c3_T0 = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_T0), &c3_thisId);
  sf_mex_destroy(&c3_T0);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray
  *sf_c3_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c3_nameCaptureInfo;
  c3_ResolvedFunctionInfo c3_info[7];
  c3_ResolvedFunctionInfo (*c3_b_info)[7];
  const mxArray *c3_m0 = NULL;
  int32_T c3_i0;
  c3_ResolvedFunctionInfo *c3_r0;
  c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  c3_b_info = (c3_ResolvedFunctionInfo (*)[7])c3_info;
  (*c3_b_info)[0].context = "";
  (*c3_b_info)[0].name = "mrdivide";
  (*c3_b_info)[0].dominantType = "double";
  (*c3_b_info)[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c3_b_info)[0].fileTimeLo = 1325098938U;
  (*c3_b_info)[0].fileTimeHi = 0U;
  (*c3_b_info)[0].mFileTimeLo = 1319708366U;
  (*c3_b_info)[0].mFileTimeHi = 0U;
  (*c3_b_info)[1].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*c3_b_info)[1].name = "rdivide";
  (*c3_b_info)[1].dominantType = "double";
  (*c3_b_info)[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c3_b_info)[1].fileTimeLo = 1286797244U;
  (*c3_b_info)[1].fileTimeHi = 0U;
  (*c3_b_info)[1].mFileTimeLo = 0U;
  (*c3_b_info)[1].mFileTimeHi = 0U;
  (*c3_b_info)[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*c3_b_info)[2].name = "eml_div";
  (*c3_b_info)[2].dominantType = "double";
  (*c3_b_info)[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*c3_b_info)[2].fileTimeLo = 1313326210U;
  (*c3_b_info)[2].fileTimeHi = 0U;
  (*c3_b_info)[2].mFileTimeLo = 0U;
  (*c3_b_info)[2].mFileTimeHi = 0U;
  (*c3_b_info)[3].context = "";
  (*c3_b_info)[3].name = "sqrt";
  (*c3_b_info)[3].dominantType = "double";
  (*c3_b_info)[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c3_b_info)[3].fileTimeLo = 1286797152U;
  (*c3_b_info)[3].fileTimeHi = 0U;
  (*c3_b_info)[3].mFileTimeLo = 0U;
  (*c3_b_info)[3].mFileTimeHi = 0U;
  (*c3_b_info)[4].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c3_b_info)[4].name = "eml_error";
  (*c3_b_info)[4].dominantType = "char";
  (*c3_b_info)[4].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_error.m";
  (*c3_b_info)[4].fileTimeLo = 1305296400U;
  (*c3_b_info)[4].fileTimeHi = 0U;
  (*c3_b_info)[4].mFileTimeLo = 0U;
  (*c3_b_info)[4].mFileTimeHi = 0U;
  (*c3_b_info)[5].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  (*c3_b_info)[5].name = "eml_scalar_sqrt";
  (*c3_b_info)[5].dominantType = "double";
  (*c3_b_info)[5].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  (*c3_b_info)[5].fileTimeLo = 1286797138U;
  (*c3_b_info)[5].fileTimeHi = 0U;
  (*c3_b_info)[5].mFileTimeLo = 0U;
  (*c3_b_info)[5].mFileTimeHi = 0U;
  (*c3_b_info)[6].context = "";
  (*c3_b_info)[6].name = "mtimes";
  (*c3_b_info)[6].dominantType = "double";
  (*c3_b_info)[6].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c3_b_info)[6].fileTimeLo = 1289494492U;
  (*c3_b_info)[6].fileTimeHi = 0U;
  (*c3_b_info)[6].mFileTimeLo = 0U;
  (*c3_b_info)[6].mFileTimeHi = 0U;
  sf_mex_assign(&c3_m0, sf_mex_createstruct("nameCaptureInfo", 1, 7), FALSE);
  for (c3_i0 = 0; c3_i0 < 7; c3_i0++) {
    c3_r0 = &c3_info[c3_i0];
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c3_r0->context)), "context", "nameCaptureInfo",
                    c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c3_r0->name)), "name", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c3_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", c3_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c3_r0->resolved)), "resolved", "nameCaptureInfo",
                    c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c3_i0);
    sf_mex_addfield(c3_m0, sf_mex_create("nameCaptureInfo", &c3_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c3_i0);
  }

  sf_mex_assign(&c3_nameCaptureInfo, c3_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c3_nameCaptureInfo);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, FALSE);
  return c3_mxArrayOutData;
}

static int32_T c3_c_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i1;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i1, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static uint8_T c3_d_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_b_is_active_c3_Vector_Control_SVPWM_encoderless_learn,
   const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_is_active_c3_Vector_Control_SVPWM_encoderless_learn), &c3_thisId);
  sf_mex_destroy(&c3_b_is_active_c3_Vector_Control_SVPWM_encoderless_learn);
  return c3_y;
}

static uint8_T c3_e_emlrt_marshallIn
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance,
   const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info
  (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c3_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1950029793U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2836796700U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3083756051U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3365017226U);
}

mxArray *sf_c3_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("Xr3Fvf5oEJdcVL6jswdH2G");
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
  *sf_get_sim_state_info_c3_Vector_Control_SVPWM_encoderless_learn(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[9],T\"T0\",},{M[1],M[7],T\"T1\",},{M[1],M[8],T\"T2\",},{M[8],M[0],T\"is_active_c3_Vector_Control_SVPWM_encoderless_learn\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_Vector_Control_SVPWM_encoderless_learn_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
    chartInstance = (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,
           3,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"Ux");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Uy");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Sn");
          _SFD_SET_DATA_PROPS(3,2,0,1,"T1");
          _SFD_SET_DATA_PROPS(4,2,0,1,"T2");
          _SFD_SET_DATA_PROPS(5,2,0,1,"T0");
          _SFD_SET_DATA_PROPS(6,1,1,0,"UDC");
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
        _SFD_CV_INIT_EML(0,1,1,6,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,424);
        _SFD_CV_INIT_EML_IF(0,1,0,152,160,177,317);
        _SFD_CV_INIT_EML_IF(0,1,1,177,189,206,317);
        _SFD_CV_INIT_EML_IF(0,1,2,206,218,236,317);
        _SFD_CV_INIT_EML_IF(0,1,3,236,248,266,317);
        _SFD_CV_INIT_EML_IF(0,1,4,266,278,297,317);
        _SFD_CV_INIT_EML_IF(0,1,5,323,334,-1,391);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c3_Ux;
          real_T *c3_Uy;
          real_T *c3_Sn;
          real_T *c3_T1;
          real_T *c3_T2;
          real_T *c3_T0;
          real_T *c3_UDC;
          c3_UDC = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c3_T0 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c3_T2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c3_T1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c3_Sn = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c3_Uy = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c3_Ux = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_Ux);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_Uy);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_Sn);
          _SFD_SET_DATA_VALUE_PTR(3U, c3_T1);
          _SFD_SET_DATA_VALUE_PTR(4U, c3_T2);
          _SFD_SET_DATA_VALUE_PTR(5U, c3_T0);
          _SFD_SET_DATA_VALUE_PTR(6U, c3_UDC);
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
  return "ijvyB0fbWBB8VqKpBnI6GB";
}

static void sf_opaque_initialize_c3_Vector_Control_SVPWM_encoderless_learn(void *
  chartInstanceVar)
{
  chart_debug_initialization
    (((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
  initialize_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c3_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  enable_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c3_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  disable_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c3_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  sf_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c3_Vector_Control_SVPWM_encoderless_learn();/* state var info */
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

extern void sf_internal_set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
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
    sf_get_sim_state_info_c3_Vector_Control_SVPWM_encoderless_learn();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn(SimStruct* S)
{
  return sf_internal_get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn(S);
}

static void sf_opaque_set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn(S, st);
}

static void sf_opaque_terminate_c3_Vector_Control_SVPWM_encoderless_learn(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_Vector_Control_SVPWM_encoderless_learn
      ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
       chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_Vector_Control_SVPWM_encoderless_learn_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_Vector_Control_SVPWM_encoderless_learn
    ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_Vector_Control_SVPWM_encoderless_learn
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_Vector_Control_SVPWM_encoderless_learn
      ((SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_Vector_Control_SVPWM_encoderless_learn(SimStruct
  *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_Vector_Control_SVPWM_encoderless_learn_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,3,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,3);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2645618609U));
  ssSetChecksum1(S,(2483915193U));
  ssSetChecksum2(S,(337486819U));
  ssSetChecksum3(S,(721423750U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_Vector_Control_SVPWM_encoderless_learn(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c3_Vector_Control_SVPWM_encoderless_learn(SimStruct *S)
{
  SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *chartInstance;
  chartInstance = (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct *)
    malloc(sizeof(SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc3_Vector_Control_SVPWM_encoderless_learnInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c3_Vector_Control_SVPWM_encoderless_learn;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_Vector_Control_SVPWM_encoderless_learn;
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

void c3_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_Vector_Control_SVPWM_encoderless_learn(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_Vector_Control_SVPWM_encoderless_learn(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_Vector_Control_SVPWM_encoderless_learn(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_Vector_Control_SVPWM_encoderless_learn_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
