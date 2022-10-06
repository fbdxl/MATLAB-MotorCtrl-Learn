#include "__cf_Vector_Control_SVPWM_encoderless_learn.h"
#include <math.h>
#include "Vector_Control_SVPWM_encoderless_learn_acc.h"
#include "Vector_Control_SVPWM_encoderless_learn_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
void Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge_Disable ( SimStruct
* const S , rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn *
localDW ) { localDW -> NEGATIVEEdge_MODE = FALSE ; } void
Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge ( SimStruct * const S ,
real_T rtu_0 , const boolean_T rtu_INprevious [ 6 ] , const boolean_T rtu_IN
[ 6 ] , rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn * localB ,
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless_learn * localDW ) {
int32_T i ; if ( ssIsSampleHit ( S , 1 , 0 ) && ssIsMajorTimeStep ( S ) ) {
if ( rtu_0 > 0.0 ) { if ( ! localDW -> NEGATIVEEdge_MODE ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } localDW -> NEGATIVEEdge_MODE = TRUE ; } } else { if ( localDW ->
NEGATIVEEdge_MODE ) { ssSetSolverNeedsReset ( S ) ;
Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge_Disable ( S , localDW ) ;
} } } if ( localDW -> NEGATIVEEdge_MODE ) { for ( i = 0 ; i < 6 ; i ++ ) {
localB -> B_32_0_0 [ i ] = ( ( int32_T ) rtu_INprevious [ i ] > ( int32_T )
rtu_IN [ i ] ) ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( localDW ->
NEGATIVEEdge_SubsysRanBC ) ; } } } void
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge_Disable ( SimStruct *
const S , rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn * localDW
) { localDW -> POSITIVEEdge_MODE = FALSE ; } void
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge ( SimStruct * const S ,
real_T rtu_0 , const boolean_T rtu_IN [ 6 ] , const boolean_T rtu_INprevious
[ 6 ] , rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn * localB ,
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless_learn * localDW ) {
int32_T i ; if ( ssIsSampleHit ( S , 1 , 0 ) && ssIsMajorTimeStep ( S ) ) {
if ( rtu_0 > 0.0 ) { if ( ! localDW -> POSITIVEEdge_MODE ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } localDW -> POSITIVEEdge_MODE = TRUE ; } } else { if ( localDW ->
POSITIVEEdge_MODE ) { ssSetSolverNeedsReset ( S ) ;
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge_Disable ( S , localDW ) ;
} } } if ( localDW -> POSITIVEEdge_MODE ) { for ( i = 0 ; i < 6 ; i ++ ) {
localB -> B_33_0_0 [ i ] = ( ( int32_T ) rtu_IN [ i ] > ( int32_T )
rtu_INprevious [ i ] ) ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
localDW -> POSITIVEEdge_SubsysRanBC ) ; } } } real_T
rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { uint32_T lo ; uint32_T hi ; lo
= * u % 127773U * 16807U ; hi = * u / 127773U * 2836U ; if ( lo < hi ) { * u
= 2147483647U - ( hi - lo ) ; } else { * u = lo - hi ; } return ( real_T ) *
u * 4.6566128752457969E-10 ; } real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T *
u ) { real_T sr ; real_T si ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u
) - 1.0 ; si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr +
si * si ; } while ( si > 1.0 ) ; return muDoubleScalarSqrt ( - 2.0 *
muDoubleScalarLog ( si ) / si ) * sr ; } static void mdlOutputs ( SimStruct *
S , int_T tid ) { real_T B_41_230_0 ; real_T B_41_249_0 [ 2 ] ; real_T
B_41_229_0 ; real_T B_41_86_0 ; real_T B_41_215_0 ; real_T B_41_223_0 ;
real_T B_41_204_0 ; real_T B_41_206_0 ; real_T B_41_406_0 ; real_T B_41_407_0
; real_T B_24_3_0 ; boolean_T B_41_130_0 ; boolean_T B_41_138_0 ; boolean_T
B_41_141_0 ; boolean_T B_41_144_0 ; boolean_T B_41_174_0 ; boolean_T
B_41_177_0 ; boolean_T B_41_180_0 ; real_T B_41_222_0 ; real_T B_41_26_0 ;
real_T B_41_347_0 ; real_T B_41_78_0 ; real_T B_41_82_0 ; boolean_T
B_41_100_0 ; real_T B_41_103_0 ; real_T B_41_401_0 ; real_T B_41_313_0 ;
real_T B_41_309_0 ; real_T B_41_419_0 ; real_T B_41_418_0 ; real_T B_41_120_0
; real_T B_41_123_0 ; real_T B_41_125_0 ; real_T B_41_127_0 ; real_T
B_41_128_0 ; real_T B_41_132_0 ; real_T B_41_159_0 [ 6 ] ; real_T B_3_7_0 ;
int32_T i ; real_T B_41_185_0_idx ; real_T B_41_185_0_idx_0 ; real_T
B_41_148_0_idx ; real_T B_41_148_0_idx_0 ; real_T B_41_146_0_idx ; real_T
B_41_146_0_idx_0 ; real_T B_41_182_0_idx ; real_T B_41_182_0_idx_0 ; real_T
B_41_136_0_idx ; real_T B_41_136_0_idx_0 ; real_T B_41_136_0_idx_1 ; real_T
B_41_136_0_idx_2 ; BlockIO_Vector_Control_SVPWM_encoderless_learn * _rtB ;
Parameters_Vector_Control_SVPWM_encoderless_learn * _rtP ;
ContinuousStates_Vector_Control_SVPWM_encoderless_learn * _rtX ;
D_Work_Vector_Control_SVPWM_encoderless_learn * _rtDW ; _rtDW = ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ;
_rtX = ( ( ContinuousStates_Vector_Control_SVPWM_encoderless_learn * )
ssGetContStates ( S ) ) ; _rtP = ( (
Parameters_Vector_Control_SVPWM_encoderless_learn * ) ssGetDefaultParam ( S )
) ; _rtB = ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * )
_ssGetBlockIO ( S ) ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i
< 6 ; i ++ ) { _rtB -> B_41_0_0 [ i ] = _rtP -> P_53 [ i ] ; _rtB -> B_41_1_0
[ i ] = _rtDW -> UnitDelay_DSTATE [ i ] ; } _rtB -> B_41_2_0 = _rtDW ->
u_DSTATE ; } if ( ssIsSampleHit ( S , 4 , 0 ) ) { _rtB -> B_41_4_0 = _rtP ->
P_59 * _rtDW -> NextOutput ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
B_41_5_0 = _rtB -> B_41_2_0 + _rtB -> B_41_4_0 ; _rtDW -> _tmp = ( _rtB ->
B_41_5_0 - _rtP -> P_62 [ 1 ] * _rtDW -> _DSTATE ) / _rtP -> P_62 [ 0 ] ;
_rtB -> B_41_6_0 = _rtP -> P_61 * _rtDW -> _tmp ; _rtB -> B_41_332_0 = _rtDW
-> u_DSTATE_k ; } if ( ssIsSampleHit ( S , 4 , 0 ) ) { _rtB -> B_41_9_0 =
_rtP -> P_67 * _rtDW -> NextOutput_k ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtB -> B_41_10_0 = _rtB -> B_41_332_0 + _rtB -> B_41_9_0 ; _rtDW -> u_tmp =
( _rtB -> B_41_10_0 - _rtP -> P_70 [ 1 ] * _rtDW -> u_DSTATE_e ) / _rtP ->
P_70 [ 0 ] ; _rtB -> B_41_11_0 = _rtP -> P_69 * _rtDW -> u_tmp ; } _rtB ->
B_41_12_0 = _rtX -> Integrator_CSTATE ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> B_41_13_0 = _rtP -> P_72 ; } _rtB -> B_41_14_0 = muDoubleScalarMod (
_rtB -> B_41_12_0 , _rtB -> B_41_13_0 ) ; _rtB -> B_41_15_0 =
muDoubleScalarSin ( _rtB -> B_41_14_0 ) ; _rtB -> B_41_16_0 =
muDoubleScalarCos ( _rtB -> B_41_14_0 ) ; ssCallAccelRunBlock ( S , 7 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; { ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn
* ) _ssGetBlockIO ( S ) ) -> B_41_18_0 = ( (
Parameters_Vector_Control_SVPWM_encoderless_learn * ) ssGetDefaultParam ( S )
) -> P_75 * ( ( ContinuousStates_Vector_Control_SVPWM_encoderless_learn * )
ssGetContStates ( S ) ) -> StateSpace_CSTATE ; } _rtB -> B_41_19_0 = _rtP ->
P_78 * _rtB -> B_41_18_0 ; if ( _rtB -> B_41_19_0 >= _rtP -> P_79 ) { _rtB ->
B_41_20_0 = _rtP -> P_79 ; } else if ( _rtB -> B_41_19_0 <= _rtP -> P_80 ) {
_rtB -> B_41_20_0 = _rtP -> P_80 ; } else { _rtB -> B_41_20_0 = _rtB ->
B_41_19_0 ; } _rtB -> B_41_21_0 = _rtB -> B_7_0_2 / _rtB -> B_41_20_0 ; if (
_rtB -> B_41_21_0 >= _rtP -> P_81 ) { _rtB -> B_41_22_0 = _rtP -> P_81 ; }
else if ( _rtB -> B_41_21_0 <= _rtP -> P_82 ) { _rtB -> B_41_22_0 = _rtP ->
P_82 ; } else { _rtB -> B_41_22_0 = _rtB -> B_41_21_0 ; } if ( ssIsSampleHit
( S , 2 , 0 ) ) { _rtB -> B_41_23_0 = _rtDW -> IntegerDelay1_DSTATE [ 0 ] ;
_rtB -> B_41_24_0 = _rtP -> P_84 * _rtB -> B_41_23_0 ; } _rtB -> B_41_25_0 =
_rtB -> B_41_22_0 + _rtB -> B_41_24_0 ; B_41_26_0 = _rtP -> P_85 * _rtB ->
B_41_25_0 ; _rtB -> B_41_27_0 [ 0 ] = _rtX -> Integrator1_CSTATE [ 0 ] ; _rtB
-> B_41_27_0 [ 1 ] = _rtX -> Integrator1_CSTATE [ 1 ] ; if ( ssIsSampleHit (
S , 2 , 0 ) ) { _rtB -> B_41_28_0 [ 0 ] = _rtP -> P_87 * _rtB -> B_41_6_0 ;
_rtB -> B_41_28_0 [ 1 ] = _rtP -> P_87 * _rtB -> B_41_11_0 ; } _rtB ->
B_41_30_0 [ 0 ] = ( _rtB -> B_41_27_0 [ 0 ] - _rtB -> B_41_28_0 [ 0 ] ) *
_rtP -> P_88 ; _rtB -> B_41_30_0 [ 1 ] = ( _rtB -> B_41_27_0 [ 1 ] - _rtB ->
B_41_28_0 [ 1 ] ) * _rtP -> P_88 ; ssCallAccelRunBlock ( S , 9 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_41_32_0 = muDoubleScalarSin ( _rtB ->
B_9_0_2 ) ; _rtB -> B_41_33_0 = muDoubleScalarCos ( _rtB -> B_9_0_2 ) ;
ssCallAccelRunBlock ( S , 6 , 0 , SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit
( S , 1 , 0 ) ) { _rtB -> B_41_36_0 = _rtP -> P_89 ; } _rtB -> B_41_37_0 =
_rtB -> B_41_36_0 - _rtB -> B_6_0_1 ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtB -> B_41_39_0 = _rtP -> P_91 * _rtB -> B_41_37_0 ; _rtB -> B_41_40_0 =
_rtP -> P_92 * _rtB -> B_41_39_0 + _rtDW -> Integrator_DSTATE ; B_41_347_0 =
_rtP -> P_90 * _rtB -> B_41_37_0 + _rtB -> B_41_40_0 ; if ( B_41_347_0 >=
_rtP -> P_94 ) { _rtB -> B_41_42_0 = _rtP -> P_94 ; } else if ( B_41_347_0 <=
_rtP -> P_95 ) { _rtB -> B_41_42_0 = _rtP -> P_95 ; } else { _rtB ->
B_41_42_0 = B_41_347_0 ; } if ( _rtB -> B_41_42_0 >= _rtP -> P_96 ) { _rtB ->
B_41_43_0 = _rtP -> P_96 ; } else if ( _rtB -> B_41_42_0 <= _rtP -> P_97 ) {
_rtB -> B_41_43_0 = _rtP -> P_97 ; } else { _rtB -> B_41_43_0 = _rtB ->
B_41_42_0 ; } } _rtB -> B_41_44_0 = _rtB -> B_41_43_0 - B_41_26_0 * _rtB ->
B_6_0_2 ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { B_41_347_0 = _rtP -> P_98 ;
_rtB -> B_41_319_0 = _rtP -> P_98 - _rtB -> B_41_23_0 ; _rtB -> B_41_315_0 =
_rtP -> P_99 * _rtB -> B_41_319_0 ; _rtB -> B_41_48_0 = _rtP -> P_100 * _rtB
-> B_41_319_0 ; } if ( ssIsSampleHit ( S , 3 , 0 ) ) { if ( _rtDW ->
DiscreteTimeIntegrator_SYSTEM_ENABLE != 0 ) { _rtB -> B_41_49_0 = _rtDW ->
DiscreteTimeIntegrator_DSTATE ; } else { _rtB -> B_41_49_0 = _rtP -> P_101 *
_rtB -> B_41_48_0 + _rtDW -> DiscreteTimeIntegrator_DSTATE ; } } if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_41_311_0 = _rtB -> B_41_315_0 +
_rtB -> B_41_49_0 ; if ( _rtB -> B_41_311_0 >= _rtP -> P_103 ) { _rtB ->
B_41_51_0 = _rtP -> P_103 ; } else if ( _rtB -> B_41_311_0 <= _rtP -> P_104 )
{ _rtB -> B_41_51_0 = _rtP -> P_104 ; } else { _rtB -> B_41_51_0 = _rtB ->
B_41_311_0 ; } } _rtB -> B_41_52_0 = _rtB -> B_41_51_0 - _rtB -> B_6_0_2 ; if
( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_41_54_0 = _rtP -> P_106 * _rtB ->
B_41_52_0 ; _rtB -> B_41_55_0 = _rtP -> P_107 * _rtB -> B_41_54_0 + _rtDW ->
Integrator_DSTATE_i ; B_41_347_0 = _rtP -> P_105 * _rtB -> B_41_52_0 + _rtB
-> B_41_55_0 ; if ( B_41_347_0 >= _rtP -> P_109 ) { _rtB -> B_41_57_0 = _rtP
-> P_109 ; } else if ( B_41_347_0 <= _rtP -> P_110 ) { _rtB -> B_41_57_0 =
_rtP -> P_110 ; } else { _rtB -> B_41_57_0 = B_41_347_0 ; } if ( _rtB ->
B_41_57_0 >= _rtP -> P_111 ) { _rtB -> B_41_58_0 = _rtP -> P_111 ; } else if
( _rtB -> B_41_57_0 <= _rtP -> P_112 ) { _rtB -> B_41_58_0 = _rtP -> P_112 ;
} else { _rtB -> B_41_58_0 = _rtB -> B_41_57_0 ; } } _rtB -> B_41_64_0 = (
_rtP -> P_113 * _rtB -> B_41_25_0 * _rtB -> B_6_0_1 + _rtP -> P_114 * _rtB ->
B_41_25_0 * _rtB -> B_9_0_1 ) + _rtB -> B_41_58_0 ; ssCallAccelRunBlock ( S ,
5 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 27 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
B_41_67_0 = _rtDW -> IntegerDelay3_DSTATE ; } ssCallAccelRunBlock ( S , 28 ,
0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 26 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; B_41_86_0 = ssGetT ( S ) ; ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
B_41_71_0 = ssGetTStart ( S ) ; B_41_86_0 -= _rtB -> B_41_71_0 ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_41_73_0 = _rtP -> P_116 ; }
B_41_86_0 = muDoubleScalarRem ( B_41_86_0 , _rtB -> B_41_73_0 ) ; B_41_86_0 =
rt_Lookup ( ( const real_T * ) & _rtP -> P_117 , 3 , B_41_86_0 , ( const
real_T * ) & _rtP -> P_118 ) ; B_41_78_0 = B_41_86_0 - _rtB -> B_26_0_1 ; if
( ssIsMajorTimeStep ( S ) ) { if ( B_41_78_0 >= _rtP -> P_119 ) { _rtDW ->
Relay_Mode = TRUE ; } else { if ( B_41_78_0 <= _rtP -> P_120 ) { _rtDW ->
Relay_Mode = FALSE ; } } } if ( _rtDW -> Relay_Mode ) { B_41_78_0 = _rtP ->
P_121 ; } else { B_41_78_0 = _rtP -> P_122 ; } B_41_82_0 = B_41_86_0 - _rtB
-> B_26_0_2 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_41_82_0 >= _rtP ->
P_125 ) { _rtDW -> Relay1_Mode = TRUE ; } else { if ( B_41_82_0 <= _rtP ->
P_126 ) { _rtDW -> Relay1_Mode = FALSE ; } } } if ( _rtDW -> Relay1_Mode ) {
B_41_82_0 = _rtP -> P_127 ; } else { B_41_82_0 = _rtP -> P_128 ; } B_41_86_0
-= _rtB -> B_26_0_3 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_41_86_0 >= _rtP
-> P_131 ) { _rtDW -> Relay2_Mode = TRUE ; } else { if ( B_41_86_0 <= _rtP ->
P_132 ) { _rtDW -> Relay2_Mode = FALSE ; } } } if ( _rtDW -> Relay2_Mode ) {
B_41_86_0 = _rtP -> P_133 ; } else { B_41_86_0 = _rtP -> P_134 ; } B_41_229_0
= _rtP -> P_135 * B_41_86_0 + _rtP -> P_136 ; _rtB -> B_41_89_0 [ 0 ] = (
B_41_78_0 != 0.0 ) ; _rtB -> B_41_89_0 [ 1 ] = ( _rtP -> P_123 * B_41_78_0 +
_rtP -> P_124 != 0.0 ) ; _rtB -> B_41_89_0 [ 2 ] = ( B_41_82_0 != 0.0 ) ;
_rtB -> B_41_89_0 [ 3 ] = ( _rtP -> P_129 * B_41_82_0 + _rtP -> P_130 != 0.0
) ; _rtB -> B_41_89_0 [ 4 ] = ( B_41_86_0 != 0.0 ) ; _rtB -> B_41_89_0 [ 5 ]
= ( B_41_229_0 != 0.0 ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
B_41_90_0 = _rtP -> P_137 ; B_41_100_0 = ( _rtP -> P_138 == _rtP -> P_139 ) ;
_rtB -> B_41_94_0 = B_41_100_0 ; if ( ssIsMajorTimeStep ( S ) ) { if ( _rtB
-> B_41_94_0 ) { if ( ! _rtDW -> ONDelay_MODE ) { if ( ssGetTaskTime ( S , 1
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW ->
ONDelay_MODE = TRUE ; } } else { if ( _rtDW -> ONDelay_MODE ) {
ssSetSolverNeedsReset ( S ) ; if ( _rtDW -> POSITIVEEdge_c .
POSITIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
POSITIVEEdge_c ) ; } if ( _rtDW -> NEGATIVEEdge_j . NEGATIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
NEGATIVEEdge_j ) ; } _rtDW -> ONDelay_MODE = FALSE ; } } } } if ( _rtDW ->
ONDelay_MODE ) { if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_40_0_0 = _rtP
-> P_49 ; _rtB -> B_40_1_0 = _rtP -> P_50 ; switch ( ( int32_T ) _rtP -> P_51
) { case 1 : _rtB -> B_40_8_0 = _rtP -> P_48 [ 0 ] ; _rtB -> B_40_7_0 = _rtP
-> P_48 [ 1 ] ; break ; case 2 : _rtB -> B_40_8_0 = _rtP -> P_47 [ 0 ] ; _rtB
-> B_40_7_0 = _rtP -> P_47 [ 1 ] ; break ; default : _rtB -> B_40_8_0 = _rtP
-> P_46 [ 0 ] ; _rtB -> B_40_7_0 = _rtP -> P_46 [ 1 ] ; break ; } } if (
ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_40_9_0 [ i ] = _rtDW -> UnitDelay_DSTATE_n [ i ] ; } }
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge ( S , _rtB -> B_40_8_0 ,
_rtB -> B_41_89_0 , _rtB -> B_40_9_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
POSITIVEEdge_c , & ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> POSITIVEEdge_c ) ;
Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge ( S , _rtB -> B_40_7_0 ,
_rtB -> B_40_9_0 , _rtB -> B_41_89_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
NEGATIVEEdge_j , & ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> NEGATIVEEdge_j ) ; if ( ssIsSampleHit ( S , 2 , 0 )
) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_40_13_0 [ i ] = _rtDW ->
UnitDelay_DSTATE_a [ i ] ; } } for ( i = 0 ; i < 6 ; i ++ ) { if ( _rtB ->
POSITIVEEdge_c . B_33_0_0 [ i ] || _rtB -> NEGATIVEEdge_j . B_32_0_0 [ i ] )
{ _rtB -> B_40_14_0 [ i ] = _rtB -> B_41_90_0 ; } else { _rtB -> B_40_14_0 [
i ] = _rtB -> B_40_13_0 [ i ] ; } _rtB -> B_40_15_0 [ i ] = _rtB -> B_40_14_0
[ i ] - _rtB -> B_40_1_0 ; _rtB -> B_40_17_0 [ i ] = ( _rtB -> B_41_89_0 [ i
] && ( _rtB -> B_40_0_0 >= _rtB -> B_40_15_0 [ i ] ) ) ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ONDelay_SubsysRanBC ) ; } }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_41_97_0 = ! B_41_100_0 ; if (
ssIsMajorTimeStep ( S ) ) { if ( _rtB -> B_41_97_0 ) { if ( ! _rtDW ->
OFFDelay_MODE ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } _rtDW -> OFFDelay_MODE = TRUE ; } } else { if
( _rtDW -> OFFDelay_MODE ) { ssSetSolverNeedsReset ( S ) ; if ( _rtDW ->
POSITIVEEdge . POSITIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
POSITIVEEdge ) ; } if ( _rtDW -> NEGATIVEEdge . NEGATIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
NEGATIVEEdge ) ; } _rtDW -> OFFDelay_MODE = FALSE ; } } } } if ( _rtDW ->
OFFDelay_MODE ) { if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_34_0_0 =
_rtP -> P_42 ; _rtB -> B_34_1_0 = _rtP -> P_43 ; switch ( ( int32_T ) _rtP ->
P_44 ) { case 1 : _rtB -> B_34_8_0 = _rtP -> P_41 [ 0 ] ; _rtB -> B_34_7_0 =
_rtP -> P_41 [ 1 ] ; break ; case 2 : _rtB -> B_34_8_0 = _rtP -> P_40 [ 0 ] ;
_rtB -> B_34_7_0 = _rtP -> P_40 [ 1 ] ; break ; default : _rtB -> B_34_8_0 =
_rtP -> P_39 [ 0 ] ; _rtB -> B_34_7_0 = _rtP -> P_39 [ 1 ] ; break ; } } if (
ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_34_9_0 [ i ] = _rtDW -> UnitDelay_DSTATE_g [ i ] ; } }
Vector_Control_SVPWM_encoderless_learn_POSITIVEEdge ( S , _rtB -> B_34_8_0 ,
_rtB -> B_41_89_0 , _rtB -> B_34_9_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
POSITIVEEdge , & ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> POSITIVEEdge ) ;
Vector_Control_SVPWM_encoderless_learn_NEGATIVEEdge ( S , _rtB -> B_34_7_0 ,
_rtB -> B_34_9_0 , _rtB -> B_41_89_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
NEGATIVEEdge , & ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> NEGATIVEEdge ) ; if ( ssIsSampleHit ( S , 2 , 0 ) )
{ for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_34_14_0 [ i ] = _rtDW ->
UnitDelay_DSTATE_p [ i ] ; } } for ( i = 0 ; i < 6 ; i ++ ) { if ( _rtB ->
POSITIVEEdge . B_33_0_0 [ i ] || _rtB -> NEGATIVEEdge . B_32_0_0 [ i ] ) {
_rtB -> B_34_15_0 [ i ] = _rtB -> B_41_90_0 ; } else { _rtB -> B_34_15_0 [ i
] = _rtB -> B_34_14_0 [ i ] ; } _rtB -> B_34_16_0 [ i ] = _rtB -> B_34_15_0 [
i ] - _rtB -> B_34_1_0 ; _rtB -> B_34_19_0 [ i ] = ! ( ( ! _rtB -> B_41_89_0
[ i ] ) && ( _rtB -> B_34_0_0 >= _rtB -> B_34_16_0 [ i ] ) ) ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> OFFDelay_SubsysRanBC ) ; }
} for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_41_99_0 [ i ] = ( _rtB ->
B_40_17_0 [ i ] || _rtB -> B_34_19_0 [ i ] ) ; } if ( ssIsSampleHit ( S , 1 ,
0 ) ) { _rtB -> B_41_101_0 = _rtP -> P_361 ; if ( ssIsMajorTimeStep ( S ) ) {
if ( _rtB -> B_41_101_0 ) { if ( ! _rtDW -> Tail_MODE ) { if ( ssGetTaskTime
( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } for ( i =
0 ; i < 6 ; i ++ ) { _rtDW -> DiscreteTimeIntegrator_DSTATE_ii [ i ] = _rtP
-> P_4 ; _rtDW -> DiscreteTimeIntegrator_PrevResetState [ i ] = 2 ; _rtDW ->
UnitDelay_DSTATE_l [ i ] = _rtP -> P_13 ; } _rtDW -> Tail_MODE = TRUE ; } }
else { if ( _rtDW -> Tail_MODE ) { ssSetSolverNeedsReset ( S ) ; _rtDW ->
Tail_MODE = FALSE ; } } } } if ( _rtDW -> Tail_MODE ) { if ( ssIsSampleHit (
S , 2 , 0 ) ) { _rtB -> B_3_0_0 = _rtP -> P_1 ; } if ( ssIsSampleHit ( S , 1
, 0 ) ) { _rtB -> B_3_1_0 = _rtP -> P_2 ; } if ( ssIsSampleHit ( S , 2 , 0 )
) { for ( i = 0 ; i < 6 ; i ++ ) { if ( ( ! _rtB -> B_41_99_0 [ i ] ) && (
_rtDW -> DiscreteTimeIntegrator_PrevResetState [ i ] == 1 ) ) { _rtDW ->
DiscreteTimeIntegrator_DSTATE_ii [ i ] = _rtP -> P_4 ; } _rtB -> B_3_2_0 [ i
] = _rtDW -> DiscreteTimeIntegrator_DSTATE_ii [ i ] ; } } if ( ssIsSampleHit
( S , 1 , 0 ) ) { B_3_7_0 = _rtP -> P_5 ; } if ( ssIsSampleHit ( S , 2 , 0 )
) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_3_4_0 [ i ] = _rtP -> P_6 * _rtB
-> B_3_2_0 [ i ] ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { for ( i = 0 ; i <
6 ; i ++ ) { B_41_82_0 = ( _rtP -> P_9 - _rtB -> B_3_2_0 [ i ] ) * _rtP ->
P_10 ; B_41_78_0 = B_3_7_0 + _rtB -> B_3_4_0 [ i ] ; if ( B_41_78_0 >= _rtP
-> P_7 ) { B_41_78_0 = _rtP -> P_7 ; } else { if ( B_41_78_0 <= _rtP -> P_8 )
{ B_41_78_0 = _rtP -> P_8 ; } } if ( B_41_82_0 >= _rtP -> P_11 ) { B_41_82_0
= _rtP -> P_11 ; } else { if ( B_41_82_0 <= _rtP -> P_12 ) { B_41_82_0 = _rtP
-> P_12 ; } } _rtB -> B_3_11_0 [ i ] = B_41_78_0 + B_41_82_0 ; } } if (
ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_3_12_0 [ i ] = _rtDW -> UnitDelay_DSTATE_l [ i ] ; } } for ( i = 0 ; i < 6
; i ++ ) { if ( _rtB -> B_41_99_0 [ i ] ) { _rtB -> B_3_13_0 [ i ] = _rtB ->
B_41_1_0 [ i ] ; } else { _rtB -> B_3_13_0 [ i ] = _rtB -> B_3_12_0 [ i ] ; }
_rtB -> B_3_14_0 [ i ] = _rtB -> B_3_11_0 [ i ] * _rtB -> B_3_13_0 [ i ] *
_rtB -> B_3_1_0 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
Tail_SubsysRanBC ) ; } } if ( ssIsSampleHit ( S , 2 , 0 ) ) { B_41_103_0 =
_rtP -> P_140 ; B_41_347_0 = _rtDW -> DiscreteTimeIntegrator_DSTATE_i ;
B_41_401_0 = _rtDW -> DiscreteTimeIntegrator1_DSTATE ; B_41_313_0 = _rtDW ->
DiscreteTimeIntegrator_DSTATE_d ; B_41_309_0 = _rtDW ->
DiscreteTimeIntegrator1_DSTATE_f ; B_41_26_0 = ( _rtP -> P_145 * _rtDW ->
DiscreteTimeIntegrator_DSTATE_i + _rtP -> P_150 * _rtDW ->
DiscreteTimeIntegrator_DSTATE_d ) * _rtP -> P_151 ; B_3_7_0 = ( _rtP -> P_145
* _rtDW -> DiscreteTimeIntegrator1_DSTATE + _rtP -> P_150 * _rtDW ->
DiscreteTimeIntegrator1_DSTATE_f ) * _rtP -> P_152 ; _rtB -> B_41_115_0 =
_rtP -> P_153 ; if ( _rtB -> B_41_115_0 > 0.0 ) { B_41_78_0 = B_41_26_0 *
B_41_26_0 + B_3_7_0 * B_3_7_0 ; B_41_82_0 = ( ( ( ( 5.0 * B_41_78_0 + 4.0 ) *
B_41_78_0 + 3.0 ) * B_41_78_0 + 2.0 ) * B_41_78_0 + 1.0 ) * B_41_78_0 ; if (
B_41_78_0 > _rtP -> P_16 ) { _rtB -> B_13_7_0 = B_41_26_0 - B_41_26_0 *
B_41_82_0 * _rtP -> P_15 ; _rtB -> B_13_9_0 = B_3_7_0 - B_41_82_0 * B_3_7_0 *
_rtP -> P_14 ; } else { _rtB -> B_13_7_0 = B_41_26_0 ; _rtB -> B_13_9_0 =
B_3_7_0 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
Saturation_SubsysRanBC ) ; } } if ( _rtP -> P_154 >= _rtP -> P_155 ) {
B_41_418_0 = _rtB -> B_13_7_0 ; } else { B_41_418_0 = B_41_26_0 ; }
B_41_120_0 = ( B_41_347_0 - B_41_418_0 ) * _rtP -> P_156 ; if ( _rtP -> P_154
>= _rtP -> P_157 ) { B_41_419_0 = _rtB -> B_13_9_0 ; } else { B_41_419_0 =
B_3_7_0 ; } B_41_123_0 = ( B_41_401_0 - B_41_419_0 ) * _rtP -> P_158 ;
B_41_125_0 = ( B_41_313_0 - B_41_418_0 ) * _rtP -> P_159 ; B_41_127_0 = (
B_41_309_0 - B_41_419_0 ) * _rtP -> P_160 ; B_41_128_0 = _rtDW ->
DiscreteTimeIntegrator1_DSTATE_k ; B_41_100_0 = _rtP -> P_362 ; B_41_130_0 =
_rtP -> P_362 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_41_130_0 ) { if ( !
_rtDW -> sinthrcosthr_MODE ) { if ( ssGetTaskTime ( S , 2 ) != ssGetTStart (
S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW -> sinthrcosthr_MODE = TRUE ; }
} else { if ( _rtDW -> sinthrcosthr_MODE ) { ssSetSolverNeedsReset ( S ) ;
_rtB -> B_25_1_0 = _rtP -> P_37 ; _rtB -> B_25_2_0 = _rtP -> P_37 ; _rtB ->
B_25_0_0 [ 0 ] = _rtP -> P_37 ; _rtB -> B_25_0_0 [ 1 ] = _rtP -> P_37 ; _rtDW
-> sinthrcosthr_MODE = FALSE ; } } } if ( _rtDW -> sinthrcosthr_MODE ) { _rtB
-> B_25_0_0 [ 0 ] = _rtP -> P_38 [ 0 ] ; _rtB -> B_25_0_0 [ 1 ] = _rtP ->
P_38 [ 1 ] ; _rtB -> B_25_1_0 = muDoubleScalarSin ( B_41_128_0 ) ; _rtB ->
B_25_2_0 = muDoubleScalarCos ( B_41_128_0 ) ; if ( ssIsMajorTimeStep ( S ) )
{ srUpdateBC ( _rtDW -> sinthrcosthr_SubsysRanBC ) ; } } B_41_132_0 = _rtDW
-> DiscreteTimeIntegrator_DSTATE_i2 ; _rtB -> B_41_134_0 = _rtP -> P_363 ; if
( _rtB -> B_41_134_0 ) { B_24_3_0 = ssGetTaskTime ( S , 2 ) ; _rtB ->
B_24_2_0 = _rtP -> P_35 - B_41_132_0 ; B_24_3_0 *= _rtP -> P_36 ; B_41_26_0 =
B_24_3_0 - B_41_128_0 ; _rtB -> B_24_5_0 = muDoubleScalarSin ( B_24_3_0 ) ;
_rtB -> B_24_6_0 = muDoubleScalarSin ( B_41_26_0 ) ; _rtB -> B_24_7_0 =
muDoubleScalarCos ( B_41_26_0 ) ; _rtB -> B_24_8_0 = muDoubleScalarCos (
B_24_3_0 ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
sinbetacosbetasinthcosth_SubsysRanBC ) ; } } if ( B_41_100_0 ) {
B_41_136_0_idx_2 = _rtB -> B_25_1_0 ; B_41_136_0_idx_1 = _rtB -> B_25_2_0 ;
B_41_136_0_idx_0 = _rtB -> B_25_0_0 [ 0 ] ; B_41_136_0_idx = _rtB -> B_25_0_0
[ 1 ] ; } else { B_41_136_0_idx_2 = _rtB -> B_24_6_0 ; B_41_136_0_idx_1 =
_rtB -> B_24_7_0 ; B_41_136_0_idx_0 = _rtB -> B_24_5_0 ; B_41_136_0_idx =
_rtB -> B_24_8_0 ; } B_41_138_0 = _rtP -> P_364 ; if ( ssIsMajorTimeStep ( S
) ) { if ( B_41_138_0 ) { if ( ! _rtDW -> Rotorreferenceframe_MODE ) { if (
ssGetTaskTime ( S , 2 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } _rtDW -> Rotorreferenceframe_MODE = TRUE ; } } else { if ( _rtDW ->
Rotorreferenceframe_MODE ) { ssSetSolverNeedsReset ( S ) ; _rtB -> B_17_0_0 =
_rtP -> P_23 ; _rtB -> B_17_1_0 = _rtP -> P_23 ; _rtB -> B_17_2_0 = _rtP ->
P_24 ; _rtB -> B_17_3_0 = _rtP -> P_24 ; _rtDW -> Rotorreferenceframe_MODE =
FALSE ; } } } if ( _rtDW -> Rotorreferenceframe_MODE ) { _rtB -> B_17_0_0 =
B_41_120_0 ; _rtB -> B_17_1_0 = - ( 1.7320508075688772 * B_41_123_0 +
B_41_120_0 ) / 2.0 ; _rtB -> B_17_2_0 = B_41_136_0_idx_1 * B_41_125_0 +
B_41_136_0_idx_2 * B_41_127_0 ; _rtB -> B_17_3_0 = ( ( 1.7320508075688772 *
B_41_136_0_idx_2 + - B_41_136_0_idx_1 ) * B_41_125_0 + ( - 1.7320508075688772
* B_41_136_0_idx_1 - B_41_136_0_idx_2 ) * B_41_127_0 ) / 2.0 ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
Rotorreferenceframe_SubsysRanBC ) ; } } B_41_141_0 = _rtP -> P_365 ; if (
ssIsMajorTimeStep ( S ) ) { if ( B_41_141_0 ) { if ( ! _rtDW ->
Stationaryreferenceframe_MODE ) { if ( ssGetTaskTime ( S , 2 ) != ssGetTStart
( S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW ->
Stationaryreferenceframe_MODE = TRUE ; } } else { if ( _rtDW ->
Stationaryreferenceframe_MODE ) { ssSetSolverNeedsReset ( S ) ; _rtB ->
B_18_0_0 = _rtP -> P_25 ; _rtB -> B_18_1_0 = _rtP -> P_25 ; _rtB -> B_18_2_0
= _rtP -> P_26 ; _rtB -> B_18_3_0 = _rtP -> P_26 ; _rtDW ->
Stationaryreferenceframe_MODE = FALSE ; } } } if ( _rtDW ->
Stationaryreferenceframe_MODE ) { _rtB -> B_18_0_0 = B_41_136_0_idx_1 *
B_41_120_0 - B_41_136_0_idx_2 * B_41_123_0 ; _rtB -> B_18_1_0 = ( ( -
B_41_136_0_idx_1 - 1.7320508075688772 * B_41_136_0_idx_2 ) * B_41_120_0 + (
B_41_136_0_idx_2 - 1.7320508075688772 * B_41_136_0_idx_1 ) * B_41_123_0 ) /
2.0 ; _rtB -> B_18_2_0 = B_41_125_0 ; _rtB -> B_18_3_0 = - (
1.7320508075688772 * B_41_127_0 + B_41_125_0 ) / 2.0 ; if ( ssIsMajorTimeStep
( S ) ) { srUpdateBC ( _rtDW -> Stationaryreferenceframe_SubsysRanBC ) ; } }
B_41_144_0 = _rtP -> P_366 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_41_144_0
) { if ( ! _rtDW -> Synchronousreferenceframe_MODE ) { if ( ssGetTaskTime ( S
, 2 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW ->
Synchronousreferenceframe_MODE = TRUE ; } } else { if ( _rtDW ->
Synchronousreferenceframe_MODE ) { ssSetSolverNeedsReset ( S ) ; _rtB ->
B_19_0_0 = _rtP -> P_27 ; _rtB -> B_19_1_0 = _rtP -> P_27 ; _rtB -> B_19_2_0
= _rtP -> P_28 ; _rtB -> B_19_3_0 = _rtP -> P_28 ; _rtDW ->
Synchronousreferenceframe_MODE = FALSE ; } } } if ( _rtDW ->
Synchronousreferenceframe_MODE ) { _rtB -> B_19_0_0 = B_41_136_0_idx_1 *
B_41_120_0 + B_41_136_0_idx_2 * B_41_123_0 ; _rtB -> B_19_1_0 = ( (
1.7320508075688772 * B_41_136_0_idx_2 + - B_41_136_0_idx_1 ) * B_41_120_0 + (
- 1.7320508075688772 * B_41_136_0_idx_1 - B_41_136_0_idx_2 ) * B_41_123_0 ) /
2.0 ; _rtB -> B_19_2_0 = B_41_136_0_idx * B_41_125_0 + B_41_136_0_idx_0 *
B_41_127_0 ; _rtB -> B_19_3_0 = ( ( 1.7320508075688772 * B_41_136_0_idx_0 + -
B_41_136_0_idx ) * B_41_125_0 + ( - 1.7320508075688772 * B_41_136_0_idx -
B_41_136_0_idx_0 ) * B_41_127_0 ) / 2.0 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> Synchronousreferenceframe_SubsysRanBC ) ; } } switch (
( int32_T ) B_41_103_0 ) { case 1 : B_41_146_0_idx_0 = _rtB -> B_17_0_0 ;
B_41_146_0_idx = _rtB -> B_17_1_0 ; break ; case 2 : B_41_146_0_idx_0 = _rtB
-> B_18_0_0 ; B_41_146_0_idx = _rtB -> B_18_1_0 ; break ; default :
B_41_146_0_idx_0 = _rtB -> B_19_0_0 ; B_41_146_0_idx = _rtB -> B_19_1_0 ;
break ; } switch ( ( int32_T ) _rtP -> P_165 ) { case 1 : B_41_148_0_idx_0 =
_rtB -> B_17_2_0 ; B_41_148_0_idx = _rtB -> B_17_3_0 ; break ; case 2 :
B_41_148_0_idx_0 = _rtB -> B_18_2_0 ; B_41_148_0_idx = _rtB -> B_18_3_0 ;
break ; default : B_41_148_0_idx_0 = _rtB -> B_19_2_0 ; B_41_148_0_idx = _rtB
-> B_19_3_0 ; break ; } _rtB -> B_41_149_0 [ 0 ] = _rtP -> P_166 *
B_41_146_0_idx_0 ; _rtB -> B_41_149_0 [ 1 ] = _rtP -> P_166 * B_41_146_0_idx
; _rtB -> B_41_149_0 [ 2 ] = _rtP -> P_166 * B_41_148_0_idx_0 ; _rtB ->
B_41_149_0 [ 3 ] = _rtP -> P_166 * B_41_148_0_idx ; if ( _rtDW ->
systemEnable != 0 ) { _rtDW -> lastSin = muDoubleScalarSin ( _rtP -> P_169 *
ssGetTaskTime ( S , 2 ) ) ; _rtDW -> lastCos = muDoubleScalarCos ( _rtP ->
P_169 * ssGetTaskTime ( S , 2 ) ) ; _rtDW -> systemEnable = 0 ; } _rtB ->
B_41_150_0 = ( ( _rtDW -> lastSin * _rtP -> P_173 + _rtDW -> lastCos * _rtP
-> P_172 ) * _rtP -> P_171 + ( _rtDW -> lastCos * _rtP -> P_173 - _rtDW ->
lastSin * _rtP -> P_172 ) * _rtP -> P_170 ) * _rtP -> P_167 + _rtP -> P_168 ;
if ( _rtDW -> systemEnable_k != 0 ) { _rtDW -> lastSin_i = muDoubleScalarSin
( _rtP -> P_176 * ssGetTaskTime ( S , 2 ) ) ; _rtDW -> lastCos_l =
muDoubleScalarCos ( _rtP -> P_176 * ssGetTaskTime ( S , 2 ) ) ; _rtDW ->
systemEnable_k = 0 ; } _rtB -> B_41_151_0 = ( ( _rtDW -> lastSin_i * _rtP ->
P_180 + _rtDW -> lastCos_l * _rtP -> P_179 ) * _rtP -> P_178 + ( _rtDW ->
lastCos_l * _rtP -> P_180 - _rtDW -> lastSin_i * _rtP -> P_179 ) * _rtP ->
P_177 ) * _rtP -> P_174 + _rtP -> P_175 ; if ( _rtDW -> systemEnable_i != 0 )
{ _rtDW -> lastSin_b = muDoubleScalarSin ( _rtP -> P_183 * ssGetTaskTime ( S
, 2 ) ) ; _rtDW -> lastCos_h = muDoubleScalarCos ( _rtP -> P_183 *
ssGetTaskTime ( S , 2 ) ) ; _rtDW -> systemEnable_i = 0 ; } _rtB ->
B_41_152_0 = ( ( _rtDW -> lastSin_b * _rtP -> P_187 + _rtDW -> lastCos_h *
_rtP -> P_186 ) * _rtP -> P_185 + ( _rtDW -> lastCos_h * _rtP -> P_187 -
_rtDW -> lastSin_b * _rtP -> P_186 ) * _rtP -> P_184 ) * _rtP -> P_181 + _rtP
-> P_182 ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_41_153_0 [ i ] = _rtP ->
P_188 [ i ] ; if ( _rtB -> B_41_1_0 [ i ] != 0.0 ) { _rtB -> B_41_156_0 [ i ]
= _rtP -> P_189 [ i ] ; } else { _rtB -> B_41_156_0 [ i ] = _rtP -> P_190 [ i
] ; } } ssCallAccelRunBlock ( S , 41 , 157 , SS_CALL_MDL_OUTPUTS ) ;
B_41_418_0 = _rtP -> P_191 ; for ( i = 0 ; i < 6 ; i ++ ) { B_41_159_0 [ i ]
= _rtB -> B_41_157_0 [ i + 6 ] * _rtP -> P_192 ; } } for ( i = 0 ; i < 6 ; i
++ ) { _rtB -> B_41_160_0 [ i ] = ( real_T ) _rtB -> B_41_99_0 [ i ] ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { if ( _rtB ->
B_41_157_1 [ i + 6 ] >= _rtP -> P_193 ) { B_41_82_0 = B_41_159_0 [ i ] ; }
else { B_41_82_0 = B_41_418_0 ; } if ( B_41_82_0 >= _rtP -> P_194 ) { _rtB ->
B_41_162_0 [ i ] = _rtP -> P_194 ; } else if ( B_41_82_0 <= _rtP -> P_195 ) {
_rtB -> B_41_162_0 [ i ] = _rtP -> P_195 ; } else { _rtB -> B_41_162_0 [ i ]
= B_41_82_0 ; } } B_41_26_0 = _rtP -> P_196 ; B_41_103_0 = _rtP -> P_198 *
_rtP -> P_197 [ 0 ] ; B_41_82_0 = _rtP -> P_198 * _rtP -> P_197 [ 1 ] ;
B_41_78_0 = _rtP -> P_198 * _rtB -> B_41_157_0 [ 12 ] ; B_3_7_0 = _rtP ->
P_198 * _rtB -> B_41_157_0 [ 13 ] ; B_41_174_0 = _rtP -> P_367 ; if (
ssIsMajorTimeStep ( S ) ) { if ( B_41_174_0 ) { if ( ! _rtDW ->
Rotorreferenceframe_MODE_p ) { if ( ssGetTaskTime ( S , 2 ) != ssGetTStart (
S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW -> Rotorreferenceframe_MODE_p =
TRUE ; } } else { if ( _rtDW -> Rotorreferenceframe_MODE_p ) {
ssSetSolverNeedsReset ( S ) ; _rtB -> B_14_2_0 = _rtP -> P_17 ; _rtB ->
B_14_0_0 = _rtP -> P_17 ; _rtB -> B_14_3_0 = _rtP -> P_18 ; _rtB -> B_14_1_0
= _rtP -> P_18 ; _rtDW -> Rotorreferenceframe_MODE_p = FALSE ; } } } if (
_rtDW -> Rotorreferenceframe_MODE_p ) { _rtB -> B_14_0_0 = -
0.57735026918962573 * B_41_82_0 ; _rtB -> B_14_1_0 = ( ( B_41_136_0_idx_2 -
1.7320508075688772 * B_41_136_0_idx_1 ) * B_3_7_0 + 2.0 * B_41_136_0_idx_2 *
B_41_78_0 ) * 0.33333333333333331 ; _rtB -> B_14_2_0 = ( 2.0 * B_41_103_0 +
B_41_82_0 ) * 0.33333333333333331 ; _rtB -> B_14_3_0 = ( ( 1.7320508075688772
* B_41_136_0_idx_2 + B_41_136_0_idx_1 ) * B_3_7_0 + 2.0 * B_41_136_0_idx_1 *
B_41_78_0 ) * 0.33333333333333331 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> Rotorreferenceframe_SubsysRanBC_p ) ; } } B_41_177_0 =
_rtP -> P_368 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_41_177_0 ) { if ( !
_rtDW -> Stationaryreferenceframe_MODE_n ) { if ( ssGetTaskTime ( S , 2 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW ->
Stationaryreferenceframe_MODE_n = TRUE ; } } else { if ( _rtDW ->
Stationaryreferenceframe_MODE_n ) { ssSetSolverNeedsReset ( S ) ; _rtB ->
B_15_2_0 = _rtP -> P_19 ; _rtB -> B_15_0_0 = _rtP -> P_19 ; _rtB -> B_15_3_0
= _rtP -> P_20 ; _rtB -> B_15_1_0 = _rtP -> P_20 ; _rtDW ->
Stationaryreferenceframe_MODE_n = FALSE ; } } } if ( _rtDW ->
Stationaryreferenceframe_MODE_n ) { _rtB -> B_15_0_0 = ( ( - B_41_136_0_idx_2
- 1.7320508075688772 * B_41_136_0_idx_1 ) * B_41_82_0 + - 2.0 *
B_41_136_0_idx_2 * B_41_103_0 ) * 0.33333333333333331 ; _rtB -> B_15_1_0 = -
0.57735026918962573 * B_3_7_0 ; _rtB -> B_15_2_0 = ( ( B_41_136_0_idx_1 -
1.7320508075688772 * B_41_136_0_idx_2 ) * B_41_82_0 + 2.0 * B_41_136_0_idx_1
* B_41_103_0 ) * 0.33333333333333331 ; _rtB -> B_15_3_0 = ( 2.0 * B_41_78_0 +
B_3_7_0 ) * 0.33333333333333331 ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> Stationaryreferenceframe_SubsysRanBC_k ) ; } } B_41_180_0 = _rtP
-> P_369 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_41_180_0 ) { if ( ! _rtDW
-> Synchronousreferenceframe_MODE_d ) { if ( ssGetTaskTime ( S , 2 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } _rtDW ->
Synchronousreferenceframe_MODE_d = TRUE ; } } else { if ( _rtDW ->
Synchronousreferenceframe_MODE_d ) { ssSetSolverNeedsReset ( S ) ; _rtB ->
B_16_2_0 = _rtP -> P_21 ; _rtB -> B_16_0_0 = _rtP -> P_21 ; _rtB -> B_16_3_0
= _rtP -> P_22 ; _rtB -> B_16_1_0 = _rtP -> P_22 ; _rtDW ->
Synchronousreferenceframe_MODE_d = FALSE ; } } } if ( _rtDW ->
Synchronousreferenceframe_MODE_d ) { _rtB -> B_16_0_0 = ( ( B_41_136_0_idx_2
- 1.7320508075688772 * B_41_136_0_idx_1 ) * B_41_82_0 + 2.0 *
B_41_136_0_idx_2 * B_41_103_0 ) / 3.0 ; _rtB -> B_16_1_0 = ( (
B_41_136_0_idx_0 - 1.7320508075688772 * B_41_136_0_idx ) * B_3_7_0 + 2.0 *
B_41_136_0_idx_0 * B_41_78_0 ) / 3.0 ; _rtB -> B_16_2_0 = ( (
1.7320508075688772 * B_41_136_0_idx_2 + B_41_136_0_idx_1 ) * B_41_82_0 + 2.0
* B_41_136_0_idx_1 * B_41_103_0 ) / 3.0 ; _rtB -> B_16_3_0 = ( (
1.7320508075688772 * B_41_136_0_idx_0 + B_41_136_0_idx ) * B_3_7_0 + 2.0 *
B_41_136_0_idx * B_41_78_0 ) / 3.0 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> Synchronousreferenceframe_SubsysRanBC_b ) ; } } switch
( ( int32_T ) B_41_26_0 ) { case 1 : B_41_182_0_idx_0 = _rtB -> B_14_2_0 ;
B_41_182_0_idx = _rtB -> B_14_0_0 ; break ; case 2 : B_41_182_0_idx_0 = _rtB
-> B_15_2_0 ; B_41_182_0_idx = _rtB -> B_15_0_0 ; break ; default :
B_41_182_0_idx_0 = _rtB -> B_16_2_0 ; B_41_182_0_idx = _rtB -> B_16_0_0 ;
break ; } switch ( ( int32_T ) _rtP -> P_199 ) { case 1 : B_41_185_0_idx_0 =
_rtB -> B_14_3_0 ; B_41_185_0_idx = _rtB -> B_14_1_0 ; break ; case 2 :
B_41_185_0_idx_0 = _rtB -> B_15_3_0 ; B_41_185_0_idx = _rtB -> B_15_1_0 ;
break ; default : B_41_185_0_idx_0 = _rtB -> B_16_3_0 ; B_41_185_0_idx = _rtB
-> B_16_1_0 ; break ; } _rtB -> B_41_186_0 [ 0 ] = _rtP -> P_200 [ 0 ] *
B_41_146_0_idx_0 ; _rtB -> B_41_186_0 [ 1 ] = _rtP -> P_200 [ 1 ] *
B_41_146_0_idx ; _rtB -> B_41_186_0 [ 2 ] = ( ( 0.0 - B_41_146_0_idx_0 ) -
B_41_146_0_idx ) * _rtP -> P_200 [ 2 ] ; _rtB -> B_41_186_0 [ 3 ] = _rtP ->
P_200 [ 3 ] * B_41_120_0 ; _rtB -> B_41_186_0 [ 4 ] = _rtP -> P_200 [ 4 ] *
B_41_123_0 ; _rtB -> B_41_186_0 [ 5 ] = _rtP -> P_200 [ 5 ] * B_41_347_0 ;
_rtB -> B_41_186_0 [ 6 ] = _rtP -> P_200 [ 6 ] * B_41_401_0 ; _rtB ->
B_41_186_0 [ 7 ] = _rtP -> P_200 [ 7 ] * B_41_182_0_idx_0 ; _rtB ->
B_41_186_0 [ 8 ] = _rtP -> P_200 [ 8 ] * B_41_182_0_idx ; _rtB -> B_41_186_0
[ 9 ] = _rtP -> P_200 [ 9 ] * B_41_148_0_idx_0 ; _rtB -> B_41_186_0 [ 10 ] =
_rtP -> P_200 [ 10 ] * B_41_148_0_idx ; _rtB -> B_41_186_0 [ 11 ] = ( ( 0.0 -
B_41_148_0_idx_0 ) - B_41_148_0_idx ) * _rtP -> P_200 [ 11 ] ; _rtB ->
B_41_186_0 [ 12 ] = _rtP -> P_200 [ 12 ] * B_41_125_0 ; _rtB -> B_41_186_0 [
13 ] = _rtP -> P_200 [ 13 ] * B_41_127_0 ; _rtB -> B_41_186_0 [ 14 ] = _rtP
-> P_200 [ 14 ] * B_41_313_0 ; _rtB -> B_41_186_0 [ 15 ] = _rtP -> P_200 [ 15
] * B_41_309_0 ; _rtB -> B_41_186_0 [ 16 ] = _rtP -> P_200 [ 16 ] *
B_41_185_0_idx_0 ; _rtB -> B_41_186_0 [ 17 ] = _rtP -> P_200 [ 17 ] *
B_41_185_0_idx ; B_41_418_0 = B_41_309_0 * B_41_125_0 - B_41_313_0 *
B_41_127_0 ; B_41_419_0 = _rtP -> P_201 * B_41_128_0 ; _rtB -> B_41_191_0 [ 0
] = _rtP -> P_202 [ 0 ] * B_41_132_0 ; _rtB -> B_41_191_0 [ 1 ] = _rtP ->
P_202 [ 1 ] * B_41_418_0 ; _rtB -> B_41_191_0 [ 2 ] = _rtP -> P_202 [ 2 ] *
B_41_419_0 ; ssCallAccelRunBlock ( S , 41 , 192 , SS_CALL_MDL_OUTPUTS ) ;
_rtB -> B_41_411_0 = _rtDW -> u_DSTATE_g ; _rtB -> B_41_410_0 = _rtDW ->
u_DSTATE_c ; } if ( ssIsSampleHit ( S , 4 , 0 ) ) { _rtB -> B_41_196_0 = _rtP
-> P_208 * _rtDW -> NextOutput_l ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtB -> B_41_197_0 = _rtB -> B_41_411_0 + _rtB -> B_41_196_0 ; _rtDW ->
u_tmp_k = ( _rtB -> B_41_197_0 - _rtP -> P_211 [ 1 ] * _rtDW -> u_DSTATE_b )
/ _rtP -> P_211 [ 0 ] ; _rtB -> B_41_198_0 = _rtP -> P_210 * _rtDW -> u_tmp_k
; } if ( ssIsSampleHit ( S , 4 , 0 ) ) { _rtB -> B_41_200_0 = _rtP -> P_215 *
_rtDW -> NextOutput_g ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
B_41_201_0 = _rtB -> B_41_410_0 + _rtB -> B_41_200_0 ; _rtDW -> u_tmp_a = (
_rtB -> B_41_201_0 - _rtP -> P_218 [ 1 ] * _rtDW -> u_DSTATE_m ) / _rtP ->
P_218 [ 0 ] ; _rtB -> B_41_202_0 = _rtP -> P_217 * _rtDW -> u_tmp_a ;
ssCallAccelRunBlock ( S , 41 , 203 , SS_CALL_MDL_OUTPUTS ) ; B_41_204_0 =
_rtDW -> _DSTATE_o [ 0 ] ; ssCallAccelRunBlock ( S , 41 , 205 ,
SS_CALL_MDL_OUTPUTS ) ; B_41_206_0 = _rtDW -> u_DSTATE_ba [ 0 ] ; _rtB ->
B_41_410_0 = _rtP -> P_221 ; } ssCallAccelRunBlock ( S , 41 , 208 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 41 , 209 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
ssCallAccelRunBlock ( S , 41 , 210 , SS_CALL_MDL_OUTPUTS ) ; }
ssCallAccelRunBlock ( S , 41 , 211 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 41 , 212 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 41 , 213 , SS_CALL_MDL_OUTPUTS ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 41 , 214 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { B_41_215_0 =
_rtP -> P_222 ; _rtB -> B_41_216_0 = _rtP -> P_223 ; _rtB -> B_41_217_0 =
_rtP -> P_224 ; ssCallAccelRunBlock ( S , 41 , 218 , SS_CALL_MDL_OUTPUTS ) ;
} if ( ssIsSampleHit ( S , 5 , 0 ) ) { _rtB -> B_41_219_0 = _rtP -> P_225 *
0.0 ; _rtB -> B_41_220_0 = _rtP -> P_226 * _rtB -> B_41_219_0 + _rtDW ->
Integrator_DSTATE_m ; B_41_222_0 = _rtP -> P_228 * 0.0 + _rtB -> B_41_220_0 ;
} if ( ssIsSampleHit ( S , 1 , 0 ) ) { B_41_223_0 = _rtP -> P_229 * 0.0 ; }
B_41_229_0 = ssGetT ( S ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
B_41_225_0 = _rtP -> P_230 ; } ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
B_41_226_0 = ssGetTStart ( S ) ; B_41_229_0 -= _rtB -> B_41_226_0 ;
B_41_229_0 = muDoubleScalarRem ( B_41_229_0 , _rtB -> B_41_225_0 ) ;
B_41_229_0 = rt_Lookup ( ( const real_T * ) & _rtP -> P_231 , 2 , B_41_229_0
, ( const real_T * ) & _rtP -> P_232 ) ; B_41_230_0 = B_41_229_0 ;
ssCallAccelRunBlock ( S , 41 , 231 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 41 , 232 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 41 , 233 , SS_CALL_MDL_OUTPUTS ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_41_234_0 [ 0 ] = _rtP -> P_233 *
_rtB -> B_41_6_0 ; _rtB -> B_41_234_0 [ 1 ] = _rtP -> P_233 * _rtB ->
B_41_11_0 ; ssCallAccelRunBlock ( S , 41 , 235 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 41 , 236 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
B_41_237_0 = _rtP -> P_234 * _rtB -> B_7_0_1 ; ssCallAccelRunBlock ( S , 41 ,
238 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_41_239_0 = muDoubleScalarSin ( _rtB
-> B_9_0_2 ) ; _rtB -> B_41_240_0 = muDoubleScalarCos ( _rtB -> B_9_0_2 ) ;
ssCallAccelRunBlock ( S , 8 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 41 , 242 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 41 , 243 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
B_41_244_0 = _rtP -> P_235 ; _rtB -> B_41_245_0 = _rtDW -> UnitDelay_DSTATE_d
; ssCallAccelRunBlock ( S , 10 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_41_247_0 = ! ( _rtB -> B_10_0_1 != 0.0 ) ; } if ( ssIsSampleHit ( S , 2 , 0
) ) { _rtB -> B_41_248_0 [ 0 ] = _rtB -> B_41_198_0 - _rtB -> B_41_234_0 [ 0
] ; _rtB -> B_41_248_0 [ 1 ] = _rtB -> B_41_202_0 - _rtB -> B_41_234_0 [ 1 ]
; } if ( _rtB -> B_41_247_0 ) { B_41_249_0 [ 0 ] = _rtB -> B_41_18_0 ; } else
{ B_41_249_0 [ 0 ] = _rtB -> B_9_0_1 ; } if ( _rtB -> B_41_247_0 ) {
B_41_249_0 [ 1 ] = _rtB -> B_41_14_0 ; } else { B_41_249_0 [ 1 ] = _rtB ->
B_9_0_2 ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 41
, 250 , SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB
-> B_41_251_0 = _rtP -> P_237 * _rtB -> B_41_186_0 [ 6 ] ; _rtB -> B_41_252_0
= _rtP -> P_238 * _rtB -> B_41_186_0 [ 12 ] ; _rtB -> B_41_253_0 = _rtP ->
P_239 * _rtB -> B_41_186_0 [ 13 ] ; _rtB -> B_41_254_0 = _rtP -> P_240 * _rtB
-> B_41_186_0 [ 5 ] ; _rtB -> B_41_255_0 = _rtP -> P_241 * _rtB -> B_41_186_0
[ 16 ] ; _rtB -> B_41_256_0 = _rtP -> P_242 * _rtB -> B_41_186_0 [ 17 ] ;
switch ( ( int32_T ) _rtP -> P_245 ) { case 1 : B_41_419_0 = _rtP -> P_32 ;
break ; case 2 : B_41_419_0 = _rtP -> P_31 * B_41_132_0 ; break ; default :
B_41_419_0 = _rtB -> B_24_2_0 ; break ; } _rtB -> B_41_267_0 = ( ( B_41_419_0
* B_41_347_0 + B_41_182_0_idx ) - _rtP -> P_244 * B_41_123_0 ) * _rtP ->
P_246 ; _rtB -> B_41_268_0 = ( ( B_41_182_0_idx_0 - B_41_401_0 * B_41_419_0 )
- _rtP -> P_243 * B_41_120_0 ) * _rtP -> P_247 ; switch ( ( int32_T ) _rtP ->
P_250 ) { case 1 : B_41_419_0 = B_41_132_0 ; break ; case 2 : B_41_419_0 =
_rtP -> P_30 ; break ; default : B_41_419_0 = _rtP -> P_29 ; break ; } _rtB
-> B_41_279_0 = ( ( B_41_419_0 * B_41_313_0 + B_41_185_0_idx ) - _rtP ->
P_249 * B_41_127_0 ) * _rtP -> P_251 ; _rtB -> B_41_280_0 = ( (
B_41_185_0_idx_0 - _rtP -> P_248 * B_41_125_0 ) - B_41_419_0 * B_41_309_0 ) *
_rtP -> P_252 ; _rtB -> B_41_281_0 = _rtP -> P_355 ; ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
B_41_282_0 = ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * )
_ssGetBlockIO ( S ) ) -> B_41_281_0 ; if ( ssGetTaskTime ( S , 2 ) < _rtP ->
P_253 ) { _rtB -> B_41_411_0 = _rtP -> P_254 ; } else { _rtB -> B_41_411_0 =
_rtP -> P_255 ; } ssCallAccelRunBlock ( S , 41 , 284 , SS_CALL_MDL_OUTPUTS )
; _rtB -> B_41_288_0 = ( ( B_41_418_0 - _rtP -> P_256 * _rtB -> B_41_410_0 )
- _rtP -> P_257 * B_41_132_0 ) * _rtP -> P_258 ; _rtB -> B_41_289_0 = _rtP ->
P_259 * B_41_132_0 ; } ssCallAccelRunBlock ( S , 41 , 295 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
B_41_296_0 = _rtP -> P_260 * _rtB -> B_41_157_0 [ 14 ] ; } if ( ssIsSampleHit
( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 2 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 4 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB ->
B_41_410_0 = _rtP -> P_261 ; B_41_418_0 = _rtP -> P_262 ; if ( ssGetTaskTime
( S , 2 ) < _rtP -> P_263 ) { _rtB -> B_41_411_0 = _rtP -> P_264 ; } else {
_rtB -> B_41_411_0 = _rtP -> P_265 ; } B_41_419_0 = _rtDW ->
IntegerDelay_DSTATE [ 0 ] ; B_41_309_0 = _rtDW ->
DiscreteTimeIntegrator1_DSTATE_a ; _rtB -> B_41_311_0 = _rtP -> P_267 * _rtB
-> B_41_6_0 + _rtP -> P_270 * _rtDW -> DiscreteTimeIntegrator1_DSTATE_a ;
B_41_313_0 = _rtDW -> DiscreteTimeIntegrator_DSTATE_c ; _rtB -> B_41_315_0 =
_rtP -> P_271 * _rtB -> B_41_11_0 + _rtP -> P_274 * _rtDW ->
DiscreteTimeIntegrator_DSTATE_c ; ssCallAccelRunBlock ( S , 41 , 316 ,
SS_CALL_MDL_OUTPUTS ) ; } { real_T t = ssGetTaskTime ( S , 0 ) ; real_T
timeStampA = ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> Derivative_RWORK . TimeStampA ; real_T timeStampB =
( ( D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) )
-> Derivative_RWORK . TimeStampB ; real_T * lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeA ; if ( timeStampA >= t && timeStampB >= t ) {
( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) )
-> B_41_317_0 = 0.0 ; } else { real_T deltaT ; real_T lastTime = timeStampA ;
if ( timeStampA < timeStampB ) { if ( timeStampB < t ) { lastTime =
timeStampB ; lastU = & ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> Derivative_RWORK . LastUAtTimeB ; } } else if (
timeStampA >= t ) { lastTime = timeStampB ; lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeB ; } deltaT = t - lastTime ; ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
B_41_317_0 = ( ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * )
_ssGetBlockIO ( S ) ) -> B_41_316_0 - * lastU ++ ) / deltaT ; } } if (
ssIsSampleHit ( S , 2 , 0 ) ) { if ( ! ( _rtB -> B_41_317_0 >= _rtP -> P_275
) ) { B_41_419_0 = _rtB -> B_41_317_0 ; } if ( B_41_419_0 >= _rtP -> P_276 )
{ _rtB -> B_41_319_0 = _rtP -> P_276 ; } else if ( B_41_419_0 <= _rtP ->
P_277 ) { _rtB -> B_41_319_0 = _rtP -> P_277 ; } else { _rtB -> B_41_319_0 =
B_41_419_0 ; } B_41_419_0 = _rtB -> B_41_311_0 * _rtB -> B_41_311_0 + _rtB ->
B_41_315_0 * _rtB -> B_41_315_0 ; if ( B_41_419_0 >= _rtP -> P_278 ) {
B_41_419_0 = _rtP -> P_278 ; } else { if ( B_41_419_0 <= _rtP -> P_279 ) {
B_41_419_0 = _rtP -> P_279 ; } } _rtB -> B_41_330_0 = ( _rtB -> B_41_319_0 -
( _rtB -> B_41_311_0 * _rtB -> B_41_11_0 - _rtB -> B_41_315_0 * _rtB ->
B_41_6_0 ) / B_41_419_0 * _rtP -> P_280 ) * _rtP -> P_281 ; _rtDW ->
DiscreteFilter1_tmp = ( _rtB -> B_41_330_0 - _rtP -> P_284 [ 1 ] * _rtDW ->
DiscreteFilter1_DSTATE ) / _rtP -> P_284 [ 0 ] ; B_41_401_0 = _rtP -> P_283 *
_rtDW -> DiscreteFilter1_tmp ; if ( B_41_401_0 >= _rtP -> P_285 ) { _rtB ->
B_41_332_0 = _rtP -> P_285 ; } else if ( B_41_401_0 <= _rtP -> P_286 ) { _rtB
-> B_41_332_0 = _rtP -> P_286 ; } else { _rtB -> B_41_332_0 = B_41_401_0 ; }
ssCallAccelRunBlock ( S , 41 , 333 , SS_CALL_MDL_OUTPUTS ) ; B_41_401_0 =
muDoubleScalarSin ( _rtB -> B_41_316_0 ) ; B_41_347_0 = muDoubleScalarCos (
_rtB -> B_41_316_0 ) ; _rtB -> B_41_336_0 = B_41_347_0 * _rtB -> B_41_6_0 +
B_41_401_0 * _rtB -> B_41_11_0 ; _rtB -> B_41_337_0 = - B_41_401_0 * _rtB ->
B_41_6_0 + B_41_347_0 * _rtB -> B_41_11_0 ; _rtB -> B_41_338_0 = _rtP ->
P_357 ; ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO
( S ) ) -> B_41_339_0 = ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn *
) _ssGetBlockIO ( S ) ) -> B_41_338_0 ; ssCallAccelRunBlock ( S , 41 , 340 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_41_341_0 = _rtP -> P_287 * _rtB ->
B_41_410_0 ; _rtDW -> DiscreteFilter_tmp = ( _rtB -> B_41_341_0 - _rtP ->
P_290 [ 1 ] * _rtDW -> DiscreteFilter_DSTATE ) / _rtP -> P_290 [ 0 ] ;
B_41_401_0 = _rtP -> P_289 * _rtDW -> DiscreteFilter_tmp - _rtP -> P_291 *
_rtB -> B_41_332_0 ; B_41_347_0 = _rtP -> P_292 * B_41_401_0 + _rtDW ->
Integrator_DSTATE_a ; if ( B_41_347_0 >= _rtP -> P_295 ) { _rtB -> B_41_348_0
= _rtP -> P_295 ; } else if ( B_41_347_0 <= _rtP -> P_296 ) { _rtB ->
B_41_348_0 = _rtP -> P_296 ; } else { _rtB -> B_41_348_0 = B_41_347_0 ; }
_rtDW -> DiscreteFilter2_tmp = ( _rtB -> B_41_348_0 - _rtP -> P_299 [ 1 ] *
_rtDW -> DiscreteFilter2_DSTATE ) / _rtP -> P_299 [ 0 ] ; B_41_419_0 =
muDoubleScalarSqrt ( B_41_419_0 ) ; B_41_418_0 -= B_41_419_0 ; B_41_26_0 =
_rtP -> P_300 * B_41_418_0 + _rtDW -> Integrator_DSTATE_b ; if ( B_41_26_0 >=
_rtP -> P_303 ) { B_41_78_0 = _rtP -> P_303 ; } else if ( B_41_26_0 <= _rtP
-> P_304 ) { B_41_78_0 = _rtP -> P_304 ; } else { B_41_78_0 = B_41_26_0 ; }
B_41_418_0 *= _rtP -> P_305 ; if ( ( B_41_26_0 != B_41_78_0 ) && (
muDoubleScalarSign ( B_41_26_0 ) == muDoubleScalarSign ( B_41_418_0 ) ) ) {
_rtB -> B_41_363_0 = Vector_Control_SVPWM_encoderless_learn_rtC ( S ) ->
B_41_362_0 ; } else { _rtB -> B_41_363_0 = B_41_418_0 ; } B_41_401_0 *= _rtP
-> P_307 ; if ( ( B_41_347_0 != _rtB -> B_41_348_0 ) && ( muDoubleScalarSign
( B_41_347_0 ) == muDoubleScalarSign ( B_41_401_0 ) ) ) { _rtB -> B_41_371_0
= Vector_Control_SVPWM_encoderless_learn_rtC ( S ) -> B_41_370_0 ; } else {
_rtB -> B_41_371_0 = B_41_401_0 ; } B_41_103_0 = _rtP -> P_298 * _rtDW ->
DiscreteFilter2_tmp - B_41_419_0 * _rtDW -> UnitDelay3_DSTATE * _rtP -> P_310
; B_41_26_0 = _rtP -> P_311 * B_41_103_0 + _rtDW -> Integrator_DSTATE_f ; if
( B_41_26_0 >= _rtP -> P_314 ) { B_41_418_0 = _rtP -> P_314 ; } else if (
B_41_26_0 <= _rtP -> P_315 ) { B_41_418_0 = _rtP -> P_315 ; } else {
B_41_418_0 = B_41_26_0 ; } B_41_419_0 = ( _rtP -> P_317 * _rtDW ->
UnitDelay2_DSTATE + _rtP -> P_318 * B_41_419_0 ) * _rtB -> B_41_319_0 +
B_41_418_0 ; B_41_78_0 += _rtP -> P_319 * _rtDW -> UnitDelay3_DSTATE * _rtB
-> B_41_319_0 * _rtP -> P_320 ; B_41_103_0 *= _rtP -> P_321 ; if ( (
B_41_26_0 != B_41_418_0 ) && ( muDoubleScalarSign ( B_41_26_0 ) ==
muDoubleScalarSign ( B_41_103_0 ) ) ) { _rtB -> B_41_397_0 =
Vector_Control_SVPWM_encoderless_learn_rtC ( S ) -> B_41_396_0 ; } else {
_rtB -> B_41_397_0 = B_41_103_0 ; } B_41_26_0 = muDoubleScalarCos ( _rtB ->
B_41_316_0 ) ; B_41_103_0 = muDoubleScalarSin ( _rtB -> B_41_316_0 ) ;
B_41_418_0 = - B_41_419_0 * B_41_103_0 + B_41_78_0 * B_41_26_0 ; B_41_26_0 =
( 1.7320508 * B_41_103_0 + - B_41_26_0 ) * B_41_78_0 * 0.5 + ( 1.7320508 *
B_41_26_0 + B_41_103_0 ) * B_41_419_0 * 0.5 ; B_41_78_0 = _rtP -> P_324 *
B_41_26_0 ; B_41_26_0 = ( ( 0.0 - B_41_26_0 ) - B_41_418_0 ) * _rtP -> P_325
; B_41_406_0 = ( _rtP -> P_323 * B_41_418_0 - 0.5 * B_41_78_0 ) - 0.5 *
B_41_26_0 ; B_41_407_0 = ( B_41_78_0 - B_41_26_0 ) * 0.8660254037844386 ;
B_41_78_0 = muDoubleScalarCos ( _rtB -> B_41_316_0 ) ; B_41_26_0 =
muDoubleScalarSin ( _rtB -> B_41_316_0 ) ; _rtB -> B_41_410_0 = B_41_78_0 *
_rtB -> B_41_6_0 + B_41_26_0 * _rtB -> B_41_11_0 ; _rtB -> B_41_411_0 = -
B_41_26_0 * _rtB -> B_41_6_0 + B_41_78_0 * _rtB -> B_41_11_0 ;
ssCallAccelRunBlock ( S , 41 , 412 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 41 , 413 , SS_CALL_MDL_OUTPUTS ) ; B_41_78_0 = _rtP
-> P_327 * _rtDW -> DiscreteTransferFcn_DSTATE ; _rtB -> B_41_415_0 = _rtP ->
P_329 * _rtB -> B_41_410_0 ; B_41_103_0 = muDoubleScalarCos ( _rtB ->
B_41_316_0 ) ; B_41_418_0 = muDoubleScalarSin ( _rtB -> B_41_316_0 ) ;
B_41_26_0 = ( B_41_103_0 * B_41_78_0 - B_41_418_0 * _rtP -> P_330 ) * _rtP ->
P_331 ; B_41_103_0 = B_41_418_0 * B_41_78_0 + B_41_103_0 * _rtP -> P_330 ;
_rtB -> B_41_429_0 = B_41_309_0 - ( _rtP -> P_332 * _rtB -> B_41_6_0 +
B_41_26_0 ) ; _rtB -> B_41_434_0 = B_41_313_0 - ( _rtP -> P_333 * _rtB ->
B_41_11_0 + _rtP -> P_334 * B_41_103_0 ) ; _rtB -> B_41_440_0 = ( _rtB ->
B_41_198_0 - _rtP -> P_344 * _rtB -> B_41_6_0 ) - ( _rtP -> P_337 * _rtDW ->
DiscreteTimeIntegrator1_DSTATE_n + _rtP -> P_338 * _rtB -> B_41_429_0 ) ;
_rtB -> B_41_442_0 = ( _rtB -> B_41_202_0 - _rtP -> P_343 * _rtB -> B_41_11_0
) - ( _rtP -> P_341 * _rtDW -> DiscreteTimeIntegrator2_DSTATE + _rtP -> P_342
* _rtB -> B_41_434_0 ) ; ssCallAccelRunBlock ( S , 41 , 443 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 41 , 444 ,
SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_41_450_0 [ i
] = _rtP -> P_345 [ i ] ; } } UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { real_T HoldSine ;
int32_T i ; BlockIO_Vector_Control_SVPWM_encoderless_learn * _rtB ;
Parameters_Vector_Control_SVPWM_encoderless_learn * _rtP ;
D_Work_Vector_Control_SVPWM_encoderless_learn * _rtDW ; _rtDW = ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ;
_rtP = ( ( Parameters_Vector_Control_SVPWM_encoderless_learn * )
ssGetDefaultParam ( S ) ) ; _rtB = ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ; if
( ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtDW ->
UnitDelay_DSTATE [ i ] = _rtB -> B_41_162_0 [ i ] ; } _rtDW -> u_DSTATE =
_rtB -> B_41_252_0 ; } if ( ssIsSampleHit ( S , 4 , 0 ) ) { _rtDW ->
NextOutput = rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed ) * _rtP ->
P_57 + _rtP -> P_56 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtDW -> _DSTATE
= _rtDW -> _tmp ; _rtDW -> u_DSTATE_k = _rtB -> B_41_253_0 ; } if (
ssIsSampleHit ( S , 4 , 0 ) ) { _rtDW -> NextOutput_k =
rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_k ) * _rtP -> P_65 + _rtP ->
P_64 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtDW -> u_DSTATE_e = _rtDW ->
u_tmp ; _rtDW -> IntegerDelay1_DSTATE [ 0U ] = _rtDW -> IntegerDelay1_DSTATE
[ 1U ] ; _rtDW -> IntegerDelay1_DSTATE [ 1 ] = _rtB -> B_41_191_0 [ 0 ] ;
_rtDW -> Integrator_DSTATE = _rtB -> B_41_40_0 ; } if ( ssIsSampleHit ( S , 3
, 0 ) ) { _rtDW -> DiscreteTimeIntegrator_SYSTEM_ENABLE = 0U ; _rtDW ->
DiscreteTimeIntegrator_DSTATE = _rtB -> B_41_49_0 ; } if ( ssIsSampleHit ( S
, 2 , 0 ) ) { _rtDW -> Integrator_DSTATE_i = _rtB -> B_41_55_0 ; _rtDW ->
IntegerDelay3_DSTATE = _rtB -> B_41_296_0 ; } if ( _rtDW -> ONDelay_MODE &&
ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { _rtDW ->
UnitDelay_DSTATE_n [ i ] = _rtB -> B_41_89_0 [ i ] ; _rtDW ->
UnitDelay_DSTATE_a [ i ] = _rtB -> B_40_15_0 [ i ] ; } } if ( _rtDW ->
OFFDelay_MODE && ssIsSampleHit ( S , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ )
{ _rtDW -> UnitDelay_DSTATE_g [ i ] = _rtB -> B_41_89_0 [ i ] ; _rtDW ->
UnitDelay_DSTATE_p [ i ] = _rtB -> B_34_16_0 [ i ] ; } } if ( _rtDW ->
Tail_MODE && ssIsSampleHit ( S , 2 , 0 ) ) { HoldSine = _rtP -> P_3 * _rtB ->
B_3_0_0 ; for ( i = 0 ; i < 6 ; i ++ ) { _rtDW ->
DiscreteTimeIntegrator_DSTATE_ii [ i ] += HoldSine ; if ( _rtB -> B_41_99_0 [
i ] ) { _rtDW -> DiscreteTimeIntegrator_PrevResetState [ i ] = 1 ; } else {
_rtDW -> DiscreteTimeIntegrator_PrevResetState [ i ] = 0 ; } _rtDW ->
UnitDelay_DSTATE_l [ i ] = _rtB -> B_3_13_0 [ i ] ; } } if ( ssIsSampleHit (
S , 2 , 0 ) ) { _rtDW -> DiscreteTimeIntegrator_DSTATE_i += _rtP -> P_141 *
_rtB -> B_41_268_0 ; _rtDW -> DiscreteTimeIntegrator1_DSTATE += _rtP -> P_143
* _rtB -> B_41_267_0 ; _rtDW -> DiscreteTimeIntegrator_DSTATE_d += _rtP ->
P_146 * _rtB -> B_41_280_0 ; _rtDW -> DiscreteTimeIntegrator1_DSTATE_f +=
_rtP -> P_148 * _rtB -> B_41_279_0 ; _rtDW ->
DiscreteTimeIntegrator1_DSTATE_k += _rtP -> P_161 * _rtB -> B_41_289_0 ;
_rtDW -> DiscreteTimeIntegrator_DSTATE_i2 += _rtP -> P_163 * _rtB ->
B_41_288_0 ; HoldSine = _rtDW -> lastSin ; _rtDW -> lastSin = _rtDW ->
lastSin * _rtP -> P_171 + _rtDW -> lastCos * _rtP -> P_170 ; _rtDW -> lastCos
= _rtDW -> lastCos * _rtP -> P_171 - HoldSine * _rtP -> P_170 ; HoldSine =
_rtDW -> lastSin_i ; _rtDW -> lastSin_i = _rtDW -> lastSin_i * _rtP -> P_178
+ _rtDW -> lastCos_l * _rtP -> P_177 ; _rtDW -> lastCos_l = _rtDW ->
lastCos_l * _rtP -> P_178 - HoldSine * _rtP -> P_177 ; HoldSine = _rtDW ->
lastSin_b ; _rtDW -> lastSin_b = _rtDW -> lastSin_b * _rtP -> P_185 + _rtDW
-> lastCos_h * _rtP -> P_184 ; _rtDW -> lastCos_h = _rtDW -> lastCos_h * _rtP
-> P_185 - HoldSine * _rtP -> P_184 ; ssCallAccelRunBlock ( S , 41 , 157 ,
SS_CALL_MDL_UPDATE ) ; _rtDW -> u_DSTATE_g = _rtB -> B_41_255_0 ; _rtDW ->
u_DSTATE_c = _rtB -> B_41_256_0 ; } if ( ssIsSampleHit ( S , 4 , 0 ) ) {
_rtDW -> NextOutput_l = rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_o )
* _rtP -> P_206 + _rtP -> P_205 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtDW -> u_DSTATE_b = _rtDW -> u_tmp_k ; } if ( ssIsSampleHit ( S , 4 , 0 ) )
{ _rtDW -> NextOutput_g = rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_i
) * _rtP -> P_213 + _rtP -> P_212 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtDW -> u_DSTATE_m = _rtDW -> u_tmp_a ; _rtDW -> _DSTATE_o [ 0U ] = _rtDW ->
_DSTATE_o [ 1U ] ; _rtDW -> _DSTATE_o [ 1 ] = _rtB -> B_41_254_0 ; _rtDW ->
u_DSTATE_ba [ 0U ] = _rtDW -> u_DSTATE_ba [ 1U ] ; _rtDW -> u_DSTATE_ba [ 1 ]
= _rtB -> B_41_251_0 ; } if ( ssIsSampleHit ( S , 5 , 0 ) ) { _rtDW ->
Integrator_DSTATE_m = _rtB -> B_41_220_0 ; } if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtDW -> UnitDelay_DSTATE_d = _rtB -> B_10_0_1 ; } if ( ssIsSampleHit ( S
, 2 , 0 ) ) { for ( i = 0 ; i < 9 ; i ++ ) { _rtDW -> IntegerDelay_DSTATE [ (
uint32_T ) i ] = _rtDW -> IntegerDelay_DSTATE [ ( uint32_T ) i + 1U ] ; }
_rtDW -> IntegerDelay_DSTATE [ 9 ] = _rtB -> B_41_317_0 ; _rtDW ->
DiscreteTimeIntegrator1_DSTATE_a += _rtP -> P_268 * _rtB -> B_41_440_0 ;
_rtDW -> DiscreteTimeIntegrator_DSTATE_c += _rtP -> P_272 * _rtB ->
B_41_442_0 ; } { real_T timeStampA = ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampA ; real_T timeStampB = ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampB ; real_T * lastTime = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampA ; real_T * lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeA ; if ( timeStampA != rtInf ) { if (
timeStampB == rtInf ) { lastTime = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampB ; lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeB ; } else if ( timeStampA >= timeStampB ) {
lastTime = & ( ( D_Work_Vector_Control_SVPWM_encoderless_learn * )
ssGetRootDWork ( S ) ) -> Derivative_RWORK . TimeStampB ; lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless_learn * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeB ; } } * lastTime = ssGetTaskTime ( S , 0 ) ;
* lastU ++ = ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * )
_ssGetBlockIO ( S ) ) -> B_41_316_0 ; } if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtDW -> DiscreteFilter1_DSTATE = _rtDW -> DiscreteFilter1_tmp ; _rtDW ->
DiscreteFilter_DSTATE = _rtDW -> DiscreteFilter_tmp ; _rtDW ->
Integrator_DSTATE_a += _rtP -> P_293 * _rtB -> B_41_371_0 ; _rtDW ->
DiscreteFilter2_DSTATE = _rtDW -> DiscreteFilter2_tmp ; _rtDW ->
Integrator_DSTATE_b += _rtP -> P_301 * _rtB -> B_41_363_0 ; _rtDW ->
UnitDelay3_DSTATE = _rtB -> B_41_337_0 ; _rtDW -> Integrator_DSTATE_f += _rtP
-> P_312 * _rtB -> B_41_397_0 ; _rtDW -> UnitDelay2_DSTATE = _rtB ->
B_41_336_0 ; _rtDW -> DiscreteTransferFcn_DSTATE = ( _rtB -> B_41_415_0 -
_rtP -> P_328 [ 1 ] * _rtDW -> DiscreteTransferFcn_DSTATE ) / _rtP -> P_328 [
0 ] ; _rtDW -> DiscreteTimeIntegrator1_DSTATE_n += _rtP -> P_335 * _rtB ->
B_41_429_0 ; _rtDW -> DiscreteTimeIntegrator2_DSTATE += _rtP -> P_339 * _rtB
-> B_41_434_0 ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) {
BlockIO_Vector_Control_SVPWM_encoderless_learn * _rtB ;
StateDerivatives_Vector_Control_SVPWM_encoderless_learn * _rtXdot ; _rtXdot =
( ( StateDerivatives_Vector_Control_SVPWM_encoderless_learn * ) ssGetdX ( S )
) ; _rtB = ( ( BlockIO_Vector_Control_SVPWM_encoderless_learn * )
_ssGetBlockIO ( S ) ) ; _rtXdot -> Integrator_CSTATE = _rtB -> B_41_25_0 ; {
( ( StateDerivatives_Vector_Control_SVPWM_encoderless_learn * ) ssGetdX ( S )
) -> StateSpace_CSTATE = ( ( (
Parameters_Vector_Control_SVPWM_encoderless_learn * ) ssGetDefaultParam ( S )
) -> P_73 ) * ( ( ContinuousStates_Vector_Control_SVPWM_encoderless_learn * )
ssGetContStates ( S ) ) -> StateSpace_CSTATE ; ( (
StateDerivatives_Vector_Control_SVPWM_encoderless_learn * ) ssGetdX ( S ) )
-> StateSpace_CSTATE += ( ( Parameters_Vector_Control_SVPWM_encoderless_learn
* ) ssGetDefaultParam ( S ) ) -> P_74 * ( (
BlockIO_Vector_Control_SVPWM_encoderless_learn * ) _ssGetBlockIO ( S ) ) ->
B_41_237_0 ; } _rtXdot -> Integrator1_CSTATE [ 0 ] = _rtB -> B_41_248_0 [ 0 ]
; _rtXdot -> Integrator1_CSTATE [ 1 ] = _rtB -> B_41_248_0 [ 1 ] ; } static
void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 ,
175223384U ) ; ssSetChecksumVal ( S , 1 , 3566361389U ) ; ssSetChecksumVal (
S , 2 , 3133485126U ) ; ssSetChecksumVal ( S , 3 , 1270685888U ) ; { mxArray
* slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" )
; char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat ,
1 , & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat =
mxGetField ( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) {
status = 1 ; } else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; }
} mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "7.9" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( D_Work_Vector_Control_SVPWM_encoderless_learn ) ) {
ssSetErrorStatus ( S , "Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( BlockIO_Vector_Control_SVPWM_encoderless_learn ) ) {
ssSetErrorStatus ( S , "Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
Parameters_Vector_Control_SVPWM_encoderless_learn ) ) { static char msg [ 256
] ; sprintf ( msg , "Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & Vector_Control_SVPWM_encoderless_learn_rtDefaultParameters ) ;
_ssSetConstBlockIO ( S , &
Vector_Control_SVPWM_encoderless_learn_rtInvariantSignals ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( (
Parameters_Vector_Control_SVPWM_encoderless_learn * ) ssGetDefaultParam ( S )
) -> P_194 = rtInf ; } static void mdlInitializeSampleTimes ( SimStruct * S )
{ { SimStruct * childS ; SysOutputFcn * callSysFcns ; childS = ssGetSFunction
( S , 0 ) ; callSysFcns = ssGetCallSystemOutputFcnList ( childS ) ;
callSysFcns [ 3 + 0 ] = ( SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction (
S , 1 ) ; callSysFcns = ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns
[ 3 + 0 ] = ( SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 2 ) ;
callSysFcns = ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ]
= ( SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 3 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 4 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 5 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 6 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 7 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 8 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 9 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 10 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 11 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 12 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
