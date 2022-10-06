/* Include files */

#include "blascompat32.h"
#include "ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_sfun.h"
#include "c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c4_debug_family_names[50] = { "Valfa", "Vbeta", "m",
  "Mswitchlow", "Mswitchhigh", "ModeswitchEnable", "signVa", "signVb", "signVc",
  "SignIa", "SignIb", "SignIc", "NoTemp", "Transfor", "MainSectorNo",
  "VdcBalanceFactorAct", "Vz", "Tmin", "Tdead", "TminAct", "SPWMCoef", "Taon",
  "Tbon", "Tcon", "signTa", "signTb", "signTc", "nargin", "nargout", "Ia", "Ib",
  "Ic", "Va", "Vb", "Vc", "VdcBalFactor", "Vdc", "Ts", "ModulateModeA",
  "ModulateModeB", "ModulateModeC", "TonAp", "TonA23", "TonAn", "TonBp",
  "TonB23", "TonBn", "TonCp", "TonC23", "TonCn" };

/* Function Declarations */
static void initialize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void initialize_params_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void enable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void disable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void c4_update_debugger_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_Wan
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static const mxArray
  *get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_st);
static void finalize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void c4_chartstep_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void initSimStructsc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static real_T c4_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_TonCn, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_c_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[6]);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static void c4_info_helper(c4_ResolvedFunctionInfo c4_info[15]);
static real_T c4_sqrt
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   real_T c4_x);
static void c4_eml_error
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static void c4_eml_scalar_eg
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static int32_T c4_d_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static uint8_T c4_e_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_b_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang,
   const char_T *c4_identifier);
static uint8_T c4_f_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_b_sqrt
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   real_T *c4_x);
static void init_dsm_address_info
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang = 0U;
}

static void initialize_params_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
}

static void enable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_update_debugger_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_Wan
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
}

static const mxArray
  *get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  real_T c4_hoistedGlobal;
  real_T c4_u;
  const mxArray *c4_b_y = NULL;
  real_T c4_b_hoistedGlobal;
  real_T c4_b_u;
  const mxArray *c4_c_y = NULL;
  real_T c4_c_hoistedGlobal;
  real_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  real_T c4_d_hoistedGlobal;
  real_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  real_T c4_e_hoistedGlobal;
  real_T c4_e_u;
  const mxArray *c4_f_y = NULL;
  real_T c4_f_hoistedGlobal;
  real_T c4_f_u;
  const mxArray *c4_g_y = NULL;
  real_T c4_g_hoistedGlobal;
  real_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  real_T c4_h_hoistedGlobal;
  real_T c4_h_u;
  const mxArray *c4_i_y = NULL;
  real_T c4_i_hoistedGlobal;
  real_T c4_i_u;
  const mxArray *c4_j_y = NULL;
  uint8_T c4_j_hoistedGlobal;
  uint8_T c4_j_u;
  const mxArray *c4_k_y = NULL;
  real_T *c4_TonA23;
  real_T *c4_TonAn;
  real_T *c4_TonAp;
  real_T *c4_TonB23;
  real_T *c4_TonBn;
  real_T *c4_TonBp;
  real_T *c4_TonC23;
  real_T *c4_TonCn;
  real_T *c4_TonCp;
  c4_TonCn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_TonC23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_TonCp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_TonBn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_TonB23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_TonBp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_TonAn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_TonA23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_TonAp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(10), FALSE);
  c4_hoistedGlobal = *c4_TonA23;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_b_hoistedGlobal = *c4_TonAn;
  c4_b_u = c4_b_hoistedGlobal;
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_c_hoistedGlobal = *c4_TonAp;
  c4_c_u = c4_c_hoistedGlobal;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_d_hoistedGlobal = *c4_TonB23;
  c4_d_u = c4_d_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_e_hoistedGlobal = *c4_TonBn;
  c4_e_u = c4_e_hoistedGlobal;
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_e_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_f_hoistedGlobal = *c4_TonBp;
  c4_f_u = c4_f_hoistedGlobal;
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_f_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_g_hoistedGlobal = *c4_TonC23;
  c4_g_u = c4_g_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_h_hoistedGlobal = *c4_TonCn;
  c4_h_u = c4_h_hoistedGlobal;
  c4_i_y = NULL;
  sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_h_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 7, c4_i_y);
  c4_i_hoistedGlobal = *c4_TonCp;
  c4_i_u = c4_i_hoistedGlobal;
  c4_j_y = NULL;
  sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_i_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 8, c4_j_y);
  c4_j_hoistedGlobal =
    chartInstance->c4_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  c4_j_u = c4_j_hoistedGlobal;
  c4_k_y = NULL;
  sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_j_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 9, c4_k_y);
  sf_mex_assign(&c4_st, c4_y, FALSE);
  return c4_st;
}

static void set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T *c4_TonA23;
  real_T *c4_TonAn;
  real_T *c4_TonAp;
  real_T *c4_TonB23;
  real_T *c4_TonBn;
  real_T *c4_TonBp;
  real_T *c4_TonC23;
  real_T *c4_TonCn;
  real_T *c4_TonCp;
  c4_TonCn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_TonC23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_TonCp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_TonBn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_TonB23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_TonBp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_TonAn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_TonA23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_TonAp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_doneDoubleBufferReInit = TRUE;
  c4_u = sf_mex_dup(c4_st);
  *c4_TonA23 = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    0)), "TonA23");
  *c4_TonAn = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    1)), "TonAn");
  *c4_TonAp = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    2)), "TonAp");
  *c4_TonB23 = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    3)), "TonB23");
  *c4_TonBn = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    4)), "TonBn");
  *c4_TonBp = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    5)), "TonBp");
  *c4_TonC23 = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    6)), "TonC23");
  *c4_TonCn = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    7)), "TonCn");
  *c4_TonCp = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    8)), "TonCp");
  chartInstance->c4_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang =
    c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 9)),
    "is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang");
  sf_mex_destroy(&c4_u);
  c4_update_debugger_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_Wan(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void finalize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
}

static void sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  real_T *c4_Ia;
  real_T *c4_Ib;
  real_T *c4_Ic;
  real_T *c4_TonAp;
  real_T *c4_TonA23;
  real_T *c4_TonAn;
  real_T *c4_TonBp;
  real_T *c4_TonB23;
  real_T *c4_Va;
  real_T *c4_Vb;
  real_T *c4_Vc;
  real_T *c4_VdcBalFactor;
  real_T *c4_Vdc;
  real_T *c4_Ts;
  real_T *c4_TonBn;
  real_T *c4_TonCp;
  real_T *c4_TonC23;
  real_T *c4_TonCn;
  real_T *c4_ModulateModeA;
  real_T *c4_ModulateModeB;
  real_T *c4_ModulateModeC;
  c4_ModulateModeC = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c4_ModulateModeB = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c4_ModulateModeA = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c4_TonCn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_TonC23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_TonCp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_TonBn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_Ts = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c4_Vdc = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c4_VdcBalFactor = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c4_Vc = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_Vb = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c4_Va = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_TonB23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_TonBp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_TonAn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_TonA23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_TonAp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_Ic = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_Ib = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_Ia = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c4_Ia, 0U);
  _SFD_DATA_RANGE_CHECK(*c4_Ib, 1U);
  _SFD_DATA_RANGE_CHECK(*c4_Ic, 2U);
  _SFD_DATA_RANGE_CHECK(*c4_TonAp, 3U);
  _SFD_DATA_RANGE_CHECK(*c4_TonA23, 4U);
  _SFD_DATA_RANGE_CHECK(*c4_TonAn, 5U);
  _SFD_DATA_RANGE_CHECK(*c4_TonBp, 6U);
  _SFD_DATA_RANGE_CHECK(*c4_TonB23, 7U);
  _SFD_DATA_RANGE_CHECK(*c4_Va, 8U);
  _SFD_DATA_RANGE_CHECK(*c4_Vb, 9U);
  _SFD_DATA_RANGE_CHECK(*c4_Vc, 10U);
  _SFD_DATA_RANGE_CHECK(*c4_VdcBalFactor, 11U);
  _SFD_DATA_RANGE_CHECK(*c4_Vdc, 12U);
  _SFD_DATA_RANGE_CHECK(*c4_Ts, 13U);
  _SFD_DATA_RANGE_CHECK(*c4_TonBn, 14U);
  _SFD_DATA_RANGE_CHECK(*c4_TonCp, 15U);
  _SFD_DATA_RANGE_CHECK(*c4_TonC23, 16U);
  _SFD_DATA_RANGE_CHECK(*c4_TonCn, 17U);
  _SFD_DATA_RANGE_CHECK(*c4_ModulateModeA, 18U);
  _SFD_DATA_RANGE_CHECK(*c4_ModulateModeB, 19U);
  _SFD_DATA_RANGE_CHECK(*c4_ModulateModeC, 20U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_chartstep_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(chartInstance);
  sf_debug_check_for_state_inconsistency
    (_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c4_chartstep_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  real_T c4_hoistedGlobal;
  real_T c4_b_hoistedGlobal;
  real_T c4_c_hoistedGlobal;
  real_T c4_d_hoistedGlobal;
  real_T c4_e_hoistedGlobal;
  real_T c4_f_hoistedGlobal;
  real_T c4_g_hoistedGlobal;
  real_T c4_h_hoistedGlobal;
  real_T c4_i_hoistedGlobal;
  real_T c4_j_hoistedGlobal;
  real_T c4_k_hoistedGlobal;
  real_T c4_l_hoistedGlobal;
  real_T c4_Ia;
  real_T c4_Ib;
  real_T c4_Ic;
  real_T c4_Va;
  real_T c4_Vb;
  real_T c4_Vc;
  real_T c4_VdcBalFactor;
  real_T c4_Vdc;
  real_T c4_Ts;
  real_T c4_ModulateModeA;
  real_T c4_ModulateModeB;
  real_T c4_ModulateModeC;
  uint32_T c4_debug_family_var_map[50];
  real_T c4_Valfa;
  real_T c4_Vbeta;
  real_T c4_m;
  real_T c4_Mswitchlow;
  real_T c4_Mswitchhigh;
  real_T c4_ModeswitchEnable;
  real_T c4_signVa;
  real_T c4_signVb;
  real_T c4_signVc;
  real_T c4_SignIa;
  real_T c4_SignIb;
  real_T c4_SignIc;
  real_T c4_NoTemp;
  real_T c4_Transfor[6];
  real_T c4_MainSectorNo;
  real_T c4_VdcBalanceFactorAct;
  real_T c4_Vz;
  real_T c4_Tmin;
  real_T c4_Tdead;
  real_T c4_TminAct;
  real_T c4_SPWMCoef;
  real_T c4_Taon;
  real_T c4_Tbon;
  real_T c4_Tcon;
  real_T c4_signTa;
  real_T c4_signTb;
  real_T c4_signTc;
  real_T c4_nargin = 12.0;
  real_T c4_nargout = 9.0;
  real_T c4_TonAp;
  real_T c4_TonA23;
  real_T c4_TonAn;
  real_T c4_TonBp;
  real_T c4_TonB23;
  real_T c4_TonBn;
  real_T c4_TonCp;
  real_T c4_TonC23;
  real_T c4_TonCn;
  real_T c4_a;
  real_T c4_y;
  real_T c4_A;
  real_T c4_x;
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_b_A;
  real_T c4_c_x;
  real_T c4_d_x;
  real_T c4_c_y;
  real_T c4_b_a;
  real_T c4_d_y;
  real_T c4_c_A;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_c_a;
  real_T c4_b;
  real_T c4_e_y;
  real_T c4_d_a;
  real_T c4_b_b;
  real_T c4_f_y;
  real_T c4_c_b;
  real_T c4_g_y;
  real_T c4_d_A;
  real_T c4_B;
  real_T c4_g_x;
  real_T c4_h_y;
  real_T c4_h_x;
  real_T c4_i_y;
  real_T c4_d_b;
  real_T c4_j_y;
  real_T c4_e_b;
  real_T c4_k_y;
  int32_T c4_i0;
  static real_T c4_dv0[6] = { 1.0, 3.0, 2.0, 5.0, 6.0, 4.0 };

  real_T c4_e_a;
  real_T c4_f_b;
  real_T c4_f_a;
  real_T c4_g_b;
  real_T c4_g_a;
  real_T c4_h_b;
  real_T c4_h_a;
  real_T c4_i_b;
  real_T c4_i_a;
  real_T c4_j_b;
  real_T c4_j_a;
  real_T c4_k_b;
  real_T c4_varargin_1;
  real_T c4_varargin_2;
  real_T c4_b_varargin_2;
  real_T c4_varargin_3;
  real_T c4_i_x;
  real_T c4_l_y;
  real_T c4_j_x;
  real_T c4_m_y;
  real_T c4_xk;
  real_T c4_yk;
  real_T c4_k_x;
  real_T c4_n_y;
  real_T c4_maxval;
  real_T c4_b_varargin_1;
  real_T c4_c_varargin_2;
  real_T c4_d_varargin_2;
  real_T c4_b_varargin_3;
  real_T c4_l_x;
  real_T c4_o_y;
  real_T c4_m_x;
  real_T c4_p_y;
  real_T c4_b_xk;
  real_T c4_b_yk;
  real_T c4_n_x;
  real_T c4_q_y;
  real_T c4_b_maxval;
  real_T c4_c_varargin_1;
  real_T c4_e_varargin_2;
  real_T c4_f_varargin_2;
  real_T c4_c_varargin_3;
  real_T c4_o_x;
  real_T c4_r_y;
  real_T c4_p_x;
  real_T c4_s_y;
  real_T c4_c_xk;
  real_T c4_c_yk;
  real_T c4_q_x;
  real_T c4_t_y;
  real_T c4_minval;
  real_T c4_d_varargin_1;
  real_T c4_g_varargin_2;
  real_T c4_h_varargin_2;
  real_T c4_d_varargin_3;
  real_T c4_r_x;
  real_T c4_u_y;
  real_T c4_s_x;
  real_T c4_v_y;
  real_T c4_d_xk;
  real_T c4_d_yk;
  real_T c4_t_x;
  real_T c4_w_y;
  real_T c4_b_minval;
  real_T c4_e_A;
  real_T c4_u_x;
  real_T c4_v_x;
  real_T c4_x_y;
  real_T c4_k_a;
  real_T c4_l_b;
  real_T c4_y_y;
  real_T c4_f_A;
  real_T c4_w_x;
  real_T c4_x_x;
  real_T c4_ab_y;
  real_T c4_g_A;
  real_T c4_y_x;
  real_T c4_ab_x;
  real_T c4_bb_y;
  real_T c4_l_a;
  real_T c4_m_b;
  real_T c4_cb_y;
  real_T c4_h_A;
  real_T c4_bb_x;
  real_T c4_cb_x;
  real_T c4_db_y;
  real_T c4_i_A;
  real_T c4_db_x;
  real_T c4_eb_x;
  real_T c4_eb_y;
  real_T c4_m_a;
  real_T c4_n_b;
  real_T c4_fb_y;
  real_T c4_j_A;
  real_T c4_fb_x;
  real_T c4_gb_x;
  real_T c4_gb_y;
  real_T c4_o_b;
  real_T c4_hb_y;
  real_T c4_k_A;
  real_T c4_b_B;
  real_T c4_hb_x;
  real_T c4_ib_y;
  real_T c4_ib_x;
  real_T c4_jb_y;
  real_T c4_l_A;
  real_T c4_c_B;
  real_T c4_jb_x;
  real_T c4_kb_y;
  real_T c4_kb_x;
  real_T c4_lb_y;
  real_T c4_n_a;
  real_T c4_p_b;
  real_T c4_o_a;
  real_T c4_q_b;
  real_T c4_p_a;
  real_T c4_r_b;
  real_T c4_q_a;
  real_T c4_s_b;
  real_T c4_r_a;
  real_T c4_t_b;
  real_T c4_s_a;
  real_T c4_u_b;
  real_T c4_t_a;
  real_T c4_v_b;
  real_T c4_mb_y;
  real_T c4_u_a;
  real_T c4_w_b;
  real_T c4_v_a;
  real_T c4_x_b;
  real_T c4_w_a;
  real_T c4_y_b;
  real_T c4_x_a;
  real_T c4_ab_b;
  real_T c4_nb_y;
  real_T c4_y_a;
  real_T c4_bb_b;
  real_T c4_ab_a;
  real_T c4_cb_b;
  real_T c4_bb_a;
  real_T c4_db_b;
  real_T c4_cb_a;
  real_T c4_eb_b;
  real_T c4_ob_y;
  real_T c4_m_A;
  real_T c4_lb_x;
  real_T c4_mb_x;
  real_T c4_pb_y;
  real_T c4_db_a;
  real_T c4_qb_y;
  real_T c4_n_A;
  real_T c4_nb_x;
  real_T c4_ob_x;
  real_T c4_rb_y;
  real_T c4_o_A;
  real_T c4_pb_x;
  real_T c4_qb_x;
  real_T c4_p_A;
  real_T c4_rb_x;
  real_T c4_sb_x;
  real_T c4_q_A;
  real_T c4_tb_x;
  real_T c4_ub_x;
  real_T c4_fb_b;
  real_T c4_sb_y;
  real_T c4_r_A;
  real_T c4_vb_x;
  real_T c4_wb_x;
  real_T c4_tb_y;
  real_T c4_s_A;
  real_T c4_xb_x;
  real_T c4_yb_x;
  real_T c4_ub_y;
  real_T c4_eb_a;
  real_T c4_vb_y;
  real_T c4_t_A;
  real_T c4_ac_x;
  real_T c4_bc_x;
  real_T c4_wb_y;
  real_T c4_u_A;
  real_T c4_cc_x;
  real_T c4_dc_x;
  real_T c4_v_A;
  real_T c4_ec_x;
  real_T c4_fc_x;
  real_T c4_w_A;
  real_T c4_gc_x;
  real_T c4_hc_x;
  real_T c4_gb_b;
  real_T c4_xb_y;
  real_T c4_x_A;
  real_T c4_ic_x;
  real_T c4_jc_x;
  real_T c4_yb_y;
  real_T c4_y_A;
  real_T c4_kc_x;
  real_T c4_lc_x;
  real_T c4_ac_y;
  real_T c4_fb_a;
  real_T c4_bc_y;
  real_T c4_ab_A;
  real_T c4_mc_x;
  real_T c4_nc_x;
  real_T c4_cc_y;
  real_T c4_bb_A;
  real_T c4_oc_x;
  real_T c4_pc_x;
  real_T c4_cb_A;
  real_T c4_qc_x;
  real_T c4_rc_x;
  real_T c4_db_A;
  real_T c4_sc_x;
  real_T c4_tc_x;
  real_T c4_hb_b;
  real_T c4_dc_y;
  real_T c4_eb_A;
  real_T c4_uc_x;
  real_T c4_vc_x;
  real_T c4_ec_y;
  real_T c4_gb_a;
  real_T c4_ib_b;
  real_T *c4_b_TonCn;
  real_T *c4_b_TonC23;
  real_T *c4_b_TonCp;
  real_T *c4_b_TonBn;
  real_T *c4_b_TonB23;
  real_T *c4_b_TonBp;
  real_T *c4_b_TonAn;
  real_T *c4_b_TonA23;
  real_T *c4_b_TonAp;
  real_T *c4_b_ModulateModeC;
  real_T *c4_b_ModulateModeB;
  real_T *c4_b_ModulateModeA;
  real_T *c4_b_Ts;
  real_T *c4_b_Vdc;
  real_T *c4_b_VdcBalFactor;
  real_T *c4_b_Vc;
  real_T *c4_b_Vb;
  real_T *c4_b_Va;
  real_T *c4_b_Ic;
  real_T *c4_b_Ib;
  real_T *c4_b_Ia;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T guard4 = FALSE;
  boolean_T guard5 = FALSE;
  boolean_T guard6 = FALSE;
  boolean_T guard7 = FALSE;
  boolean_T guard8 = FALSE;
  boolean_T guard9 = FALSE;
  boolean_T guard10 = FALSE;
  boolean_T guard11 = FALSE;
  boolean_T guard12 = FALSE;
  boolean_T guard13 = FALSE;
  boolean_T guard14 = FALSE;
  boolean_T guard15 = FALSE;
  boolean_T guard16 = FALSE;
  boolean_T guard17 = FALSE;
  boolean_T guard18 = FALSE;
  c4_b_ModulateModeC = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c4_b_ModulateModeB = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c4_b_ModulateModeA = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c4_b_TonCn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_b_TonC23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_b_TonCp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_b_TonBn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_b_Ts = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c4_b_Vdc = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c4_b_VdcBalFactor = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c4_b_Vc = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_b_Vb = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c4_b_Va = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_b_TonB23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_b_TonBp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_b_TonAn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_b_TonA23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_TonAp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_b_Ic = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_b_Ib = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_b_Ia = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  c4_hoistedGlobal = *c4_b_Ia;
  c4_b_hoistedGlobal = *c4_b_Ib;
  c4_c_hoistedGlobal = *c4_b_Ic;
  c4_d_hoistedGlobal = *c4_b_Va;
  c4_e_hoistedGlobal = *c4_b_Vb;
  c4_f_hoistedGlobal = *c4_b_Vc;
  c4_g_hoistedGlobal = *c4_b_VdcBalFactor;
  c4_h_hoistedGlobal = *c4_b_Vdc;
  c4_i_hoistedGlobal = *c4_b_Ts;
  c4_j_hoistedGlobal = *c4_b_ModulateModeA;
  c4_k_hoistedGlobal = *c4_b_ModulateModeB;
  c4_l_hoistedGlobal = *c4_b_ModulateModeC;
  c4_Ia = c4_hoistedGlobal;
  c4_Ib = c4_b_hoistedGlobal;
  c4_Ic = c4_c_hoistedGlobal;
  c4_Va = c4_d_hoistedGlobal;
  c4_Vb = c4_e_hoistedGlobal;
  c4_Vc = c4_f_hoistedGlobal;
  c4_VdcBalFactor = c4_g_hoistedGlobal;
  c4_Vdc = c4_h_hoistedGlobal;
  c4_Ts = c4_i_hoistedGlobal;
  c4_ModulateModeA = c4_j_hoistedGlobal;
  c4_ModulateModeB = c4_k_hoistedGlobal;
  c4_ModulateModeC = c4_l_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 50U, 50U, c4_debug_family_names,
    c4_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c4_Valfa, 0U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Vbeta, 1U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_m, 2U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Mswitchlow, 3U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Mswitchhigh, 4U,
    c4_sf_marshallOut, c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_ModeswitchEnable, 5U,
    c4_sf_marshallOut, c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_signVa, 6U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_signVb, 7U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_signVc, 8U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_SignIa, 9U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_SignIb, 10U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_SignIc, 11U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_NoTemp, 12U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(c4_Transfor, 13U, c4_b_sf_marshallOut,
    c4_b_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_MainSectorNo, 14U,
    c4_sf_marshallOut, c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_VdcBalanceFactorAct, 15U,
    c4_sf_marshallOut, c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Vz, 16U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c4_Tmin, 17U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Tdead, 18U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_TminAct, 19U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c4_SPWMCoef, 20U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Taon, 21U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Tbon, 22U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_Tcon, 23U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_signTa, 24U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_signTb, 25U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_signTc, 26U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_nargin, 27U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_nargout, 28U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c4_Ia, 29U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Ib, 30U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Ic, 31U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Va, 32U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Vb, 33U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Vc, 34U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_VdcBalFactor, 35U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Vdc, 36U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_Ts, 37U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_ModulateModeA, 38U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_ModulateModeB, 39U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_ModulateModeC, 40U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonAp, 41U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonA23, 42U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonAn, 43U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonBp, 44U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonB23, 45U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonBn, 46U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonCp, 47U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonC23, 48U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_TonCn, 49U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 5);
  c4_a = c4_Va;
  c4_y = c4_a * 2.0;
  c4_A = c4_y;
  c4_x = c4_A;
  c4_b_x = c4_x;
  c4_b_y = c4_b_x / 3.0;
  c4_b_A = c4_Vb + c4_Vc;
  c4_c_x = c4_b_A;
  c4_d_x = c4_c_x;
  c4_c_y = c4_d_x / 3.0;
  c4_Valfa = c4_b_y - c4_c_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 6);
  c4_b_a = c4_Vb - c4_Vc;
  c4_d_y = c4_b_a * 1.7320508075688772;
  c4_c_A = c4_d_y;
  c4_e_x = c4_c_A;
  c4_f_x = c4_e_x;
  c4_Vbeta = c4_f_x / 3.0;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 9);
  c4_c_a = c4_Valfa;
  c4_b = c4_Valfa;
  c4_e_y = c4_c_a * c4_b;
  c4_d_a = c4_Vbeta;
  c4_b_b = c4_Vbeta;
  c4_f_y = c4_d_a * c4_b_b;
  c4_c_b = c4_e_y + c4_f_y;
  c4_g_y = 3.0 * c4_c_b;
  c4_d_A = c4_g_y;
  c4_b_sqrt(chartInstance, &c4_d_A);
  c4_B = c4_Vdc;
  c4_g_x = c4_d_A;
  c4_h_y = c4_B;
  c4_h_x = c4_g_x;
  c4_i_y = c4_h_y;
  c4_m = c4_h_x / c4_i_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 12);
  c4_Mswitchlow = 0.2;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 13);
  c4_Mswitchhigh = 0.25;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 15);
  c4_ModeswitchEnable = 0.0;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 16);
  if (CV_EML_IF(0, 1, 0, c4_m < c4_Mswitchlow)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 16);
    c4_ModeswitchEnable = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 17);
    if (CV_EML_IF(0, 1, 1, c4_m > c4_Mswitchhigh)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 17);
      c4_ModeswitchEnable = 0.0;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 21);
  if (CV_EML_IF(0, 1, 2, c4_Va > 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 21);
    c4_signVa = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 21);
    c4_signVa = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 22);
  if (CV_EML_IF(0, 1, 3, c4_Vb > 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 22);
    c4_signVb = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 22);
    c4_signVb = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 23);
  if (CV_EML_IF(0, 1, 4, c4_Vc > 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 23);
    c4_signVc = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 23);
    c4_signVc = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 26);
  if (CV_EML_IF(0, 1, 5, c4_Ia >= 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 26);
    c4_SignIa = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 26);
    c4_SignIa = -1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 27);
  if (CV_EML_IF(0, 1, 6, c4_Ib >= 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 27);
    c4_SignIb = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 27);
    c4_SignIb = -1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 28);
  if (CV_EML_IF(0, 1, 7, c4_Ic >= 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 28);
    c4_SignIc = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 28);
    c4_SignIc = -1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 30);
  c4_d_b = c4_signVb;
  c4_j_y = 2.0 * c4_d_b;
  c4_e_b = c4_signVc;
  c4_k_y = 4.0 * c4_e_b;
  c4_NoTemp = (c4_signVa + c4_j_y) + c4_k_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 31);
  for (c4_i0 = 0; c4_i0 < 6; c4_i0++) {
    c4_Transfor[c4_i0] = c4_dv0[c4_i0];
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 33);
  if (CV_EML_IF(0, 1, 8, c4_NoTemp == 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 33);
    c4_NoTemp = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 34);
    if (CV_EML_IF(0, 1, 9, c4_NoTemp == 7.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 34);
      c4_NoTemp = 4.0;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 37);
  c4_MainSectorNo = c4_Transfor[_SFD_EML_ARRAY_BOUNDS_CHECK("Transfor", (int32_T)
    _SFD_INTEGER_CHECK("NoTemp", c4_NoTemp), 1, 6, 1, 0) - 1];
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 40);
  switch ((int32_T)_SFD_INTEGER_CHECK("MainSectorNo", c4_MainSectorNo)) {
   case 1:
    CV_EML_SWITCH(0, 1, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 43);
    c4_e_a = c4_VdcBalFactor;
    c4_f_b = c4_SignIa;
    c4_VdcBalanceFactorAct = c4_e_a * c4_f_b;
    break;

   case 2:
    CV_EML_SWITCH(0, 1, 0, 2);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 46);
    c4_f_a = -c4_VdcBalFactor;
    c4_g_b = c4_SignIc;
    c4_VdcBalanceFactorAct = c4_f_a * c4_g_b;
    break;

   case 3:
    CV_EML_SWITCH(0, 1, 0, 3);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 49);
    c4_g_a = c4_VdcBalFactor;
    c4_h_b = c4_SignIb;
    c4_VdcBalanceFactorAct = c4_g_a * c4_h_b;
    break;

   case 4:
    CV_EML_SWITCH(0, 1, 0, 4);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 52);
    c4_h_a = -c4_VdcBalFactor;
    c4_i_b = c4_SignIa;
    c4_VdcBalanceFactorAct = c4_h_a * c4_i_b;
    break;

   case 5:
    CV_EML_SWITCH(0, 1, 0, 5);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 55);
    c4_i_a = c4_VdcBalFactor;
    c4_j_b = c4_SignIc;
    c4_VdcBalanceFactorAct = c4_i_a * c4_j_b;
    break;

   case 6:
    CV_EML_SWITCH(0, 1, 0, 6);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 58);
    c4_j_a = -c4_VdcBalFactor;
    c4_k_b = c4_SignIb;
    c4_VdcBalanceFactorAct = c4_j_a * c4_k_b;
    break;

   default:
    CV_EML_SWITCH(0, 1, 0, 0);
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 61);
    c4_gb_a = -c4_VdcBalFactor;
    c4_ib_b = c4_SignIb;
    c4_VdcBalanceFactorAct = c4_gb_a * c4_ib_b;
    break;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 65);
  c4_varargin_1 = c4_Vb;
  c4_varargin_2 = c4_Vc;
  c4_b_varargin_2 = c4_varargin_1;
  c4_varargin_3 = c4_varargin_2;
  c4_i_x = c4_b_varargin_2;
  c4_l_y = c4_varargin_3;
  c4_j_x = c4_i_x;
  c4_m_y = c4_l_y;
  c4_eml_scalar_eg(chartInstance);
  c4_xk = c4_j_x;
  c4_yk = c4_m_y;
  c4_k_x = c4_xk;
  c4_n_y = c4_yk;
  c4_eml_scalar_eg(chartInstance);
  c4_maxval = muDoubleScalarMax(c4_k_x, c4_n_y);
  c4_b_varargin_1 = c4_Va;
  c4_c_varargin_2 = c4_maxval;
  c4_d_varargin_2 = c4_b_varargin_1;
  c4_b_varargin_3 = c4_c_varargin_2;
  c4_l_x = c4_d_varargin_2;
  c4_o_y = c4_b_varargin_3;
  c4_m_x = c4_l_x;
  c4_p_y = c4_o_y;
  c4_eml_scalar_eg(chartInstance);
  c4_b_xk = c4_m_x;
  c4_b_yk = c4_p_y;
  c4_n_x = c4_b_xk;
  c4_q_y = c4_b_yk;
  c4_eml_scalar_eg(chartInstance);
  c4_b_maxval = muDoubleScalarMax(c4_n_x, c4_q_y);
  c4_c_varargin_1 = c4_Vb;
  c4_e_varargin_2 = c4_Vc;
  c4_f_varargin_2 = c4_c_varargin_1;
  c4_c_varargin_3 = c4_e_varargin_2;
  c4_o_x = c4_f_varargin_2;
  c4_r_y = c4_c_varargin_3;
  c4_p_x = c4_o_x;
  c4_s_y = c4_r_y;
  c4_eml_scalar_eg(chartInstance);
  c4_c_xk = c4_p_x;
  c4_c_yk = c4_s_y;
  c4_q_x = c4_c_xk;
  c4_t_y = c4_c_yk;
  c4_eml_scalar_eg(chartInstance);
  c4_minval = muDoubleScalarMin(c4_q_x, c4_t_y);
  c4_d_varargin_1 = c4_Va;
  c4_g_varargin_2 = c4_minval;
  c4_h_varargin_2 = c4_d_varargin_1;
  c4_d_varargin_3 = c4_g_varargin_2;
  c4_r_x = c4_h_varargin_2;
  c4_u_y = c4_d_varargin_3;
  c4_s_x = c4_r_x;
  c4_v_y = c4_u_y;
  c4_eml_scalar_eg(chartInstance);
  c4_d_xk = c4_s_x;
  c4_d_yk = c4_v_y;
  c4_t_x = c4_d_xk;
  c4_w_y = c4_d_yk;
  c4_eml_scalar_eg(chartInstance);
  c4_b_minval = muDoubleScalarMin(c4_t_x, c4_w_y);
  c4_Vz = c4_b_maxval + c4_b_minval;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 67);
  c4_e_A = c4_Vz;
  c4_u_x = c4_e_A;
  c4_v_x = c4_u_x;
  c4_x_y = c4_v_x / 2.0;
  c4_k_a = c4_VdcBalanceFactorAct;
  c4_l_b = c4_Vdc;
  c4_y_y = c4_k_a * c4_l_b;
  c4_f_A = c4_y_y;
  c4_w_x = c4_f_A;
  c4_x_x = c4_w_x;
  c4_ab_y = c4_x_x / 2.0;
  c4_Va = (c4_Va - c4_x_y) - c4_ab_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 68);
  c4_g_A = c4_Vz;
  c4_y_x = c4_g_A;
  c4_ab_x = c4_y_x;
  c4_bb_y = c4_ab_x / 2.0;
  c4_l_a = c4_VdcBalanceFactorAct;
  c4_m_b = c4_Vdc;
  c4_cb_y = c4_l_a * c4_m_b;
  c4_h_A = c4_cb_y;
  c4_bb_x = c4_h_A;
  c4_cb_x = c4_bb_x;
  c4_db_y = c4_cb_x / 2.0;
  c4_Vb = (c4_Vb - c4_bb_y) - c4_db_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 69);
  c4_i_A = c4_Vz;
  c4_db_x = c4_i_A;
  c4_eb_x = c4_db_x;
  c4_eb_y = c4_eb_x / 2.0;
  c4_m_a = c4_VdcBalanceFactorAct;
  c4_n_b = c4_Vdc;
  c4_fb_y = c4_m_a * c4_n_b;
  c4_j_A = c4_fb_y;
  c4_fb_x = c4_j_A;
  c4_gb_x = c4_fb_x;
  c4_gb_y = c4_gb_x / 2.0;
  c4_Vc = (c4_Vc - c4_eb_y) - c4_gb_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 72);
  c4_Tmin = 5.0E-5;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 73);
  c4_Tdead = 0.0;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 74);
  c4_TminAct = 5.0E-5;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 77);
  if (CV_EML_IF(0, 1, 10, c4_ModeswitchEnable == 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 78);
    c4_o_b = c4_Ts;
    c4_hb_y = 2.0 * c4_o_b;
    c4_k_A = c4_hb_y;
    c4_b_B = c4_Vdc;
    c4_hb_x = c4_k_A;
    c4_ib_y = c4_b_B;
    c4_ib_x = c4_hb_x;
    c4_jb_y = c4_ib_y;
    c4_SPWMCoef = c4_ib_x / c4_jb_y;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 80);
    c4_l_A = c4_Ts;
    c4_c_B = c4_Vdc;
    c4_jb_x = c4_l_A;
    c4_kb_y = c4_c_B;
    c4_kb_x = c4_jb_x;
    c4_lb_y = c4_kb_y;
    c4_SPWMCoef = c4_kb_x / c4_lb_y;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 84);
  c4_n_a = c4_Va;
  c4_p_b = c4_SPWMCoef;
  c4_Taon = c4_n_a * c4_p_b;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 85);
  c4_o_a = c4_Vb;
  c4_q_b = c4_SPWMCoef;
  c4_Tbon = c4_o_a * c4_q_b;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 86);
  c4_p_a = c4_Vc;
  c4_r_b = c4_SPWMCoef;
  c4_Tcon = c4_p_a * c4_r_b;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 89);
  if (CV_EML_IF(0, 1, 11, c4_Taon > 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 89);
    c4_signTa = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 89);
    c4_signTa = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 90);
  if (CV_EML_IF(0, 1, 12, c4_Tbon > 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 90);
    c4_signTb = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 90);
    c4_signTb = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 91);
  if (CV_EML_IF(0, 1, 13, c4_Tcon > 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 91);
    c4_signTc = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 91);
    c4_signTc = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 93);
  if (CV_EML_IF(0, 1, 14, c4_ModeswitchEnable == 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 94);
    if (CV_EML_IF(0, 1, 15, c4_ModulateModeA == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 95);
      c4_TonAp = c4_Taon;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 95);
      c4_TonAn = c4_Taon + c4_Ts;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 95);
      c4_q_a = c4_signTa;
      c4_s_b = c4_Ts;
      c4_TonA23 = c4_q_a * c4_s_b;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 97);
      c4_r_a = c4_signTa;
      c4_t_b = c4_Ts;
      c4_TonAp = c4_r_a * c4_t_b;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 97);
      c4_s_a = c4_signTa;
      c4_u_b = c4_Ts;
      c4_TonAn = c4_s_a * c4_u_b;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 97);
      c4_t_a = 1.0 - c4_signTa;
      c4_v_b = c4_Ts;
      c4_mb_y = c4_t_a * c4_v_b;
      c4_TonA23 = c4_Taon + c4_mb_y;
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 100);
    if (CV_EML_IF(0, 1, 16, c4_ModulateModeB == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 101);
      c4_TonBp = c4_Tbon;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 101);
      c4_TonBn = c4_Tbon + c4_Ts;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 101);
      c4_u_a = c4_signTb;
      c4_w_b = c4_Ts;
      c4_TonB23 = c4_u_a * c4_w_b;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 103);
      c4_v_a = c4_signTb;
      c4_x_b = c4_Ts;
      c4_TonBp = c4_v_a * c4_x_b;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 103);
      c4_w_a = c4_signTb;
      c4_y_b = c4_Ts;
      c4_TonBn = c4_w_a * c4_y_b;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 103);
      c4_x_a = 1.0 - c4_signTb;
      c4_ab_b = c4_Ts;
      c4_nb_y = c4_x_a * c4_ab_b;
      c4_TonB23 = c4_Tbon + c4_nb_y;
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 106);
    if (CV_EML_IF(0, 1, 17, c4_ModulateModeC == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 107);
      c4_TonCp = c4_Tcon;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 107);
      c4_TonCn = c4_Tcon + c4_Ts;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 107);
      c4_y_a = c4_signTc;
      c4_bb_b = c4_Ts;
      c4_TonC23 = c4_y_a * c4_bb_b;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 109);
      c4_ab_a = c4_signTc;
      c4_cb_b = c4_Ts;
      c4_TonCp = c4_ab_a * c4_cb_b;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 109);
      c4_bb_a = c4_signTc;
      c4_db_b = c4_Ts;
      c4_TonCn = c4_bb_a * c4_db_b;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 109);
      c4_cb_a = 1.0 - c4_signTc;
      c4_eb_b = c4_Ts;
      c4_ob_y = c4_cb_a * c4_eb_b;
      c4_TonC23 = c4_Tcon + c4_ob_y;
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 112);
    if (CV_EML_IF(0, 1, 18, c4_ModulateModeA == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 113);
      c4_m_A = c4_Ts;
      c4_lb_x = c4_m_A;
      c4_mb_x = c4_lb_x;
      c4_pb_y = c4_mb_x / 4.0;
      c4_TonAp = c4_Taon + c4_pb_y;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 113);
      c4_db_a = c4_Ts;
      c4_qb_y = c4_db_a * 3.0;
      c4_n_A = c4_qb_y;
      c4_nb_x = c4_n_A;
      c4_ob_x = c4_nb_x;
      c4_rb_y = c4_ob_x / 4.0;
      c4_TonAn = c4_Taon + c4_rb_y;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 113);
      c4_o_A = c4_Ts;
      c4_pb_x = c4_o_A;
      c4_qb_x = c4_pb_x;
      c4_TonA23 = c4_qb_x / 2.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 115);
      c4_p_A = c4_Ts;
      c4_rb_x = c4_p_A;
      c4_sb_x = c4_rb_x;
      c4_TonAp = c4_sb_x / 2.0;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 115);
      c4_q_A = c4_Ts;
      c4_tb_x = c4_q_A;
      c4_ub_x = c4_tb_x;
      c4_TonAn = c4_ub_x / 2.0;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 115);
      c4_fb_b = c4_Taon;
      c4_sb_y = 2.0 * c4_fb_b;
      c4_r_A = c4_Ts;
      c4_vb_x = c4_r_A;
      c4_wb_x = c4_vb_x;
      c4_tb_y = c4_wb_x / 2.0;
      c4_TonA23 = c4_sb_y + c4_tb_y;
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 118);
    if (CV_EML_IF(0, 1, 19, c4_ModulateModeB == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 119);
      c4_s_A = c4_Ts;
      c4_xb_x = c4_s_A;
      c4_yb_x = c4_xb_x;
      c4_ub_y = c4_yb_x / 4.0;
      c4_TonBp = c4_Tbon + c4_ub_y;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 119);
      c4_eb_a = c4_Ts;
      c4_vb_y = c4_eb_a * 3.0;
      c4_t_A = c4_vb_y;
      c4_ac_x = c4_t_A;
      c4_bc_x = c4_ac_x;
      c4_wb_y = c4_bc_x / 4.0;
      c4_TonBn = c4_Tbon + c4_wb_y;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 119);
      c4_u_A = c4_Ts;
      c4_cc_x = c4_u_A;
      c4_dc_x = c4_cc_x;
      c4_TonB23 = c4_dc_x / 2.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 121);
      c4_v_A = c4_Ts;
      c4_ec_x = c4_v_A;
      c4_fc_x = c4_ec_x;
      c4_TonBp = c4_fc_x / 2.0;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 121);
      c4_w_A = c4_Ts;
      c4_gc_x = c4_w_A;
      c4_hc_x = c4_gc_x;
      c4_TonBn = c4_hc_x / 2.0;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 121);
      c4_gb_b = c4_Tbon;
      c4_xb_y = 2.0 * c4_gb_b;
      c4_x_A = c4_Ts;
      c4_ic_x = c4_x_A;
      c4_jc_x = c4_ic_x;
      c4_yb_y = c4_jc_x / 2.0;
      c4_TonB23 = c4_xb_y + c4_yb_y;
    }

    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 124);
    if (CV_EML_IF(0, 1, 20, c4_ModulateModeC == 0.0)) {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 125);
      c4_y_A = c4_Ts;
      c4_kc_x = c4_y_A;
      c4_lc_x = c4_kc_x;
      c4_ac_y = c4_lc_x / 4.0;
      c4_TonCp = c4_Tcon + c4_ac_y;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 125);
      c4_fb_a = c4_Ts;
      c4_bc_y = c4_fb_a * 3.0;
      c4_ab_A = c4_bc_y;
      c4_mc_x = c4_ab_A;
      c4_nc_x = c4_mc_x;
      c4_cc_y = c4_nc_x / 4.0;
      c4_TonCn = c4_Tcon + c4_cc_y;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 125);
      c4_bb_A = c4_Ts;
      c4_oc_x = c4_bb_A;
      c4_pc_x = c4_oc_x;
      c4_TonC23 = c4_pc_x / 2.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, MAX_int8_T);
      c4_cb_A = c4_Ts;
      c4_qc_x = c4_cb_A;
      c4_rc_x = c4_qc_x;
      c4_TonCp = c4_rc_x / 2.0;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, MAX_int8_T);
      c4_db_A = c4_Ts;
      c4_sc_x = c4_db_A;
      c4_tc_x = c4_sc_x;
      c4_TonCn = c4_tc_x / 2.0;
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, MAX_int8_T);
      c4_hb_b = c4_Tcon;
      c4_dc_y = 2.0 * c4_hb_b;
      c4_eb_A = c4_Ts;
      c4_uc_x = c4_eb_A;
      c4_vc_x = c4_uc_x;
      c4_ec_y = c4_vc_x / 2.0;
      c4_TonC23 = c4_dc_y + c4_ec_y;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 133U);
  if (CV_EML_IF(0, 1, 21, c4_TonAp < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 133U);
    c4_TonAp = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 134U);
    guard17 = FALSE;
    if (CV_EML_COND(0, 1, 0, 2.5E-5 <= c4_TonAp)) {
      if (CV_EML_COND(0, 1, 1, c4_TonAp < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 0, TRUE);
        CV_EML_IF(0, 1, 22, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 134U);
        c4_TonAp = c4_TminAct;
      } else {
        guard17 = TRUE;
      }
    } else {
      guard17 = TRUE;
    }

    if (guard17 == TRUE) {
      CV_EML_MCDC(0, 1, 0, FALSE);
      CV_EML_IF(0, 1, 22, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 135U);
      guard18 = FALSE;
      if (CV_EML_COND(0, 1, 2, c4_Ts - c4_TminAct <= c4_TonAp)) {
        if (CV_EML_COND(0, 1, 3, c4_TonAp < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 1, TRUE);
          CV_EML_IF(0, 1, 23, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 135U);
          c4_TonAp = c4_Ts - c4_TminAct;
        } else {
          guard18 = TRUE;
        }
      } else {
        guard18 = TRUE;
      }

      if (guard18 == TRUE) {
        CV_EML_MCDC(0, 1, 1, FALSE);
        CV_EML_IF(0, 1, 23, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 136U);
        if (CV_EML_IF(0, 1, 24, c4_Ts - 2.5E-5 <= c4_TonAp)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 136U);
          c4_TonAp = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 139U);
  if (CV_EML_IF(0, 1, 25, c4_TonAn < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 139U);
    c4_TonAn = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 140U);
    guard15 = FALSE;
    if (CV_EML_COND(0, 1, 4, 2.5E-5 <= c4_TonAn)) {
      if (CV_EML_COND(0, 1, 5, c4_TonAn < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 2, TRUE);
        CV_EML_IF(0, 1, 26, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 140U);
        c4_TonAn = c4_TminAct;
      } else {
        guard15 = TRUE;
      }
    } else {
      guard15 = TRUE;
    }

    if (guard15 == TRUE) {
      CV_EML_MCDC(0, 1, 2, FALSE);
      CV_EML_IF(0, 1, 26, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 141U);
      guard16 = FALSE;
      if (CV_EML_COND(0, 1, 6, c4_Ts - c4_TminAct <= c4_TonAn)) {
        if (CV_EML_COND(0, 1, 7, c4_TonAn < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 3, TRUE);
          CV_EML_IF(0, 1, 27, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 141U);
          c4_TonAn = c4_Ts - c4_TminAct;
        } else {
          guard16 = TRUE;
        }
      } else {
        guard16 = TRUE;
      }

      if (guard16 == TRUE) {
        CV_EML_MCDC(0, 1, 3, FALSE);
        CV_EML_IF(0, 1, 27, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 142U);
        if (CV_EML_IF(0, 1, 28, c4_Ts - 2.5E-5 <= c4_TonAn)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 142U);
          c4_TonAn = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 145U);
  if (CV_EML_IF(0, 1, 29, c4_TonA23 < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 145U);
    c4_TonA23 = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 146U);
    guard13 = FALSE;
    if (CV_EML_COND(0, 1, 8, 2.5E-5 <= c4_TonA23)) {
      if (CV_EML_COND(0, 1, 9, c4_TonA23 < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 4, TRUE);
        CV_EML_IF(0, 1, 30, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 146U);
        c4_TonA23 = c4_TminAct;
      } else {
        guard13 = TRUE;
      }
    } else {
      guard13 = TRUE;
    }

    if (guard13 == TRUE) {
      CV_EML_MCDC(0, 1, 4, FALSE);
      CV_EML_IF(0, 1, 30, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 147U);
      guard14 = FALSE;
      if (CV_EML_COND(0, 1, 10, c4_Ts - c4_TminAct <= c4_TonA23)) {
        if (CV_EML_COND(0, 1, 11, c4_TonA23 < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 5, TRUE);
          CV_EML_IF(0, 1, 31, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 147U);
          c4_TonA23 = c4_Ts - c4_TminAct;
        } else {
          guard14 = TRUE;
        }
      } else {
        guard14 = TRUE;
      }

      if (guard14 == TRUE) {
        CV_EML_MCDC(0, 1, 5, FALSE);
        CV_EML_IF(0, 1, 31, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 148U);
        if (CV_EML_IF(0, 1, 32, c4_Ts - 2.5E-5 <= c4_TonA23)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 148U);
          c4_TonA23 = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 152U);
  if (CV_EML_IF(0, 1, 33, c4_TonBp < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 152U);
    c4_TonBp = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 153U);
    guard11 = FALSE;
    if (CV_EML_COND(0, 1, 12, 2.5E-5 <= c4_TonBp)) {
      if (CV_EML_COND(0, 1, 13, c4_TonBp < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 6, TRUE);
        CV_EML_IF(0, 1, 34, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 153U);
        c4_TonBp = c4_TminAct;
      } else {
        guard11 = TRUE;
      }
    } else {
      guard11 = TRUE;
    }

    if (guard11 == TRUE) {
      CV_EML_MCDC(0, 1, 6, FALSE);
      CV_EML_IF(0, 1, 34, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 154U);
      guard12 = FALSE;
      if (CV_EML_COND(0, 1, 14, c4_Ts - c4_TminAct <= c4_TonBp)) {
        if (CV_EML_COND(0, 1, 15, c4_TonBp < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 7, TRUE);
          CV_EML_IF(0, 1, 35, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 154U);
          c4_TonBp = c4_Ts - c4_TminAct;
        } else {
          guard12 = TRUE;
        }
      } else {
        guard12 = TRUE;
      }

      if (guard12 == TRUE) {
        CV_EML_MCDC(0, 1, 7, FALSE);
        CV_EML_IF(0, 1, 35, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 155U);
        if (CV_EML_IF(0, 1, 36, c4_Ts - 2.5E-5 <= c4_TonBp)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 155U);
          c4_TonBp = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 158U);
  if (CV_EML_IF(0, 1, 37, c4_TonBn < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 158U);
    c4_TonBn = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 159U);
    guard9 = FALSE;
    if (CV_EML_COND(0, 1, 16, 2.5E-5 <= c4_TonBn)) {
      if (CV_EML_COND(0, 1, 17, c4_TonBn < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 8, TRUE);
        CV_EML_IF(0, 1, 38, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 159U);
        c4_TonBn = c4_TminAct;
      } else {
        guard9 = TRUE;
      }
    } else {
      guard9 = TRUE;
    }

    if (guard9 == TRUE) {
      CV_EML_MCDC(0, 1, 8, FALSE);
      CV_EML_IF(0, 1, 38, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 160U);
      guard10 = FALSE;
      if (CV_EML_COND(0, 1, 18, c4_Ts - c4_TminAct <= c4_TonBn)) {
        if (CV_EML_COND(0, 1, 19, c4_TonBn < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 9, TRUE);
          CV_EML_IF(0, 1, 39, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 160U);
          c4_TonBn = c4_Ts - c4_TminAct;
        } else {
          guard10 = TRUE;
        }
      } else {
        guard10 = TRUE;
      }

      if (guard10 == TRUE) {
        CV_EML_MCDC(0, 1, 9, FALSE);
        CV_EML_IF(0, 1, 39, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 161U);
        if (CV_EML_IF(0, 1, 40, c4_Ts - 2.5E-5 <= c4_TonBn)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 161U);
          c4_TonBn = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 164U);
  if (CV_EML_IF(0, 1, 41, c4_TonB23 < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 164U);
    c4_TonB23 = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 165U);
    guard7 = FALSE;
    if (CV_EML_COND(0, 1, 20, 2.5E-5 <= c4_TonB23)) {
      if (CV_EML_COND(0, 1, 21, c4_TonB23 < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 10, TRUE);
        CV_EML_IF(0, 1, 42, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 165U);
        c4_TonB23 = c4_TminAct;
      } else {
        guard7 = TRUE;
      }
    } else {
      guard7 = TRUE;
    }

    if (guard7 == TRUE) {
      CV_EML_MCDC(0, 1, 10, FALSE);
      CV_EML_IF(0, 1, 42, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 166U);
      guard8 = FALSE;
      if (CV_EML_COND(0, 1, 22, c4_Ts - c4_TminAct <= c4_TonB23)) {
        if (CV_EML_COND(0, 1, 23, c4_TonB23 < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 11, TRUE);
          CV_EML_IF(0, 1, 43, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 166U);
          c4_TonB23 = c4_Ts - c4_TminAct;
        } else {
          guard8 = TRUE;
        }
      } else {
        guard8 = TRUE;
      }

      if (guard8 == TRUE) {
        CV_EML_MCDC(0, 1, 11, FALSE);
        CV_EML_IF(0, 1, 43, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 167U);
        if (CV_EML_IF(0, 1, 44, c4_Ts - 2.5E-5 <= c4_TonB23)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 167U);
          c4_TonB23 = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 171U);
  if (CV_EML_IF(0, 1, 45, c4_TonCp < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 171U);
    c4_TonCp = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 172U);
    guard5 = FALSE;
    if (CV_EML_COND(0, 1, 24, 2.5E-5 <= c4_TonCp)) {
      if (CV_EML_COND(0, 1, 25, c4_TonCp < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 12, TRUE);
        CV_EML_IF(0, 1, 46, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 172U);
        c4_TonCp = c4_TminAct;
      } else {
        guard5 = TRUE;
      }
    } else {
      guard5 = TRUE;
    }

    if (guard5 == TRUE) {
      CV_EML_MCDC(0, 1, 12, FALSE);
      CV_EML_IF(0, 1, 46, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 173U);
      guard6 = FALSE;
      if (CV_EML_COND(0, 1, 26, c4_Ts - c4_TminAct <= c4_TonCp)) {
        if (CV_EML_COND(0, 1, 27, c4_TonCp < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 13, TRUE);
          CV_EML_IF(0, 1, 47, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 173U);
          c4_TonCp = c4_Ts - c4_TminAct;
        } else {
          guard6 = TRUE;
        }
      } else {
        guard6 = TRUE;
      }

      if (guard6 == TRUE) {
        CV_EML_MCDC(0, 1, 13, FALSE);
        CV_EML_IF(0, 1, 47, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 174U);
        if (CV_EML_IF(0, 1, 48, c4_Ts - 2.5E-5 <= c4_TonCp)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 174U);
          c4_TonCp = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 177U);
  if (CV_EML_IF(0, 1, 49, c4_TonCn < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 177U);
    c4_TonCn = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 178U);
    guard3 = FALSE;
    if (CV_EML_COND(0, 1, 28, 2.5E-5 <= c4_TonCn)) {
      if (CV_EML_COND(0, 1, 29, c4_TonCn < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 14, TRUE);
        CV_EML_IF(0, 1, 50, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 178U);
        c4_TonCn = c4_TminAct;
      } else {
        guard3 = TRUE;
      }
    } else {
      guard3 = TRUE;
    }

    if (guard3 == TRUE) {
      CV_EML_MCDC(0, 1, 14, FALSE);
      CV_EML_IF(0, 1, 50, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 179U);
      guard4 = FALSE;
      if (CV_EML_COND(0, 1, 30, c4_Ts - c4_TminAct <= c4_TonCn)) {
        if (CV_EML_COND(0, 1, 31, c4_TonCn < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 15, TRUE);
          CV_EML_IF(0, 1, 51, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 179U);
          c4_TonCn = c4_Ts - c4_TminAct;
        } else {
          guard4 = TRUE;
        }
      } else {
        guard4 = TRUE;
      }

      if (guard4 == TRUE) {
        CV_EML_MCDC(0, 1, 15, FALSE);
        CV_EML_IF(0, 1, 51, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 180U);
        if (CV_EML_IF(0, 1, 52, c4_Ts - 2.5E-5 <= c4_TonCn)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 180U);
          c4_TonCn = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 183U);
  if (CV_EML_IF(0, 1, 53, c4_TonC23 < 2.5E-5)) {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 183U);
    c4_TonC23 = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 184U);
    guard1 = FALSE;
    if (CV_EML_COND(0, 1, 32, 2.5E-5 <= c4_TonC23)) {
      if (CV_EML_COND(0, 1, 33, c4_TonC23 < c4_TminAct)) {
        CV_EML_MCDC(0, 1, 16, TRUE);
        CV_EML_IF(0, 1, 54, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 184U);
        c4_TonC23 = c4_TminAct;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      CV_EML_MCDC(0, 1, 16, FALSE);
      CV_EML_IF(0, 1, 54, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 185U);
      guard2 = FALSE;
      if (CV_EML_COND(0, 1, 34, c4_Ts - c4_TminAct <= c4_TonC23)) {
        if (CV_EML_COND(0, 1, 35, c4_TonC23 < c4_Ts - 2.5E-5)) {
          CV_EML_MCDC(0, 1, 17, TRUE);
          CV_EML_IF(0, 1, 55, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 185U);
          c4_TonC23 = c4_Ts - c4_TminAct;
        } else {
          guard2 = TRUE;
        }
      } else {
        guard2 = TRUE;
      }

      if (guard2 == TRUE) {
        CV_EML_MCDC(0, 1, 17, FALSE);
        CV_EML_IF(0, 1, 55, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 186U);
        if (CV_EML_IF(0, 1, 56, c4_Ts - 2.5E-5 <= c4_TonC23)) {
          _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 186U);
          c4_TonC23 = c4_Ts;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, -186);
  sf_debug_symbol_scope_pop();
  *c4_b_TonAp = c4_TonAp;
  *c4_b_TonA23 = c4_TonA23;
  *c4_b_TonAn = c4_TonAn;
  *c4_b_TonBp = c4_TonBp;
  *c4_b_TonB23 = c4_TonB23;
  *c4_b_TonBn = c4_TonBn;
  *c4_b_TonCp = c4_TonCp;
  *c4_b_TonC23 = c4_TonC23;
  *c4_b_TonCn = c4_TonCn;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
}

static void initSimStructsc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber)
{
}

static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  real_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static real_T c4_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_TonCn, const char_T *c4_identifier)
{
  real_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_TonCn), &c4_thisId);
  sf_mex_destroy(&c4_TonCn);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d0, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_TonCn;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)chartInstanceVoid;
  c4_TonCn = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_TonCn), &c4_thisId);
  sf_mex_destroy(&c4_TonCn);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i1;
  real_T c4_b_inData[6];
  int32_T c4_i2;
  real_T c4_u[6];
  const mxArray *c4_y = NULL;
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i1 = 0; c4_i1 < 6; c4_i1++) {
    c4_b_inData[c4_i1] = (*(real_T (*)[6])c4_inData)[c4_i1];
  }

  for (c4_i2 = 0; c4_i2 < 6; c4_i2++) {
    c4_u[c4_i2] = c4_b_inData[c4_i2];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 0, 0U, 1U, 0U, 2, 1, 6), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static void c4_c_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, real_T c4_y[6])
{
  real_T c4_dv1[6];
  int32_T c4_i3;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv1, 1, 0, 0U, 1, 0U, 2, 1, 6);
  for (c4_i3 = 0; c4_i3 < 6; c4_i3++) {
    c4_y[c4_i3] = c4_dv1[c4_i3];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_Transfor;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y[6];
  int32_T c4_i4;
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)chartInstanceVoid;
  c4_Transfor = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_Transfor), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_Transfor);
  for (c4_i4 = 0; c4_i4 < 6; c4_i4++) {
    (*(real_T (*)[6])c4_outData)[c4_i4] = c4_y[c4_i4];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

const mxArray
  *sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c4_nameCaptureInfo;
  c4_ResolvedFunctionInfo c4_info[15];
  const mxArray *c4_m0 = NULL;
  int32_T c4_i5;
  c4_ResolvedFunctionInfo *c4_r0;
  c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  c4_info_helper(c4_info);
  sf_mex_assign(&c4_m0, sf_mex_createstruct("nameCaptureInfo", 1, 15), FALSE);
  for (c4_i5 = 0; c4_i5 < 15; c4_i5++) {
    c4_r0 = &c4_info[c4_i5];
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c4_r0->context)), "context", "nameCaptureInfo",
                    c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c4_r0->name)), "name", "nameCaptureInfo", c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c4_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c4_r0->resolved)), "resolved", "nameCaptureInfo",
                    c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c4_i5);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c4_i5);
  }

  sf_mex_assign(&c4_nameCaptureInfo, c4_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c4_nameCaptureInfo);
  return c4_nameCaptureInfo;
}

static void c4_info_helper(c4_ResolvedFunctionInfo c4_info[15])
{
  c4_info[0].context = "";
  c4_info[0].name = "mtimes";
  c4_info[0].dominantType = "double";
  c4_info[0].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mtimes.m";
  c4_info[0].fileTimeLo = 1289494492U;
  c4_info[0].fileTimeHi = 0U;
  c4_info[0].mFileTimeLo = 0U;
  c4_info[0].mFileTimeHi = 0U;
  c4_info[1].context = "";
  c4_info[1].name = "mrdivide";
  c4_info[1].dominantType = "double";
  c4_info[1].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c4_info[1].fileTimeLo = 1325098938U;
  c4_info[1].fileTimeHi = 0U;
  c4_info[1].mFileTimeLo = 1319708366U;
  c4_info[1].mFileTimeHi = 0U;
  c4_info[2].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c4_info[2].name = "rdivide";
  c4_info[2].dominantType = "double";
  c4_info[2].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  c4_info[2].fileTimeLo = 1286797244U;
  c4_info[2].fileTimeHi = 0U;
  c4_info[2].mFileTimeLo = 0U;
  c4_info[2].mFileTimeHi = 0U;
  c4_info[3].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/ops/rdivide.m";
  c4_info[3].name = "eml_div";
  c4_info[3].dominantType = "double";
  c4_info[3].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_div.m";
  c4_info[3].fileTimeLo = 1313326210U;
  c4_info[3].fileTimeHi = 0U;
  c4_info[3].mFileTimeLo = 0U;
  c4_info[3].mFileTimeHi = 0U;
  c4_info[4].context = "";
  c4_info[4].name = "sqrt";
  c4_info[4].dominantType = "double";
  c4_info[4].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c4_info[4].fileTimeLo = 1286797152U;
  c4_info[4].fileTimeHi = 0U;
  c4_info[4].mFileTimeLo = 0U;
  c4_info[4].mFileTimeHi = 0U;
  c4_info[5].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c4_info[5].name = "eml_error";
  c4_info[5].dominantType = "char";
  c4_info[5].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_error.m";
  c4_info[5].fileTimeLo = 1305296400U;
  c4_info[5].fileTimeHi = 0U;
  c4_info[5].mFileTimeLo = 0U;
  c4_info[5].mFileTimeHi = 0U;
  c4_info[6].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/sqrt.m";
  c4_info[6].name = "eml_scalar_sqrt";
  c4_info[6].dominantType = "double";
  c4_info[6].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m";
  c4_info[6].fileTimeLo = 1286797138U;
  c4_info[6].fileTimeHi = 0U;
  c4_info[6].mFileTimeLo = 0U;
  c4_info[6].mFileTimeHi = 0U;
  c4_info[7].context = "";
  c4_info[7].name = "max";
  c4_info[7].dominantType = "double";
  c4_info[7].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/datafun/max.m";
  c4_info[7].fileTimeLo = 1311233716U;
  c4_info[7].fileTimeHi = 0U;
  c4_info[7].mFileTimeLo = 0U;
  c4_info[7].mFileTimeHi = 0U;
  c4_info[8].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/datafun/max.m";
  c4_info[8].name = "eml_min_or_max";
  c4_info[8].dominantType = "char";
  c4_info[8].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c4_info[8].fileTimeLo = 1303124612U;
  c4_info[8].fileTimeHi = 0U;
  c4_info[8].mFileTimeLo = 0U;
  c4_info[8].mFileTimeHi = 0U;
  c4_info[9].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  c4_info[9].name = "eml_scalar_eg";
  c4_info[9].dominantType = "double";
  c4_info[9].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c4_info[9].fileTimeLo = 1286797196U;
  c4_info[9].fileTimeHi = 0U;
  c4_info[9].mFileTimeLo = 0U;
  c4_info[9].mFileTimeHi = 0U;
  c4_info[10].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  c4_info[10].name = "eml_scalexp_alloc";
  c4_info[10].dominantType = "double";
  c4_info[10].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c4_info[10].fileTimeLo = 1286797196U;
  c4_info[10].fileTimeHi = 0U;
  c4_info[10].mFileTimeLo = 0U;
  c4_info[10].mFileTimeHi = 0U;
  c4_info[11].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  c4_info[11].name = "eml_index_class";
  c4_info[11].dominantType = "";
  c4_info[11].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c4_info[11].fileTimeLo = 1286797178U;
  c4_info[11].fileTimeHi = 0U;
  c4_info[11].mFileTimeLo = 0U;
  c4_info[11].mFileTimeHi = 0U;
  c4_info[12].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  c4_info[12].name = "eml_scalar_eg";
  c4_info[12].dominantType = "double";
  c4_info[12].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c4_info[12].fileTimeLo = 1286797196U;
  c4_info[12].fileTimeHi = 0U;
  c4_info[12].mFileTimeLo = 0U;
  c4_info[12].mFileTimeHi = 0U;
  c4_info[13].context = "";
  c4_info[13].name = "min";
  c4_info[13].dominantType = "double";
  c4_info[13].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/datafun/min.m";
  c4_info[13].fileTimeLo = 1311233718U;
  c4_info[13].fileTimeHi = 0U;
  c4_info[13].mFileTimeLo = 0U;
  c4_info[13].mFileTimeHi = 0U;
  c4_info[14].context =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/datafun/min.m";
  c4_info[14].name = "eml_min_or_max";
  c4_info[14].dominantType = "char";
  c4_info[14].resolved =
    "[ILXE]D:/Matlab 2012/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  c4_info[14].fileTimeLo = 1303124612U;
  c4_info[14].fileTimeHi = 0U;
  c4_info[14].mFileTimeLo = 0U;
  c4_info[14].mFileTimeHi = 0U;
}

static real_T c4_sqrt
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   real_T c4_x)
{
  real_T c4_b_x;
  c4_b_x = c4_x;
  c4_b_sqrt(chartInstance, &c4_b_x);
  return c4_b_x;
}

static void c4_eml_error
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
  int32_T c4_i6;
  static char_T c4_varargin_1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o',
    'o', 'l', 'b', 'o', 'x', ':', 's', 'q', 'r', 't', '_', 'd', 'o', 'm', 'a',
    'i', 'n', 'E', 'r', 'r', 'o', 'r' };

  char_T c4_u[30];
  const mxArray *c4_y = NULL;
  for (c4_i6 = 0; c4_i6 < 30; c4_i6++) {
    c4_u[c4_i6] = c4_varargin_1[c4_i6];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 10, 0U, 1U, 0U, 2, 1, 30), FALSE);
  sf_mex_call_debug("error", 0U, 1U, 14, sf_mex_call_debug("message", 1U, 1U, 14,
    c4_y));
}

static void c4_eml_scalar_eg
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static int32_T c4_d_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i7;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i7, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i7;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_sfEvent;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_y;
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)chartInstanceVoid;
  c4_b_sfEvent = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  *(int32_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static uint8_T c4_e_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_b_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang,
   const char_T *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang);
  return c4_y;
}

static uint8_T c4_f_emlrt_marshallIn
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u0, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_b_sqrt
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance,
   real_T *c4_x)
{
  if (*c4_x < 0.0) {
    c4_eml_error(chartInstance);
  }

  *c4_x = muDoubleScalarSqrt(*c4_x);
}

static void init_dsm_address_info
  (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_get_check_sum(mxArray
  *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2824701519U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3221641154U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1272168709U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(674743232U);
}

mxArray
  *sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_get_autoinheritance_info
  (void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("G92PpNyTXN26kHu4ZfYoBB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,12,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray
  *sf_get_sim_state_info_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[38],T\"TonA23\",},{M[1],M[7],T\"TonAn\",},{M[1],M[6],T\"TonAp\",},{M[1],M[40],T\"TonB23\",},{M[1],M[34],T\"TonBn\",},{M[1],M[4],T\"TonBp\",},{M[1],M[42],T\"TonC23\",},{M[1],M[36],T\"TonCn\",},{M[1],M[35],T\"TonCp\",},{M[8],M[0],T\"is_active_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
    chartInstance =
      (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangMachineNumber_,
           4,
           1,
           1,
           21,
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
            (_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"Ia");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Ib");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Ic");
          _SFD_SET_DATA_PROPS(3,2,0,1,"TonAp");
          _SFD_SET_DATA_PROPS(4,2,0,1,"TonA23");
          _SFD_SET_DATA_PROPS(5,2,0,1,"TonAn");
          _SFD_SET_DATA_PROPS(6,2,0,1,"TonBp");
          _SFD_SET_DATA_PROPS(7,2,0,1,"TonB23");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Va");
          _SFD_SET_DATA_PROPS(9,1,1,0,"Vb");
          _SFD_SET_DATA_PROPS(10,1,1,0,"Vc");
          _SFD_SET_DATA_PROPS(11,1,1,0,"VdcBalFactor");
          _SFD_SET_DATA_PROPS(12,1,1,0,"Vdc");
          _SFD_SET_DATA_PROPS(13,1,1,0,"Ts");
          _SFD_SET_DATA_PROPS(14,2,0,1,"TonBn");
          _SFD_SET_DATA_PROPS(15,2,0,1,"TonCp");
          _SFD_SET_DATA_PROPS(16,2,0,1,"TonC23");
          _SFD_SET_DATA_PROPS(17,2,0,1,"TonCn");
          _SFD_SET_DATA_PROPS(18,1,1,0,"ModulateModeA");
          _SFD_SET_DATA_PROPS(19,1,1,0,"ModulateModeB");
          _SFD_SET_DATA_PROPS(20,1,1,0,"ModulateModeC");
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
        _SFD_CV_INIT_EML(0,1,1,57,0,1,0,0,36,18);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,5577);
        _SFD_CV_INIT_EML_IF(0,1,0,392,407,430,450);
        _SFD_CV_INIT_EML_IF(0,1,1,430,450,-1,450);
        _SFD_CV_INIT_EML_IF(0,1,2,490,497,507,524);
        _SFD_CV_INIT_EML_IF(0,1,3,525,532,542,559);
        _SFD_CV_INIT_EML_IF(0,1,4,560,567,577,594);
        _SFD_CV_INIT_EML_IF(0,1,5,610,618,628,646);
        _SFD_CV_INIT_EML_IF(0,1,6,647,655,665,683);
        _SFD_CV_INIT_EML_IF(0,1,7,684,692,702,720);
        _SFD_CV_INIT_EML_IF(0,1,8,787,800,813,830);
        _SFD_CV_INIT_EML_IF(0,1,9,813,830,-1,830);
        _SFD_CV_INIT_EML_IF(0,1,10,1744,1767,1790,1817);
        _SFD_CV_INIT_EML_IF(0,1,11,1911,1920,1930,1947);
        _SFD_CV_INIT_EML_IF(0,1,12,1948,1957,1967,1984);
        _SFD_CV_INIT_EML_IF(0,1,13,1985,1994,2004,2021);
        _SFD_CV_INIT_EML_IF(0,1,14,2023,2046,2547,3021);
        _SFD_CV_INIT_EML_IF(0,1,15,2052,2072,2131,2212);
        _SFD_CV_INIT_EML_IF(0,1,16,2218,2238,2297,2378);
        _SFD_CV_INIT_EML_IF(0,1,17,2384,2404,2463,2544);
        _SFD_CV_INIT_EML_IF(0,1,18,2556,2576,2641,2705);
        _SFD_CV_INIT_EML_IF(0,1,19,2711,2731,2796,2860);
        _SFD_CV_INIT_EML_IF(0,1,20,2866,2886,2951,3015);
        _SFD_CV_INIT_EML_IF(0,1,21,3041,3064,3105,3146);
        _SFD_CV_INIT_EML_IF(0,1,22,3105,3146,3175,3317);
        _SFD_CV_INIT_EML_IF(0,1,23,3175,3226,3249,3317);
        _SFD_CV_INIT_EML_IF(0,1,24,3249,3278,-1,3278);
        _SFD_CV_INIT_EML_IF(0,1,25,3319,3342,3383,3424);
        _SFD_CV_INIT_EML_IF(0,1,26,3383,3424,3453,3595);
        _SFD_CV_INIT_EML_IF(0,1,27,3453,3504,3527,3595);
        _SFD_CV_INIT_EML_IF(0,1,28,3527,3556,-1,3556);
        _SFD_CV_INIT_EML_IF(0,1,29,3597,3621,3663,3706);
        _SFD_CV_INIT_EML_IF(0,1,30,3663,3706,3735,3881);
        _SFD_CV_INIT_EML_IF(0,1,31,3735,3788,3811,3881);
        _SFD_CV_INIT_EML_IF(0,1,32,3811,3841,-1,3841);
        _SFD_CV_INIT_EML_IF(0,1,33,3888,3911,3952,3993);
        _SFD_CV_INIT_EML_IF(0,1,34,3952,3993,4022,4164);
        _SFD_CV_INIT_EML_IF(0,1,35,4022,4073,4096,4164);
        _SFD_CV_INIT_EML_IF(0,1,36,4096,4125,-1,4125);
        _SFD_CV_INIT_EML_IF(0,1,37,4166,4189,4230,4271);
        _SFD_CV_INIT_EML_IF(0,1,38,4230,4271,4300,4442);
        _SFD_CV_INIT_EML_IF(0,1,39,4300,4351,4374,4442);
        _SFD_CV_INIT_EML_IF(0,1,40,4374,4403,-1,4403);
        _SFD_CV_INIT_EML_IF(0,1,41,4444,4468,4510,4553);
        _SFD_CV_INIT_EML_IF(0,1,42,4510,4553,4582,4728);
        _SFD_CV_INIT_EML_IF(0,1,43,4582,4635,4658,4728);
        _SFD_CV_INIT_EML_IF(0,1,44,4658,4688,-1,4688);
        _SFD_CV_INIT_EML_IF(0,1,45,4735,4758,4799,4840);
        _SFD_CV_INIT_EML_IF(0,1,46,4799,4840,4869,5011);
        _SFD_CV_INIT_EML_IF(0,1,47,4869,4920,4943,5011);
        _SFD_CV_INIT_EML_IF(0,1,48,4943,4972,-1,4972);
        _SFD_CV_INIT_EML_IF(0,1,49,5013,5036,5077,5118);
        _SFD_CV_INIT_EML_IF(0,1,50,5077,5118,5147,5289);
        _SFD_CV_INIT_EML_IF(0,1,51,5147,5198,5221,5289);
        _SFD_CV_INIT_EML_IF(0,1,52,5221,5250,-1,5250);
        _SFD_CV_INIT_EML_IF(0,1,53,5291,5315,5357,5400);
        _SFD_CV_INIT_EML_IF(0,1,54,5357,5400,5429,5575);
        _SFD_CV_INIT_EML_IF(0,1,55,5429,5482,5505,5575);
        _SFD_CV_INIT_EML_IF(0,1,56,5505,5535,-1,5535);

        {
          static int caseStart[] = { 1357, 933, 996, 1068, 1139, 1213, 1285 };

          static int caseExprEnd[] = { 1366, 939, 1002, 1074, 1145, 1219, 1291 };

          _SFD_CV_INIT_EML_SWITCH(0,1,0,908,928,1422,7,&(caseStart[0]),
            &(caseExprEnd[0]));
        }

        {
          static int condStart[] = { 3113, 3133 };

          static int condEnd[] = { 3129, 3146 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,3113,3146,2,0,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3183, 3206 };

          static int condEnd[] = { 3202, 3226 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,3183,3226,2,2,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3391, 3411 };

          static int condEnd[] = { 3407, 3424 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,3391,3424,2,4,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3461, 3484 };

          static int condEnd[] = { 3480, 3504 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,3,3461,3504,2,6,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3671, 3692 };

          static int condEnd[] = { 3688, 3706 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,4,3671,3706,2,8,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3743, 3767 };

          static int condEnd[] = { 3763, 3788 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,5,3743,3788,2,10,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 3960, 3980 };

          static int condEnd[] = { 3976, 3993 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,6,3960,3993,2,12,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4030, 4053 };

          static int condEnd[] = { 4049, 4073 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,7,4030,4073,2,14,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4238, 4258 };

          static int condEnd[] = { 4254, 4271 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,8,4238,4271,2,16,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4308, 4331 };

          static int condEnd[] = { 4327, 4351 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,9,4308,4351,2,18,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4518, 4539 };

          static int condEnd[] = { 4535, 4553 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,10,4518,4553,2,20,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4590, 4614 };

          static int condEnd[] = { 4610, 4635 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,11,4590,4635,2,22,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4807, 4827 };

          static int condEnd[] = { 4823, 4840 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,12,4807,4840,2,24,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 4877, 4900 };

          static int condEnd[] = { 4896, 4920 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,13,4877,4920,2,26,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 5085, 5105 };

          static int condEnd[] = { 5101, 5118 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,14,5085,5118,2,28,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 5155, 5178 };

          static int condEnd[] = { 5174, 5198 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,15,5155,5198,2,30,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 5365, 5386 };

          static int condEnd[] = { 5382, 5400 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,16,5365,5400,2,32,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 5437, 5461 };

          static int condEnd[] = { 5457, 5482 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,17,5437,5482,2,34,&(condStart[0]),&(condEnd
            [0]),3,&(pfixExpr[0]));
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
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c4_Ia;
          real_T *c4_Ib;
          real_T *c4_Ic;
          real_T *c4_TonAp;
          real_T *c4_TonA23;
          real_T *c4_TonAn;
          real_T *c4_TonBp;
          real_T *c4_TonB23;
          real_T *c4_Va;
          real_T *c4_Vb;
          real_T *c4_Vc;
          real_T *c4_VdcBalFactor;
          real_T *c4_Vdc;
          real_T *c4_Ts;
          real_T *c4_TonBn;
          real_T *c4_TonCp;
          real_T *c4_TonC23;
          real_T *c4_TonCn;
          real_T *c4_ModulateModeA;
          real_T *c4_ModulateModeB;
          real_T *c4_ModulateModeC;
          c4_ModulateModeC = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
          c4_ModulateModeB = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c4_ModulateModeA = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c4_TonCn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c4_TonC23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c4_TonCp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c4_TonBn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c4_Ts = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c4_Vdc = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c4_VdcBalFactor = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c4_Vc = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c4_Vb = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c4_Va = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c4_TonB23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c4_TonBp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c4_TonAn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c4_TonA23 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c4_TonAp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c4_Ic = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c4_Ib = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c4_Ia = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c4_Ia);
          _SFD_SET_DATA_VALUE_PTR(1U, c4_Ib);
          _SFD_SET_DATA_VALUE_PTR(2U, c4_Ic);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_TonAp);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_TonA23);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_TonAn);
          _SFD_SET_DATA_VALUE_PTR(6U, c4_TonBp);
          _SFD_SET_DATA_VALUE_PTR(7U, c4_TonB23);
          _SFD_SET_DATA_VALUE_PTR(8U, c4_Va);
          _SFD_SET_DATA_VALUE_PTR(9U, c4_Vb);
          _SFD_SET_DATA_VALUE_PTR(10U, c4_Vc);
          _SFD_SET_DATA_VALUE_PTR(11U, c4_VdcBalFactor);
          _SFD_SET_DATA_VALUE_PTR(12U, c4_Vdc);
          _SFD_SET_DATA_VALUE_PTR(13U, c4_Ts);
          _SFD_SET_DATA_VALUE_PTR(14U, c4_TonBn);
          _SFD_SET_DATA_VALUE_PTR(15U, c4_TonCp);
          _SFD_SET_DATA_VALUE_PTR(16U, c4_TonC23);
          _SFD_SET_DATA_VALUE_PTR(17U, c4_TonCn);
          _SFD_SET_DATA_VALUE_PTR(18U, c4_ModulateModeA);
          _SFD_SET_DATA_VALUE_PTR(19U, c4_ModulateModeB);
          _SFD_SET_DATA_VALUE_PTR(20U, c4_ModulateModeC);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangMachineNumber_,
         chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "hilGvt9Uf4jVrZa1jSePpD";
}

static void sf_opaque_initialize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (void *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInstanceVar);
  initialize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(void *
  chartInstanceVar)
{
  enable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(void
  *chartInstanceVar)
{
  disable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(void
  *chartInstanceVar)
{
  sf_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*)
    get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang();/* state var info */
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

extern void
  sf_internal_set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
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
    sf_get_sim_state_info_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    (S);
}

static void
  sf_opaque_set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(S, st);
}

static void sf_opaque_terminate_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S =
      ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
       chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
      ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
       chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
    ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
      ((SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,4,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,4,12);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,4,9);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2652353648U));
  ssSetChecksum1(S,(1967307839U));
  ssSetChecksum2(S,(4161423261U));
  ssSetChecksum3(S,(3704939918U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(SimStruct *S)
{
  SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct *chartInstance;
  chartInstance = (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct
                   *)malloc(sizeof
    (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiangInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang;
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

void c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_method_dispatcher(SimStruct
  *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_ANPC_ThreeLevelSPWM_AoultSwitch1_WangJiang_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
