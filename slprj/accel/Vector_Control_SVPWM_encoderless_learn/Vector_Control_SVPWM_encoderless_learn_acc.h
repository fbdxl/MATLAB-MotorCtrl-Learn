#include "__cf_Vector_Control_SVPWM_encoderless_learn.h"
#ifndef RTW_HEADER_Vector_Control_SVPWM_encoderless_learn_acc_h_
#define RTW_HEADER_Vector_Control_SVPWM_encoderless_learn_acc_h_
#ifndef Vector_Control_SVPWM_encoderless_learn_acc_COMMON_INCLUDES_
#define Vector_Control_SVPWM_encoderless_learn_acc_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rt_look.h"
#include "rt_look1d.h"
#include "rt_nonfinite.h"
#endif
#include "Vector_Control_SVPWM_encoderless_learn_acc_types.h"
typedef struct { boolean_T B_32_0_0 [ 6 ] ; char pad_B_32_0_0 [ 2 ] ; }
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn ; typedef struct {
int8_T NEGATIVEEdge_SubsysRanBC ; boolean_T NEGATIVEEdge_MODE ; char
pad_NEGATIVEEdge_MODE [ 6 ] ; }
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn ; typedef struct {
boolean_T B_33_0_0 [ 6 ] ; char pad_B_33_0_0 [ 2 ] ; }
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn ; typedef struct {
int8_T POSITIVEEdge_SubsysRanBC ; boolean_T POSITIVEEdge_MODE ; char
pad_POSITIVEEdge_MODE [ 6 ] ; }
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn ; typedef struct {
real_T B_41_0_0 [ 6 ] ; real_T B_41_1_0 [ 6 ] ; real_T B_41_4_0 ; real_T
B_41_5_0 ; real_T B_41_6_0 ; real_T B_41_9_0 ; real_T B_41_10_0 ; real_T
B_41_11_0 ; real_T B_41_12_0 ; real_T B_41_13_0 ; real_T B_41_15_0 ; real_T
B_41_16_0 ; real_T B_41_18_0 ; real_T B_41_19_0 ; real_T B_41_20_0 ; real_T
B_41_21_0 ; real_T B_41_22_0 ; real_T B_41_23_0 ; real_T B_41_24_0 ; real_T
B_41_25_0 ; real_T B_41_27_0 [ 2 ] ; real_T B_41_28_0 [ 2 ] ; real_T
B_41_30_0 [ 2 ] ; real_T B_41_32_0 ; real_T B_41_33_0 ; real_T B_41_36_0 ;
real_T B_41_37_0 ; real_T B_41_39_0 ; real_T B_41_40_0 ; real_T B_41_42_0 ;
real_T B_41_43_0 ; real_T B_41_44_0 ; real_T B_41_48_0 ; real_T B_41_49_0 ;
real_T B_41_51_0 ; real_T B_41_52_0 ; real_T B_41_54_0 ; real_T B_41_55_0 ;
real_T B_41_57_0 ; real_T B_41_58_0 ; real_T B_41_64_0 ; real_T B_41_67_0 ;
real_T B_41_71_0 ; real_T B_41_73_0 ; real_T B_41_90_0 ; real_T B_41_115_0 ;
real_T B_41_149_0 [ 4 ] ; real_T B_41_150_0 ; real_T B_41_151_0 ; real_T
B_41_152_0 ; real_T B_41_153_0 [ 6 ] ; real_T B_41_156_0 [ 6 ] ; real_T
B_41_157_0 [ 15 ] ; real_T B_41_157_1 [ 12 ] ; real_T B_41_160_0 [ 6 ] ;
real_T B_41_162_0 [ 6 ] ; real_T B_41_191_0 [ 3 ] ; real_T B_41_196_0 ;
real_T B_41_197_0 ; real_T B_41_200_0 ; real_T B_41_201_0 ; real_T B_41_219_0
; real_T B_41_220_0 ; real_T B_41_225_0 ; real_T B_41_226_0 ; real_T
B_41_237_0 ; real_T B_41_239_0 ; real_T B_41_240_0 ; real_T B_41_244_0 ;
real_T B_41_245_0 ; real_T B_41_248_0 [ 2 ] ; real_T B_41_251_0 ; real_T
B_41_252_0 ; real_T B_41_253_0 ; real_T B_41_254_0 ; real_T B_41_255_0 ;
real_T B_41_256_0 ; real_T B_41_267_0 ; real_T B_41_268_0 ; real_T B_41_279_0
; real_T B_41_280_0 ; real_T B_41_288_0 ; real_T B_41_289_0 ; real_T
B_41_296_0 ; real_T B_41_316_0 ; real_T B_41_317_0 ; real_T B_41_330_0 ;
real_T B_41_336_0 ; real_T B_41_337_0 ; real_T B_41_341_0 ; real_T B_41_348_0
; real_T B_41_363_0 ; real_T B_41_371_0 ; real_T B_41_397_0 ; real_T
B_41_415_0 ; real_T B_41_429_0 ; real_T B_41_434_0 ; real_T B_41_440_0 ;
real_T B_41_442_0 ; real_T B_41_450_0 [ 6 ] ; real_T B_40_0_0 ; real_T
B_40_1_0 ; real_T B_40_7_0 ; real_T B_40_8_0 ; real_T B_40_13_0 [ 6 ] ;
real_T B_40_14_0 [ 6 ] ; real_T B_40_15_0 [ 6 ] ; real_T B_34_0_0 ; real_T
B_34_1_0 ; real_T B_34_7_0 ; real_T B_34_8_0 ; real_T B_34_14_0 [ 6 ] ;
real_T B_34_15_0 [ 6 ] ; real_T B_34_16_0 [ 6 ] ; real_T B_28_0_1 ; real_T
B_28_0_2 ; real_T B_28_0_3 ; real_T B_27_0_1 ; real_T B_26_0_1 ; real_T
B_26_0_2 ; real_T B_26_0_3 ; real_T B_25_0_0 [ 2 ] ; real_T B_25_1_0 ; real_T
B_25_2_0 ; real_T B_24_2_0 ; real_T B_24_5_0 ; real_T B_24_6_0 ; real_T
B_24_7_0 ; real_T B_24_8_0 ; real_T B_19_0_0 ; real_T B_19_1_0 ; real_T
B_19_2_0 ; real_T B_19_3_0 ; real_T B_18_0_0 ; real_T B_18_1_0 ; real_T
B_18_2_0 ; real_T B_18_3_0 ; real_T B_17_0_0 ; real_T B_17_1_0 ; real_T
B_17_2_0 ; real_T B_17_3_0 ; real_T B_16_0_0 ; real_T B_16_1_0 ; real_T
B_16_2_0 ; real_T B_16_3_0 ; real_T B_15_0_0 ; real_T B_15_1_0 ; real_T
B_15_2_0 ; real_T B_15_3_0 ; real_T B_14_0_0 ; real_T B_14_1_0 ; real_T
B_14_2_0 ; real_T B_14_3_0 ; real_T B_13_7_0 ; real_T B_13_9_0 ; real_T
B_10_0_1 ; real_T B_9_0_1 ; real_T B_9_0_2 ; real_T B_8_0_1 ; real_T B_8_0_2
; real_T B_7_0_1 ; real_T B_7_0_2 ; real_T B_6_0_1 ; real_T B_6_0_2 ; real_T
B_5_0_1 ; real_T B_5_0_2 ; real_T B_4_0_1 ; real_T B_4_0_2 ; real_T B_3_0_0 ;
real_T B_3_1_0 ; real_T B_3_2_0 [ 6 ] ; real_T B_3_4_0 [ 6 ] ; real_T
B_3_11_0 [ 6 ] ; real_T B_3_12_0 [ 6 ] ; real_T B_3_13_0 [ 6 ] ; real_T
B_3_14_0 [ 6 ] ; real_T B_2_0_1 ; real_T B_2_0_2 ; real_T B_2_0_3 ; real_T
B_1_0_1 ; real_T B_1_0_2 ; real_T B_0_0_1 ; real_T B_0_0_2 ; real_T B_41_2_0
; real_T B_41_14_0 ; real_T B_41_186_0 [ 18 ] ; real_T B_41_198_0 ; real_T
B_41_202_0 ; real_T B_41_216_0 ; real_T B_41_217_0 ; real_T B_41_234_0 [ 2 ]
; real_T B_41_332_0 ; real_T B_41_319_0 ; real_T B_41_315_0 ; real_T
B_41_311_0 ; real_T B_41_411_0 ; real_T B_41_410_0 ; uint8_T B_41_281_0 ;
uint8_T B_41_282_0 ; uint8_T B_41_338_0 ; uint8_T B_41_339_0 ; boolean_T
B_41_89_0 [ 6 ] ; boolean_T B_41_94_0 ; boolean_T B_41_97_0 ; boolean_T
B_41_99_0 [ 6 ] ; boolean_T B_41_101_0 ; boolean_T B_41_134_0 ; boolean_T
B_41_247_0 ; boolean_T B_40_9_0 [ 6 ] ; boolean_T B_40_17_0 [ 6 ] ; boolean_T
B_34_9_0 [ 6 ] ; boolean_T B_34_19_0 [ 6 ] ; char pad_B_34_19_0 [ 3 ] ;
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn POSITIVEEdge_c ;
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn NEGATIVEEdge_j ;
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn POSITIVEEdge ;
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn NEGATIVEEdge ; }
BlockIO_Vector_Control_SVPWM_encoderless_learn ; typedef struct { real_T
UnitDelay_DSTATE [ 6 ] ; real_T u_DSTATE ; real_T _DSTATE ; real_T u_DSTATE_k
; real_T u_DSTATE_e ; real_T IntegerDelay1_DSTATE [ 2 ] ; real_T
Integrator_DSTATE ; real_T DiscreteTimeIntegrator_DSTATE ; real_T
Integrator_DSTATE_i ; real_T IntegerDelay3_DSTATE ; real_T
DiscreteTimeIntegrator_DSTATE_i ; real_T DiscreteTimeIntegrator1_DSTATE ;
real_T DiscreteTimeIntegrator_DSTATE_d ; real_T
DiscreteTimeIntegrator1_DSTATE_f ; real_T DiscreteTimeIntegrator1_DSTATE_k ;
real_T DiscreteTimeIntegrator_DSTATE_i2 ; real_T StateSpace_DSTATE [ 19 ] ;
real_T u_DSTATE_g ; real_T u_DSTATE_c ; real_T u_DSTATE_b ; real_T u_DSTATE_m
; real_T _DSTATE_o [ 2 ] ; real_T u_DSTATE_ba [ 2 ] ; real_T
Integrator_DSTATE_m ; real_T UnitDelay_DSTATE_d ; real_T IntegerDelay_DSTATE
[ 10 ] ; real_T DiscreteTimeIntegrator1_DSTATE_a ; real_T
DiscreteTimeIntegrator_DSTATE_c ; real_T DiscreteFilter1_DSTATE ; real_T
DiscreteFilter_DSTATE ; real_T Integrator_DSTATE_a ; real_T
DiscreteFilter2_DSTATE ; real_T Integrator_DSTATE_b ; real_T
UnitDelay3_DSTATE ; real_T Integrator_DSTATE_f ; real_T UnitDelay2_DSTATE ;
real_T DiscreteTransferFcn_DSTATE ; real_T DiscreteTimeIntegrator1_DSTATE_n ;
real_T DiscreteTimeIntegrator2_DSTATE ; real_T UnitDelay_DSTATE_a [ 6 ] ;
real_T UnitDelay_DSTATE_p [ 6 ] ; real_T DiscreteTimeIntegrator_DSTATE_ii [ 6
] ; real_T UnitDelay_DSTATE_l [ 6 ] ; real_T NextOutput ; real_T _tmp ;
real_T NextOutput_k ; real_T u_tmp ; real_T lastSin ; real_T lastCos ; real_T
lastSin_i ; real_T lastCos_l ; real_T lastSin_b ; real_T lastCos_h ; real_T
NextOutput_l ; real_T u_tmp_k ; real_T NextOutput_g ; real_T u_tmp_a ; real_T
DiscreteFilter1_tmp ; real_T DiscreteFilter_tmp ; real_T DiscreteFilter2_tmp
; struct { real_T TimeStampA ; real_T LastUAtTimeA ; real_T TimeStampB ;
real_T LastUAtTimeB ; } Derivative_RWORK ; struct { void * AS ; void * BS ;
void * CS ; void * DS ; void * DX_COL ; void * BD_COL ; void * TMP1 ; void *
TMP2 ; void * XTMP ; void * SWITCH_STATUS ; void * SWITCH_STATUS_INIT ; void
* SW_CHG ; void * CHOPPER ; void * G_STATE ; void * IDX_SW_CHG ; void *
Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW ; } StateSpace_PWORK ;
struct { void * LoggedData ; } Scope_PWORK ; struct { void * LoggedData ; }
Scope1_PWORK ; struct { void * LoggedData ; } Scope1_PWORK_p ; struct { void
* LoggedData ; } Scope1_PWORK_a ; struct { void * LoggedData ; } Scope2_PWORK
; struct { void * LoggedData ; } Scope3_PWORK ; struct { void * LoggedData ;
} Scope4_PWORK ; struct { void * LoggedData ; } Scope5_PWORK ; struct { void
* LoggedData ; } Scope6_PWORK ; struct { void * LoggedData ; } Scope_PWORK_d
; struct { void * LoggedData ; } Scope7_PWORK ; struct { void * LoggedData ;
} Scope_PWORK_j ; struct { void * LoggedData ; } Scope1_PWORK_i ; struct {
void * LoggedData ; } Scope2_PWORK_g ; struct { void * LoggedData ; }
Scope3_PWORK_h ; struct { void * LoggedData ; } Scope4_PWORK_o ; struct {
void * LoggedData ; } Scope5_PWORK_j ; struct { void * LoggedData ; }
Scope6_PWORK_k ; struct { void * LoggedData ; } Scope8_PWORK ; struct { void
* LoggedData ; } Scope7_PWORK_c ; struct { void * LoggedData ; }
Scope_PWORK_e ; struct { void * LoggedData ; } Scope1_PWORK_m ; struct { void
* LoggedData ; } Scope_PWORK_du ; struct { void * LoggedData ; }
Scope1_PWORK_ar ; struct { void * LoggedData ; } Scope_PWORK_ef ; struct {
void * LoggedData ; } Scope2_PWORK_l ; int32_T systemEnable ; int32_T
systemEnable_k ; int32_T systemEnable_i ; uint32_T RandSeed ; uint32_T
RandSeed_k ; uint32_T RandSeed_o ; uint32_T RandSeed_i ; int_T
StateSpace_IWORK [ 4 ] ; boolean_T UnitDelay_DSTATE_n [ 6 ] ; boolean_T
UnitDelay_DSTATE_g [ 6 ] ; int8_T ONDelay_SubsysRanBC ; int8_T
OFFDelay_SubsysRanBC ; int8_T Tail_SubsysRanBC ; int8_T
Saturation_SubsysRanBC ; int8_T sinthrcosthr_SubsysRanBC ; int8_T
sinbetacosbetasinthcosth_SubsysRanBC ; int8_T Rotorreferenceframe_SubsysRanBC
; int8_T Stationaryreferenceframe_SubsysRanBC ; int8_T
Synchronousreferenceframe_SubsysRanBC ; int8_T
Rotorreferenceframe_SubsysRanBC_p ; int8_T
Stationaryreferenceframe_SubsysRanBC_k ; int8_T
Synchronousreferenceframe_SubsysRanBC_b ; int8_T
DiscreteTimeIntegrator_PrevResetState [ 6 ] ; uint8_T
DiscreteTimeIntegrator_SYSTEM_ENABLE ; boolean_T Relay_Mode ; boolean_T
Relay1_Mode ; boolean_T Relay2_Mode ; boolean_T ONDelay_MODE ; boolean_T
OFFDelay_MODE ; boolean_T Tail_MODE ; boolean_T sinthrcosthr_MODE ; boolean_T
Rotorreferenceframe_MODE ; boolean_T Stationaryreferenceframe_MODE ;
boolean_T Synchronousreferenceframe_MODE ; boolean_T
Rotorreferenceframe_MODE_p ; boolean_T Stationaryreferenceframe_MODE_n ;
boolean_T Synchronousreferenceframe_MODE_d ;
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn POSITIVEEdge_c ;
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn NEGATIVEEdge_j ;
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn POSITIVEEdge ;
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn NEGATIVEEdge ; }
D_Work_Vector_Control_SVPWM_encoderless_learn ; typedef struct { real_T
Integrator_CSTATE ; real_T StateSpace_CSTATE ; real_T Integrator1_CSTATE [ 2
] ; } ContinuousStates_Vector_Control_SVPWM_encoderless_learn ; typedef
struct { real_T Integrator_CSTATE ; real_T StateSpace_CSTATE ; real_T
Integrator1_CSTATE [ 2 ] ; }
StateDerivatives_Vector_Control_SVPWM_encoderless_learn ; typedef struct {
boolean_T Integrator_CSTATE ; boolean_T StateSpace_CSTATE ; boolean_T
Integrator1_CSTATE [ 2 ] ; }
StateDisabled_Vector_Control_SVPWM_encoderless_learn ; typedef struct { const
real_T B_41_362_0 ; const real_T B_41_370_0 ; const real_T B_41_396_0 ; }
ConstBlockIO_Vector_Control_SVPWM_encoderless_learn ;
#define Vector_Control_SVPWM_encoderless_learn_rtC(S) ((ConstBlockIO_Vector_Control_SVPWM_encoderless_learn *) _ssGetConstBlockIO(S))
struct Parameters_Vector_Control_SVPWM_encoderless_learn_ { real_T P_0 ;
real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T
P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ;
real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T
P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ;
real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T
P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 [ 2 ] ; real_T
P_39 [ 2 ] ; real_T P_40 [ 2 ] ; real_T P_41 [ 2 ] ; real_T P_42 ; real_T
P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 [ 2 ] ; real_T P_47 [ 2 ] ;
real_T P_48 [ 2 ] ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ;
real_T P_53 [ 6 ] ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ;
real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 [ 2 ] ;
real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T
P_68 ; real_T P_69 ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 ; real_T
P_73 ; real_T P_74 ; real_T P_75 ; real_T P_77 ; real_T P_78 ; real_T P_79 ;
real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T
P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ;
real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T
P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101
; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ;
real_T P_107 ; real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ;
real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ;
real_T P_117 [ 3 ] ; real_T P_118 [ 3 ] ; real_T P_119 ; real_T P_120 ;
real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T P_125 ;
real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T P_130 ;
real_T P_131 ; real_T P_132 ; real_T P_133 ; real_T P_134 ; real_T P_135 ;
real_T P_136 ; real_T P_137 ; real_T P_138 ; real_T P_139 ; real_T P_140 ;
real_T P_141 ; real_T P_142 ; real_T P_143 ; real_T P_144 ; real_T P_145 ;
real_T P_146 ; real_T P_147 ; real_T P_148 ; real_T P_149 ; real_T P_150 ;
real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T P_154 ; real_T P_155 ;
real_T P_156 ; real_T P_157 ; real_T P_158 ; real_T P_159 ; real_T P_160 ;
real_T P_161 ; real_T P_162 ; real_T P_163 ; real_T P_164 ; real_T P_165 ;
real_T P_166 ; real_T P_167 ; real_T P_168 ; real_T P_169 ; real_T P_170 ;
real_T P_171 ; real_T P_172 ; real_T P_173 ; real_T P_174 ; real_T P_175 ;
real_T P_176 ; real_T P_177 ; real_T P_178 ; real_T P_179 ; real_T P_180 ;
real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T P_184 ; real_T P_185 ;
real_T P_186 ; real_T P_187 ; real_T P_188 [ 6 ] ; real_T P_189 [ 6 ] ;
real_T P_190 [ 6 ] ; real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T
P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 [ 2 ] ; real_T P_198 ;
real_T P_199 ; real_T P_200 [ 18 ] ; real_T P_201 ; real_T P_202 [ 3 ] ;
real_T P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T P_207 ;
real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 [ 2 ] ; real_T
P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T
P_217 ; real_T P_218 [ 2 ] ; real_T P_219 ; real_T P_220 ; real_T P_221 ;
real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ;
real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 [ 2
] ; real_T P_232 [ 2 ] ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T
P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T
P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T
P_246 ; real_T P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T
P_251 ; real_T P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T
P_256 ; real_T P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T
P_261 ; real_T P_262 ; real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T
P_266 ; real_T P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T
P_271 ; real_T P_272 ; real_T P_273 ; real_T P_274 ; real_T P_275 ; real_T
P_276 ; real_T P_277 ; real_T P_278 ; real_T P_279 ; real_T P_280 ; real_T
P_281 ; real_T P_282 ; real_T P_283 ; real_T P_284 [ 2 ] ; real_T P_285 ;
real_T P_286 ; real_T P_287 ; real_T P_288 ; real_T P_289 ; real_T P_290 [ 2
] ; real_T P_291 ; real_T P_292 ; real_T P_293 ; real_T P_294 ; real_T P_295
; real_T P_296 ; real_T P_297 ; real_T P_298 ; real_T P_299 [ 2 ] ; real_T
P_300 ; real_T P_301 ; real_T P_302 ; real_T P_303 ; real_T P_304 ; real_T
P_305 ; real_T P_306 ; real_T P_307 ; real_T P_308 ; real_T P_309 ; real_T
P_310 ; real_T P_311 ; real_T P_312 ; real_T P_313 ; real_T P_314 ; real_T
P_315 ; real_T P_316 ; real_T P_317 ; real_T P_318 ; real_T P_319 ; real_T
P_320 ; real_T P_321 ; real_T P_322 ; real_T P_323 ; real_T P_324 ; real_T
P_325 ; real_T P_326 ; real_T P_327 ; real_T P_328 [ 2 ] ; real_T P_329 ;
real_T P_330 ; real_T P_331 ; real_T P_332 ; real_T P_333 ; real_T P_334 ;
real_T P_335 ; real_T P_336 ; real_T P_337 ; real_T P_338 ; real_T P_339 ;
real_T P_340 ; real_T P_341 ; real_T P_342 ; real_T P_343 ; real_T P_344 ;
real_T P_345 [ 6 ] ; uint32_T P_346 ; uint32_T P_347 ; uint32_T P_348 ;
uint32_T P_349 ; uint32_T P_350 ; uint32_T P_351 ; uint32_T P_352 ; uint32_T
P_353 ; uint32_T P_354 ; uint8_T P_355 ; uint8_T P_356 ; uint8_T P_357 ;
uint8_T P_358 ; boolean_T P_359 ; boolean_T P_360 ; boolean_T P_361 ;
boolean_T P_362 ; boolean_T P_363 ; boolean_T P_364 ; boolean_T P_365 ;
boolean_T P_366 ; boolean_T P_367 ; boolean_T P_368 ; boolean_T P_369 ; char
pad_P_369 [ 5 ] ; } ; extern
Parameters_Vector_Control_SVPWM_encoderless_learn
Vector_Control_SVPWM_encoderless_learn_rtDefaultParameters ; extern const
ConstBlockIO_Vector_Control_SVPWM_encoderless_learn
Vector_Control_SVPWM_encoderless_learn_rtInvariantSignals ;
#endif
