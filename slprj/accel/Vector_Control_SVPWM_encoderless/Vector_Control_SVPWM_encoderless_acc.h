#include "__cf_Vector_Control_SVPWM_encoderless.h"
#ifndef RTW_HEADER_Vector_Control_SVPWM_encoderless_acc_h_
#define RTW_HEADER_Vector_Control_SVPWM_encoderless_acc_h_
#ifndef Vector_Control_SVPWM_encoderless_acc_COMMON_INCLUDES_
#define Vector_Control_SVPWM_encoderless_acc_COMMON_INCLUDES_
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
#include "Vector_Control_SVPWM_encoderless_acc_types.h"
typedef struct { boolean_T B_22_0_0 [ 6 ] ; char pad_B_22_0_0 [ 2 ] ; }
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless ; typedef struct { int8_T
NEGATIVEEdge_SubsysRanBC ; boolean_T NEGATIVEEdge_MODE ; char
pad_NEGATIVEEdge_MODE [ 6 ] ; }
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless ; typedef struct {
boolean_T B_23_0_0 [ 6 ] ; char pad_B_23_0_0 [ 2 ] ; }
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless ; typedef struct { int8_T
POSITIVEEdge_SubsysRanBC ; boolean_T POSITIVEEdge_MODE ; char
pad_POSITIVEEdge_MODE [ 6 ] ; }
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless ; typedef struct { real_T
B_31_0_0 [ 6 ] ; real_T B_31_1_0 [ 6 ] ; real_T B_31_4_0 ; real_T B_31_5_0 ;
real_T B_31_13_0 ; real_T B_31_14_0 ; real_T B_31_20_0 ; real_T B_31_28_0 ;
real_T B_31_31_0 ; real_T B_31_44_0 ; real_T B_31_52_0 ; real_T B_31_85_0 ;
real_T B_31_86_0 ; real_T B_31_88_0 ; real_T B_31_92_0 ; real_T B_31_94_0 ;
real_T B_31_111_0 ; real_T B_31_136_0 ; real_T B_31_170_0 [ 4 ] ; real_T
B_31_171_0 ; real_T B_31_172_0 ; real_T B_31_173_0 ; real_T B_31_174_0 [ 6 ]
; real_T B_31_177_0 [ 6 ] ; real_T B_31_178_0 [ 15 ] ; real_T B_31_178_1 [ 12
] ; real_T B_31_201_0 [ 3 ] ; real_T B_31_207_0 ; real_T B_31_208_0 ; real_T
B_31_212_0 ; real_T B_31_213_0 ; real_T B_31_217_0 ; real_T B_31_218_0 ;
real_T B_31_219_0 ; real_T B_31_220_0 ; real_T B_31_221_0 ; real_T B_31_222_0
; real_T B_31_233_0 ; real_T B_31_234_0 ; real_T B_31_245_0 ; real_T
B_31_246_0 ; real_T B_31_254_0 ; real_T B_31_255_0 ; real_T B_31_262_0 ;
real_T B_31_268_0 [ 6 ] ; real_T B_31_270_0 [ 6 ] ; real_T B_31_280_0 ;
real_T B_31_281_0 ; real_T B_31_289_0 ; real_T B_31_297_0 ; real_T B_31_305_0
; real_T B_31_311_0 ; real_T B_31_325_0 ; real_T B_31_330_0 ; real_T
B_31_336_0 ; real_T B_31_338_0 ; real_T B_31_345_0 [ 6 ] ; real_T B_30_0_0 ;
real_T B_30_1_0 ; real_T B_30_7_0 ; real_T B_30_8_0 ; real_T B_30_13_0 [ 6 ]
; real_T B_30_15_0 [ 6 ] ; real_T B_24_0_0 ; real_T B_24_1_0 ; real_T
B_24_7_0 ; real_T B_24_8_0 ; real_T B_24_14_0 [ 6 ] ; real_T B_24_16_0 [ 6 ]
; real_T B_18_0_1 ; real_T B_18_0_2 ; real_T B_18_0_3 ; real_T B_17_0_1 ;
real_T B_16_0_1 ; real_T B_16_0_2 ; real_T B_16_0_3 ; real_T B_15_0_0 [ 2 ] ;
real_T B_15_1_0 ; real_T B_15_2_0 ; real_T B_14_2_0 ; real_T B_14_5_0 ;
real_T B_14_6_0 ; real_T B_14_7_0 ; real_T B_14_8_0 ; real_T B_9_0_0 ; real_T
B_9_1_0 ; real_T B_9_2_0 ; real_T B_9_3_0 ; real_T B_8_0_0 ; real_T B_8_1_0 ;
real_T B_8_2_0 ; real_T B_8_3_0 ; real_T B_7_0_0 ; real_T B_7_1_0 ; real_T
B_7_2_0 ; real_T B_7_3_0 ; real_T B_6_0_0 ; real_T B_6_1_0 ; real_T B_6_2_0 ;
real_T B_6_3_0 ; real_T B_5_0_0 ; real_T B_5_1_0 ; real_T B_5_2_0 ; real_T
B_5_3_0 ; real_T B_4_0_0 ; real_T B_4_1_0 ; real_T B_4_2_0 ; real_T B_4_3_0 ;
real_T B_3_7_0 ; real_T B_3_9_0 ; real_T B_0_0_0 ; real_T B_0_1_0 ; real_T
B_0_11_0 [ 6 ] ; real_T B_0_12_0 [ 6 ] ; real_T B_0_13_0 [ 6 ] ; real_T
B_0_14_0 [ 6 ] ; real_T B_31_196_0 [ 18 ] ; real_T B_31_249_0 ; real_T
B_31_33_0 ; real_T B_31_46_0 ; real_T B_31_261_0 ; uint8_T B_31_24_0 ;
uint8_T B_31_25_0 ; uint8_T B_31_247_0 ; uint8_T B_31_248_0 ; boolean_T
B_31_110_0 [ 6 ] ; boolean_T B_31_115_0 ; boolean_T B_31_118_0 ; boolean_T
B_31_120_0 [ 6 ] ; boolean_T B_31_122_0 ; boolean_T B_31_155_0 ; boolean_T
B_30_9_0 [ 6 ] ; boolean_T B_30_17_0 [ 6 ] ; boolean_T B_24_9_0 [ 6 ] ;
boolean_T B_24_19_0 [ 6 ] ; char pad_B_24_19_0 [ 4 ] ;
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless POSITIVEEdge_c ;
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless NEGATIVEEdge_j ;
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless POSITIVEEdge ;
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless NEGATIVEEdge ; }
BlockIO_Vector_Control_SVPWM_encoderless ; typedef struct { real_T
UnitDelay_DSTATE [ 6 ] ; real_T u_DSTATE ; real_T _DSTATE ; real_T
DiscreteTimeIntegrator1_DSTATE ; real_T u_DSTATE_k ; real_T u_DSTATE_e ;
real_T DiscreteTimeIntegrator_DSTATE ; real_T DiscreteFilter_DSTATE ; real_T
IntegerDelay_DSTATE [ 10 ] ; real_T DiscreteFilter1_DSTATE ; real_T
Integrator_DSTATE ; real_T DiscreteFilter2_DSTATE ; real_T UnitDelay3_DSTATE
; real_T Integrator_DSTATE_j ; real_T UnitDelay2_DSTATE ; real_T
Integrator_DSTATE_n ; real_T IntegerDelay3_DSTATE ; real_T
DiscreteTimeIntegrator_DSTATE_i ; real_T DiscreteTimeIntegrator1_DSTATE_e ;
real_T DiscreteTimeIntegrator_DSTATE_d ; real_T
DiscreteTimeIntegrator1_DSTATE_f ; real_T DiscreteTimeIntegrator1_DSTATE_k ;
real_T DiscreteTimeIntegrator_DSTATE_i2 ; real_T StateSpace_DSTATE [ 19 ] ;
real_T _DSTATE_o [ 2 ] ; real_T u_DSTATE_g ; real_T u_DSTATE_b ; real_T
u_DSTATE_c ; real_T u_DSTATE_m ; real_T u_DSTATE_ba [ 2 ] ; real_T
IntegerDelay1_DSTATE [ 2 ] ; real_T DiscreteTransferFcn_DSTATE ; real_T
DiscreteTimeIntegrator1_DSTATE_n ; real_T DiscreteTimeIntegrator2_DSTATE ;
real_T UnitDelay_DSTATE_a [ 6 ] ; real_T UnitDelay_DSTATE_p [ 6 ] ; real_T
DiscreteTimeIntegrator_DSTATE_ii [ 6 ] ; real_T UnitDelay_DSTATE_l [ 6 ] ;
real_T NextOutput ; real_T _tmp ; real_T NextOutput_k ; real_T u_tmp ; real_T
DiscreteFilter_tmp ; real_T DiscreteFilter1_tmp ; real_T DiscreteFilter2_tmp
; real_T lastSin ; real_T lastCos ; real_T lastSin_i ; real_T lastCos_l ;
real_T lastSin_b ; real_T lastCos_h ; real_T NextOutput_l ; real_T u_tmp_k ;
real_T NextOutput_g ; real_T u_tmp_a ; struct { real_T TimeStampA ; real_T
LastUAtTimeA ; real_T TimeStampB ; real_T LastUAtTimeB ; } Derivative_RWORK ;
struct { void * AS ; void * BS ; void * CS ; void * DS ; void * DX_COL ; void
* BD_COL ; void * TMP1 ; void * TMP2 ; void * XTMP ; void * SWITCH_STATUS ;
void * SWITCH_STATUS_INIT ; void * SW_CHG ; void * CHOPPER ; void * G_STATE ;
void * IDX_SW_CHG ; void * Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW
; } StateSpace_PWORK ; struct { void * LoggedData ; } Scope_PWORK ; struct {
void * LoggedData ; } Scope1_PWORK ; struct { void * LoggedData ; }
Scope1_PWORK_k ; struct { void * LoggedData ; } Scope2_PWORK ; int32_T
systemEnable ; int32_T systemEnable_k ; int32_T systemEnable_i ; uint32_T
RandSeed ; uint32_T RandSeed_k ; uint32_T RandSeed_o ; uint32_T RandSeed_i ;
int_T StateSpace_IWORK [ 4 ] ; boolean_T UnitDelay_DSTATE_n [ 6 ] ; boolean_T
UnitDelay_DSTATE_g [ 6 ] ; int8_T ONDelay_SubsysRanBC ; int8_T
OFFDelay_SubsysRanBC ; int8_T Tail_SubsysRanBC ; int8_T
Saturation_SubsysRanBC ; int8_T sinthrcosthr_SubsysRanBC ; int8_T
sinbetacosbetasinthcosth_SubsysRanBC ; int8_T Rotorreferenceframe_SubsysRanBC
; int8_T Stationaryreferenceframe_SubsysRanBC ; int8_T
Synchronousreferenceframe_SubsysRanBC ; int8_T
Rotorreferenceframe_SubsysRanBC_p ; int8_T
Stationaryreferenceframe_SubsysRanBC_k ; int8_T
Synchronousreferenceframe_SubsysRanBC_b ; int8_T
DiscreteTimeIntegrator_PrevResetState [ 6 ] ; boolean_T Relay_Mode ;
boolean_T Relay1_Mode ; boolean_T Relay2_Mode ; boolean_T ONDelay_MODE ;
boolean_T OFFDelay_MODE ; boolean_T Tail_MODE ; boolean_T sinthrcosthr_MODE ;
boolean_T Rotorreferenceframe_MODE ; boolean_T Stationaryreferenceframe_MODE
; boolean_T Synchronousreferenceframe_MODE ; boolean_T
Rotorreferenceframe_MODE_p ; boolean_T Stationaryreferenceframe_MODE_n ;
boolean_T Synchronousreferenceframe_MODE_d ; char
pad_Synchronousreferenceframe_MODE_d ;
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless POSITIVEEdge_c ;
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless NEGATIVEEdge_j ;
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless POSITIVEEdge ;
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless NEGATIVEEdge ; }
D_Work_Vector_Control_SVPWM_encoderless ; typedef struct { const real_T
B_31_288_0 ; const real_T B_31_296_0 ; const real_T B_31_304_0 ; }
ConstBlockIO_Vector_Control_SVPWM_encoderless ;
#define Vector_Control_SVPWM_encoderless_rtC(S) ((ConstBlockIO_Vector_Control_SVPWM_encoderless *) _ssGetConstBlockIO(S))
struct Parameters_Vector_Control_SVPWM_encoderless_ { real_T P_0 ; real_T P_1
; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7
; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ;
real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T
P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ;
real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T
P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 [ 2 ] ; real_T P_39 [ 2 ] ;
real_T P_40 [ 2 ] ; real_T P_41 [ 2 ] ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 [ 2 ] ; real_T P_47 [ 2 ] ; real_T P_48 [ 2
] ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 [ 6 ]
; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ;
real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 [ 2 ] ; real_T P_63 ;
real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T
P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 [
2 ] ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ;
real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T
P_85 ; real_T P_86 [ 2 ] ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T
P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ;
real_T P_96 ; real_T P_97 [ 2 ] ; real_T P_98 ; real_T P_99 ; real_T P_100 ;
real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 ;
real_T P_106 ; real_T P_107 ; real_T P_108 [ 2 ] ; real_T P_109 ; real_T
P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T
P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T
P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T
P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T
P_130 ; real_T P_131 ; real_T P_132 [ 3 ] ; real_T P_133 [ 3 ] ; real_T P_134
; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T P_138 ; real_T P_139 ;
real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T P_143 ; real_T P_144 ;
real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T P_148 ; real_T P_149 ;
real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T P_154 ;
real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ; real_T P_159 ;
real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ; real_T P_164 ;
real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T P_168 ; real_T P_169 ;
real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T P_173 ; real_T P_174 ;
real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T P_178 ; real_T P_179 ;
real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T P_184 ;
real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T P_189 ;
real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T P_194 ;
real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T P_198 ; real_T P_199 ;
real_T P_200 ; real_T P_201 ; real_T P_202 ; real_T P_203 [ 6 ] ; real_T
P_204 [ 6 ] ; real_T P_205 [ 6 ] ; real_T P_206 ; real_T P_207 [ 2 ] ; real_T
P_208 ; real_T P_209 ; real_T P_210 [ 18 ] ; real_T P_211 ; real_T P_212 [ 3
] ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T P_217
; real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 [ 2 ] ; real_T
P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T
P_227 ; real_T P_228 ; real_T P_229 [ 2 ] ; real_T P_230 ; real_T P_231 ;
real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ;
real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ;
real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 ;
real_T P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ;
real_T P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ;
real_T P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ;
real_T P_262 ; real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ;
real_T P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 [ 2 ] ; real_T
P_271 ; real_T P_272 ; real_T P_273 ; real_T P_274 ; real_T P_275 ; real_T
P_276 ; real_T P_277 ; real_T P_278 ; real_T P_279 ; real_T P_280 ; real_T
P_281 ; real_T P_282 ; real_T P_283 ; real_T P_284 ; real_T P_285 ; real_T
P_286 ; real_T P_287 [ 6 ] ; uint32_T P_288 ; uint32_T P_289 ; uint32_T P_290
; uint32_T P_291 ; uint32_T P_292 ; uint32_T P_293 ; uint32_T P_294 ;
uint32_T P_295 ; uint32_T P_296 ; uint8_T P_297 ; uint8_T P_298 ; uint8_T
P_299 ; uint8_T P_300 ; boolean_T P_301 ; boolean_T P_302 ; boolean_T P_303 ;
boolean_T P_304 ; boolean_T P_305 ; boolean_T P_306 ; boolean_T P_307 ;
boolean_T P_308 ; boolean_T P_309 ; boolean_T P_310 ; boolean_T P_311 ; char
pad_P_311 [ 5 ] ; } ; extern Parameters_Vector_Control_SVPWM_encoderless
Vector_Control_SVPWM_encoderless_rtDefaultParameters ; extern const
ConstBlockIO_Vector_Control_SVPWM_encoderless
Vector_Control_SVPWM_encoderless_rtInvariantSignals ;
#endif
