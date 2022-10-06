#include "__cf_Vector_Control_SVPWM_encoderless.h"
#include <math.h>
#include "Vector_Control_SVPWM_encoderless_acc.h"
#include "Vector_Control_SVPWM_encoderless_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
void Vector_Control_SVPWM_encoderless_NEGATIVEEdge_Disable ( SimStruct *
const S , rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless * localDW ) {
localDW -> NEGATIVEEdge_MODE = FALSE ; } void
Vector_Control_SVPWM_encoderless_NEGATIVEEdge ( SimStruct * const S , real_T
rtu_0 , const boolean_T rtu_INprevious [ 6 ] , const boolean_T rtu_IN [ 6 ] ,
rtB_NEGATIVEEdge_Vector_Control_SVPWM_encoderless * localB ,
rtDW_NEGATIVEEdge_Vector_Control_SVPWM_encoderless * localDW ) { int32_T i ;
if ( rtu_0 > 0.0 ) { if ( ! localDW -> NEGATIVEEdge_MODE ) { localDW ->
NEGATIVEEdge_MODE = TRUE ; } } else { if ( localDW -> NEGATIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_NEGATIVEEdge_Disable ( S , localDW ) ; } }
if ( localDW -> NEGATIVEEdge_MODE ) { for ( i = 0 ; i < 6 ; i ++ ) { localB
-> B_22_0_0 [ i ] = ( ( int32_T ) rtu_INprevious [ i ] > ( int32_T ) rtu_IN [
i ] ) ; } srUpdateBC ( localDW -> NEGATIVEEdge_SubsysRanBC ) ; } } void
Vector_Control_SVPWM_encoderless_POSITIVEEdge_Disable ( SimStruct * const S ,
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless * localDW ) { localDW ->
POSITIVEEdge_MODE = FALSE ; } void
Vector_Control_SVPWM_encoderless_POSITIVEEdge ( SimStruct * const S , real_T
rtu_0 , const boolean_T rtu_IN [ 6 ] , const boolean_T rtu_INprevious [ 6 ] ,
rtB_POSITIVEEdge_Vector_Control_SVPWM_encoderless * localB ,
rtDW_POSITIVEEdge_Vector_Control_SVPWM_encoderless * localDW ) { int32_T i ;
if ( rtu_0 > 0.0 ) { if ( ! localDW -> POSITIVEEdge_MODE ) { localDW ->
POSITIVEEdge_MODE = TRUE ; } } else { if ( localDW -> POSITIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_POSITIVEEdge_Disable ( S , localDW ) ; } }
if ( localDW -> POSITIVEEdge_MODE ) { for ( i = 0 ; i < 6 ; i ++ ) { localB
-> B_23_0_0 [ i ] = ( ( int32_T ) rtu_IN [ i ] > ( int32_T ) rtu_INprevious [
i ] ) ; } srUpdateBC ( localDW -> POSITIVEEdge_SubsysRanBC ) ; } } real_T
rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { uint32_T lo ; uint32_T hi ; lo
= * u % 127773U * 16807U ; hi = * u / 127773U * 2836U ; if ( lo < hi ) { * u
= 2147483647U - ( hi - lo ) ; } else { * u = lo - hi ; } return ( real_T ) *
u * 4.6566128752457969E-10 ; } real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T *
u ) { real_T sr ; real_T si ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u
) - 1.0 ; si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr +
si * si ; } while ( si > 1.0 ) ; return muDoubleScalarSqrt ( - 2.0 *
muDoubleScalarLog ( si ) / si ) * sr ; } static void mdlOutputs ( SimStruct *
S , int_T tid ) { real_T B_31_203_0 ; real_T B_31_215_0 ; real_T B_31_309_0 ;
real_T B_14_3_0 ; real_T B_31_107_0 ; boolean_T B_31_151_0 ; boolean_T
B_31_159_0 ; boolean_T B_31_162_0 ; boolean_T B_31_165_0 ; boolean_T
B_31_184_0 ; boolean_T B_31_187_0 ; boolean_T B_31_190_0 ; real_T B_31_6_0 ;
real_T B_31_8_0 ; real_T B_31_15_0 ; real_T B_31_17_0 ; real_T B_31_209_0 ;
real_T B_31_199_0 ; real_T B_31_73_0 ; real_T B_31_51_0 ; real_T B_31_292_0 ;
real_T B_31_300_0 ; real_T B_31_61_0 ; real_T B_31_62_0 ; real_T B_31_284_0 ;
real_T B_31_315_0 ; real_T B_31_320_0 ; real_T B_31_312_0 ; real_T B_31_314_0
; real_T B_31_99_0 ; real_T B_31_103_0 ; boolean_T B_31_150_0 ; real_T
B_31_124_0 ; real_T B_31_129_0 ; real_T B_31_134_0 ; real_T B_31_141_0 ;
real_T B_31_146_0 ; real_T B_31_148_0 ; real_T B_31_153_0 ; real_T B_3_3_0 ;
int32_T i ; real_T B_30_6_0_idx ; real_T B_30_6_0_idx_0 ; real_T
B_31_167_0_idx ; real_T B_31_167_0_idx_0 ; real_T B_31_157_0_idx ; real_T
B_31_157_0_idx_0 ; real_T B_31_157_0_idx_1 ; real_T B_31_157_0_idx_2 ;
BlockIO_Vector_Control_SVPWM_encoderless * _rtB ;
Parameters_Vector_Control_SVPWM_encoderless * _rtP ;
D_Work_Vector_Control_SVPWM_encoderless * _rtDW ; _rtDW = ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ; _rtP = (
( Parameters_Vector_Control_SVPWM_encoderless * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) )
; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_31_0_0 [ i ] = _rtP -> P_53 [ i ]
; _rtB -> B_31_1_0 [ i ] = _rtDW -> UnitDelay_DSTATE [ i ] ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_31_4_0 = _rtP -> P_59 * _rtDW ->
NextOutput ; } _rtB -> B_31_5_0 = _rtDW -> u_DSTATE + _rtB -> B_31_4_0 ;
_rtDW -> _tmp = ( _rtB -> B_31_5_0 - _rtP -> P_62 [ 1 ] * _rtDW -> _DSTATE )
/ _rtP -> P_62 [ 0 ] ; B_31_6_0 = _rtP -> P_61 * _rtDW -> _tmp ; B_31_8_0 =
_rtDW -> DiscreteTimeIntegrator1_DSTATE ; _rtB -> B_31_249_0 = _rtP -> P_63 *
B_31_6_0 + _rtP -> P_66 * _rtDW -> DiscreteTimeIntegrator1_DSTATE ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_31_13_0 = _rtP -> P_71 * _rtDW ->
NextOutput_k ; } _rtB -> B_31_14_0 = _rtDW -> u_DSTATE_k + _rtB -> B_31_13_0
; _rtDW -> u_tmp = ( _rtB -> B_31_14_0 - _rtP -> P_74 [ 1 ] * _rtDW ->
u_DSTATE_e ) / _rtP -> P_74 [ 0 ] ; B_31_15_0 = _rtP -> P_73 * _rtDW -> u_tmp
; B_31_17_0 = _rtDW -> DiscreteTimeIntegrator_DSTATE ; _rtB -> B_31_261_0 =
_rtP -> P_75 * B_31_15_0 + _rtP -> P_78 * _rtDW ->
DiscreteTimeIntegrator_DSTATE ; ssCallAccelRunBlock ( S , 31 , 20 ,
SS_CALL_MDL_OUTPUTS ) ; B_31_209_0 = muDoubleScalarCos ( _rtB -> B_31_20_0 )
; B_31_199_0 = muDoubleScalarSin ( _rtB -> B_31_20_0 ) ; _rtB -> B_31_46_0 =
_rtP -> P_79 ; _rtB -> B_31_24_0 = _rtP -> P_297 ; ( (
BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
B_31_25_0 = ( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO (
S ) ) -> B_31_24_0 ; if ( ssGetTaskTime ( S , 1 ) < _rtP -> P_80 ) { _rtB ->
B_31_33_0 = _rtP -> P_81 ; } else { _rtB -> B_31_33_0 = _rtP -> P_82 ; }
ssCallAccelRunBlock ( S , 31 , 27 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_31_28_0
= _rtP -> P_83 * _rtB -> B_31_46_0 ; _rtDW -> DiscreteFilter_tmp = ( _rtB ->
B_31_28_0 - _rtP -> P_86 [ 1 ] * _rtDW -> DiscreteFilter_DSTATE ) / _rtP ->
P_86 [ 0 ] ; B_31_292_0 = _rtP -> P_85 * _rtDW -> DiscreteFilter_tmp ;
B_31_73_0 = _rtDW -> IntegerDelay_DSTATE [ 0 ] ; { real_T t = ssGetTaskTime (
S , 0 ) ; real_T timeStampA = ( ( D_Work_Vector_Control_SVPWM_encoderless * )
ssGetRootDWork ( S ) ) -> Derivative_RWORK . TimeStampA ; real_T timeStampB =
( ( D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampB ; real_T * lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeA ; if ( timeStampA >= t && timeStampB >= t ) {
( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
B_31_31_0 = 0.0 ; } else { real_T deltaT ; real_T lastTime = timeStampA ; if
( timeStampA < timeStampB ) { if ( timeStampB < t ) { lastTime = timeStampB ;
lastU = & ( ( D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S
) ) -> Derivative_RWORK . LastUAtTimeB ; } } else if ( timeStampA >= t ) {
lastTime = timeStampB ; lastU = & ( ( D_Work_Vector_Control_SVPWM_encoderless
* ) ssGetRootDWork ( S ) ) -> Derivative_RWORK . LastUAtTimeB ; } deltaT = t
- lastTime ; ( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO (
S ) ) -> B_31_31_0 = ( ( ( BlockIO_Vector_Control_SVPWM_encoderless * )
_ssGetBlockIO ( S ) ) -> B_31_20_0 - * lastU ++ ) / deltaT ; } } if ( ! (
_rtB -> B_31_31_0 >= _rtP -> P_88 ) ) { B_31_73_0 = _rtB -> B_31_31_0 ; } if
( B_31_73_0 >= _rtP -> P_89 ) { _rtB -> B_31_33_0 = _rtP -> P_89 ; } else if
( B_31_73_0 <= _rtP -> P_90 ) { _rtB -> B_31_33_0 = _rtP -> P_90 ; } else {
_rtB -> B_31_33_0 = B_31_73_0 ; } B_31_73_0 = _rtB -> B_31_249_0 * _rtB ->
B_31_249_0 + _rtB -> B_31_261_0 * _rtB -> B_31_261_0 ; if ( B_31_73_0 >= _rtP
-> P_91 ) { B_31_73_0 = _rtP -> P_91 ; } else { if ( B_31_73_0 <= _rtP ->
P_92 ) { B_31_73_0 = _rtP -> P_92 ; } } _rtB -> B_31_44_0 = ( _rtB ->
B_31_33_0 - ( _rtB -> B_31_249_0 * B_31_15_0 - _rtB -> B_31_261_0 * B_31_6_0
) / B_31_73_0 * _rtP -> P_93 ) * _rtP -> P_94 ; _rtDW -> DiscreteFilter1_tmp
= ( _rtB -> B_31_44_0 - _rtP -> P_97 [ 1 ] * _rtDW -> DiscreteFilter1_DSTATE
) / _rtP -> P_97 [ 0 ] ; B_31_51_0 = _rtP -> P_96 * _rtDW ->
DiscreteFilter1_tmp ; if ( B_31_51_0 >= _rtP -> P_98 ) { _rtB -> B_31_46_0 =
_rtP -> P_98 ; } else if ( B_31_51_0 <= _rtP -> P_99 ) { _rtB -> B_31_46_0 =
_rtP -> P_99 ; } else { _rtB -> B_31_46_0 = B_31_51_0 ; } B_31_292_0 -= _rtP
-> P_100 * _rtB -> B_31_46_0 ; B_31_51_0 = _rtP -> P_101 * B_31_292_0 + _rtDW
-> Integrator_DSTATE ; if ( B_31_51_0 >= _rtP -> P_104 ) { _rtB -> B_31_52_0
= _rtP -> P_104 ; } else if ( B_31_51_0 <= _rtP -> P_105 ) { _rtB ->
B_31_52_0 = _rtP -> P_105 ; } else { _rtB -> B_31_52_0 = B_31_51_0 ; } _rtDW
-> DiscreteFilter2_tmp = ( _rtB -> B_31_52_0 - _rtP -> P_108 [ 1 ] * _rtDW ->
DiscreteFilter2_DSTATE ) / _rtP -> P_108 [ 0 ] ; B_31_73_0 =
muDoubleScalarSqrt ( B_31_73_0 ) ; B_31_300_0 = _rtP -> P_107 * _rtDW ->
DiscreteFilter2_tmp - B_31_73_0 * _rtDW -> UnitDelay3_DSTATE * _rtP -> P_110
; B_31_61_0 = _rtP -> P_111 * B_31_300_0 + _rtDW -> Integrator_DSTATE_j ; if
( B_31_61_0 >= _rtP -> P_114 ) { B_31_62_0 = _rtP -> P_114 ; } else if (
B_31_61_0 <= _rtP -> P_115 ) { B_31_62_0 = _rtP -> P_115 ; } else { B_31_62_0
= B_31_61_0 ; } B_31_129_0 = ( _rtP -> P_117 * _rtDW -> UnitDelay2_DSTATE +
_rtP -> P_118 * B_31_73_0 ) * _rtB -> B_31_33_0 + B_31_62_0 ; B_31_284_0 =
_rtP -> P_119 - B_31_73_0 ; B_31_73_0 = _rtP -> P_120 * B_31_284_0 + _rtDW ->
Integrator_DSTATE_n ; if ( B_31_73_0 >= _rtP -> P_123 ) { B_31_315_0 = _rtP
-> P_123 ; } else if ( B_31_73_0 <= _rtP -> P_124 ) { B_31_315_0 = _rtP ->
P_124 ; } else { B_31_315_0 = B_31_73_0 ; } B_31_314_0 = _rtP -> P_125 *
_rtDW -> UnitDelay3_DSTATE * _rtB -> B_31_33_0 * _rtP -> P_126 + B_31_315_0 ;
B_31_320_0 = - B_31_129_0 * B_31_199_0 + B_31_314_0 * B_31_209_0 ; B_31_312_0
= _rtP -> P_127 * B_31_320_0 ; B_31_209_0 = ( 1.7320508 * B_31_199_0 + -
B_31_209_0 ) * B_31_314_0 * 0.5 + ( 1.7320508 * B_31_209_0 + B_31_199_0 ) *
B_31_129_0 * 0.5 ; B_31_314_0 = _rtP -> P_128 * B_31_209_0 ; B_31_320_0 = ( (
0.0 - B_31_209_0 ) - B_31_320_0 ) * _rtP -> P_129 ; _rtB -> B_31_85_0 = (
B_31_312_0 - 0.5 * B_31_314_0 ) - 0.5 * B_31_320_0 ; _rtB -> B_31_86_0 = (
B_31_314_0 - B_31_320_0 ) * 0.8660254037844386 ; ssCallAccelRunBlock ( S , 17
, 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_31_88_0 = _rtDW ->
IntegerDelay3_DSTATE ; ssCallAccelRunBlock ( S , 18 , 0 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 16 , 0 , SS_CALL_MDL_OUTPUTS ) ; B_31_107_0 =
ssGetT ( S ) ; ( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO
( S ) ) -> B_31_92_0 = ssGetTStart ( S ) ; B_31_107_0 -= _rtB -> B_31_92_0 ;
_rtB -> B_31_94_0 = _rtP -> P_131 ; B_31_107_0 = muDoubleScalarRem (
B_31_107_0 , _rtB -> B_31_94_0 ) ; B_31_107_0 = rt_Lookup ( ( const real_T *
) & _rtP -> P_132 , 3 , B_31_107_0 , ( const real_T * ) & _rtP -> P_133 ) ;
B_31_99_0 = B_31_107_0 - _rtB -> B_16_0_1 ; if ( ssIsMajorTimeStep ( S ) ) {
if ( B_31_99_0 >= _rtP -> P_134 ) { _rtDW -> Relay_Mode = TRUE ; } else { if
( B_31_99_0 <= _rtP -> P_135 ) { _rtDW -> Relay_Mode = FALSE ; } } } if (
_rtDW -> Relay_Mode ) { B_31_99_0 = _rtP -> P_136 ; } else { B_31_99_0 = _rtP
-> P_137 ; } B_31_103_0 = B_31_107_0 - _rtB -> B_16_0_2 ; if (
ssIsMajorTimeStep ( S ) ) { if ( B_31_103_0 >= _rtP -> P_140 ) { _rtDW ->
Relay1_Mode = TRUE ; } else { if ( B_31_103_0 <= _rtP -> P_141 ) { _rtDW ->
Relay1_Mode = FALSE ; } } } if ( _rtDW -> Relay1_Mode ) { B_31_103_0 = _rtP
-> P_142 ; } else { B_31_103_0 = _rtP -> P_143 ; } B_31_107_0 -= _rtB ->
B_16_0_3 ; if ( ssIsMajorTimeStep ( S ) ) { if ( B_31_107_0 >= _rtP -> P_146
) { _rtDW -> Relay2_Mode = TRUE ; } else { if ( B_31_107_0 <= _rtP -> P_147 )
{ _rtDW -> Relay2_Mode = FALSE ; } } } if ( _rtDW -> Relay2_Mode ) {
B_31_107_0 = _rtP -> P_148 ; } else { B_31_107_0 = _rtP -> P_149 ; } _rtB ->
B_31_110_0 [ 0 ] = ( B_31_99_0 != 0.0 ) ; _rtB -> B_31_110_0 [ 1 ] = ( _rtP
-> P_138 * B_31_99_0 + _rtP -> P_139 != 0.0 ) ; _rtB -> B_31_110_0 [ 2 ] = (
B_31_103_0 != 0.0 ) ; _rtB -> B_31_110_0 [ 3 ] = ( _rtP -> P_144 * B_31_103_0
+ _rtP -> P_145 != 0.0 ) ; _rtB -> B_31_110_0 [ 4 ] = ( B_31_107_0 != 0.0 ) ;
_rtB -> B_31_110_0 [ 5 ] = ( _rtP -> P_150 * B_31_107_0 + _rtP -> P_151 !=
0.0 ) ; _rtB -> B_31_111_0 = _rtP -> P_152 ; B_31_150_0 = ( _rtP -> P_153 ==
_rtP -> P_154 ) ; _rtB -> B_31_115_0 = B_31_150_0 ; if ( _rtB -> B_31_115_0 )
{ if ( ! _rtDW -> ONDelay_MODE ) { _rtDW -> ONDelay_MODE = TRUE ; } } else {
if ( _rtDW -> ONDelay_MODE ) { if ( _rtDW -> POSITIVEEdge_c .
POSITIVEEdge_MODE ) { Vector_Control_SVPWM_encoderless_POSITIVEEdge_Disable (
S , & ( ( D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) )
-> POSITIVEEdge_c ) ; } if ( _rtDW -> NEGATIVEEdge_j . NEGATIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_NEGATIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
NEGATIVEEdge_j ) ; } _rtDW -> ONDelay_MODE = FALSE ; } } if ( _rtDW ->
ONDelay_MODE ) { _rtB -> B_30_0_0 = _rtP -> P_49 ; _rtB -> B_30_1_0 = _rtP ->
P_50 ; switch ( ( int32_T ) _rtP -> P_51 ) { case 1 : _rtB -> B_30_8_0 = _rtP
-> P_48 [ 0 ] ; _rtB -> B_30_7_0 = _rtP -> P_48 [ 1 ] ; break ; case 2 : _rtB
-> B_30_8_0 = _rtP -> P_47 [ 0 ] ; _rtB -> B_30_7_0 = _rtP -> P_47 [ 1 ] ;
break ; default : _rtB -> B_30_8_0 = _rtP -> P_46 [ 0 ] ; _rtB -> B_30_7_0 =
_rtP -> P_46 [ 1 ] ; break ; } for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_30_9_0 [ i ] = _rtDW -> UnitDelay_DSTATE_n [ i ] ; }
Vector_Control_SVPWM_encoderless_POSITIVEEdge ( S , _rtB -> B_30_8_0 , _rtB
-> B_31_110_0 , _rtB -> B_30_9_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
POSITIVEEdge_c , & ( ( D_Work_Vector_Control_SVPWM_encoderless * )
ssGetRootDWork ( S ) ) -> POSITIVEEdge_c ) ;
Vector_Control_SVPWM_encoderless_NEGATIVEEdge ( S , _rtB -> B_30_7_0 , _rtB
-> B_30_9_0 , _rtB -> B_31_110_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
NEGATIVEEdge_j , & ( ( D_Work_Vector_Control_SVPWM_encoderless * )
ssGetRootDWork ( S ) ) -> NEGATIVEEdge_j ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtB -> B_30_13_0 [ i ] = _rtDW -> UnitDelay_DSTATE_a [ i ] ; if ( _rtB ->
POSITIVEEdge_c . B_23_0_0 [ i ] || _rtB -> NEGATIVEEdge_j . B_22_0_0 [ i ] )
{ B_31_199_0 = _rtB -> B_31_111_0 ; } else { B_31_199_0 = _rtB -> B_30_13_0 [
i ] ; } _rtB -> B_30_15_0 [ i ] = B_31_199_0 - _rtB -> B_30_1_0 ; _rtB ->
B_30_17_0 [ i ] = ( _rtB -> B_31_110_0 [ i ] && ( _rtB -> B_30_0_0 >= _rtB ->
B_30_15_0 [ i ] ) ) ; } srUpdateBC ( _rtDW -> ONDelay_SubsysRanBC ) ; } _rtB
-> B_31_118_0 = ! B_31_150_0 ; if ( _rtB -> B_31_118_0 ) { if ( ! _rtDW ->
OFFDelay_MODE ) { _rtDW -> OFFDelay_MODE = TRUE ; } } else { if ( _rtDW ->
OFFDelay_MODE ) { if ( _rtDW -> POSITIVEEdge . POSITIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_POSITIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
POSITIVEEdge ) ; } if ( _rtDW -> NEGATIVEEdge . NEGATIVEEdge_MODE ) {
Vector_Control_SVPWM_encoderless_NEGATIVEEdge_Disable ( S , & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
NEGATIVEEdge ) ; } _rtDW -> OFFDelay_MODE = FALSE ; } } if ( _rtDW ->
OFFDelay_MODE ) { _rtB -> B_24_0_0 = _rtP -> P_42 ; _rtB -> B_24_1_0 = _rtP
-> P_43 ; switch ( ( int32_T ) _rtP -> P_44 ) { case 1 : _rtB -> B_24_8_0 =
_rtP -> P_41 [ 0 ] ; _rtB -> B_24_7_0 = _rtP -> P_41 [ 1 ] ; break ; case 2 :
_rtB -> B_24_8_0 = _rtP -> P_40 [ 0 ] ; _rtB -> B_24_7_0 = _rtP -> P_40 [ 1 ]
; break ; default : _rtB -> B_24_8_0 = _rtP -> P_39 [ 0 ] ; _rtB -> B_24_7_0
= _rtP -> P_39 [ 1 ] ; break ; } for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_24_9_0 [ i ] = _rtDW -> UnitDelay_DSTATE_g [ i ] ; }
Vector_Control_SVPWM_encoderless_POSITIVEEdge ( S , _rtB -> B_24_8_0 , _rtB
-> B_31_110_0 , _rtB -> B_24_9_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
POSITIVEEdge , & ( ( D_Work_Vector_Control_SVPWM_encoderless * )
ssGetRootDWork ( S ) ) -> POSITIVEEdge ) ;
Vector_Control_SVPWM_encoderless_NEGATIVEEdge ( S , _rtB -> B_24_7_0 , _rtB
-> B_24_9_0 , _rtB -> B_31_110_0 , & ( (
BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
NEGATIVEEdge , & ( ( D_Work_Vector_Control_SVPWM_encoderless * )
ssGetRootDWork ( S ) ) -> NEGATIVEEdge ) ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtB -> B_24_14_0 [ i ] = _rtDW -> UnitDelay_DSTATE_p [ i ] ; if ( _rtB ->
POSITIVEEdge . B_23_0_0 [ i ] || _rtB -> NEGATIVEEdge . B_22_0_0 [ i ] ) {
B_31_199_0 = _rtB -> B_31_111_0 ; } else { B_31_199_0 = _rtB -> B_24_14_0 [ i
] ; } _rtB -> B_24_16_0 [ i ] = B_31_199_0 - _rtB -> B_24_1_0 ; _rtB ->
B_24_19_0 [ i ] = ! ( ( ! _rtB -> B_31_110_0 [ i ] ) && ( _rtB -> B_24_0_0 >=
_rtB -> B_24_16_0 [ i ] ) ) ; } srUpdateBC ( _rtDW -> OFFDelay_SubsysRanBC )
; } for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_31_120_0 [ i ] = ( _rtB ->
B_30_17_0 [ i ] || _rtB -> B_24_19_0 [ i ] ) ; } _rtB -> B_31_122_0 = _rtP ->
P_303 ; if ( _rtB -> B_31_122_0 ) { if ( ! _rtDW -> Tail_MODE ) { for ( i = 0
; i < 6 ; i ++ ) { _rtDW -> DiscreteTimeIntegrator_DSTATE_ii [ i ] = _rtP ->
P_4 ; _rtDW -> DiscreteTimeIntegrator_PrevResetState [ i ] = 2 ; _rtDW ->
UnitDelay_DSTATE_l [ i ] = _rtP -> P_13 ; } _rtDW -> Tail_MODE = TRUE ; } }
else { if ( _rtDW -> Tail_MODE ) { _rtDW -> Tail_MODE = FALSE ; } } if (
_rtDW -> Tail_MODE ) { _rtB -> B_0_0_0 = _rtP -> P_1 ; _rtB -> B_0_1_0 = _rtP
-> P_2 ; for ( i = 0 ; i < 6 ; i ++ ) { if ( ( ! _rtB -> B_31_120_0 [ i ] )
&& ( _rtDW -> DiscreteTimeIntegrator_PrevResetState [ i ] == 1 ) ) { _rtDW ->
DiscreteTimeIntegrator_DSTATE_ii [ i ] = _rtP -> P_4 ; } B_31_124_0 = ( _rtP
-> P_9 - _rtDW -> DiscreteTimeIntegrator_DSTATE_ii [ i ] ) * _rtP -> P_10 ;
B_31_199_0 = _rtP -> P_6 * _rtDW -> DiscreteTimeIntegrator_DSTATE_ii [ i ] +
_rtP -> P_5 ; if ( B_31_199_0 >= _rtP -> P_7 ) { B_31_199_0 = _rtP -> P_7 ; }
else { if ( B_31_199_0 <= _rtP -> P_8 ) { B_31_199_0 = _rtP -> P_8 ; } } if (
B_31_124_0 >= _rtP -> P_11 ) { B_31_124_0 = _rtP -> P_11 ; } else { if (
B_31_124_0 <= _rtP -> P_12 ) { B_31_124_0 = _rtP -> P_12 ; } } _rtB ->
B_0_11_0 [ i ] = B_31_199_0 + B_31_124_0 ; _rtB -> B_0_12_0 [ i ] = _rtDW ->
UnitDelay_DSTATE_l [ i ] ; if ( _rtB -> B_31_120_0 [ i ] ) { _rtB -> B_0_13_0
[ i ] = _rtB -> B_31_1_0 [ i ] ; } else { _rtB -> B_0_13_0 [ i ] = _rtB ->
B_0_12_0 [ i ] ; } _rtB -> B_0_14_0 [ i ] = _rtB -> B_0_11_0 [ i ] * _rtB ->
B_0_13_0 [ i ] * _rtB -> B_0_1_0 ; } srUpdateBC ( _rtDW -> Tail_SubsysRanBC )
; } B_31_124_0 = _rtP -> P_155 ; B_31_312_0 = _rtDW ->
DiscreteTimeIntegrator_DSTATE_i ; B_31_320_0 = _rtDW ->
DiscreteTimeIntegrator1_DSTATE_e ; B_31_314_0 = _rtDW ->
DiscreteTimeIntegrator_DSTATE_d ; B_31_129_0 = _rtDW ->
DiscreteTimeIntegrator1_DSTATE_f ; B_31_99_0 = ( _rtP -> P_160 * _rtDW ->
DiscreteTimeIntegrator_DSTATE_i + _rtP -> P_165 * _rtDW ->
DiscreteTimeIntegrator_DSTATE_d ) * _rtP -> P_166 ; B_31_134_0 = ( _rtP ->
P_160 * _rtDW -> DiscreteTimeIntegrator1_DSTATE_e + _rtP -> P_165 * _rtDW ->
DiscreteTimeIntegrator1_DSTATE_f ) * _rtP -> P_167 ; _rtB -> B_31_136_0 =
_rtP -> P_168 ; if ( _rtB -> B_31_136_0 > 0.0 ) { B_31_103_0 = B_31_99_0 *
B_31_99_0 + B_31_134_0 * B_31_134_0 ; B_3_3_0 = ( ( ( ( 5.0 * B_31_103_0 +
4.0 ) * B_31_103_0 + 3.0 ) * B_31_103_0 + 2.0 ) * B_31_103_0 + 1.0 ) *
B_31_103_0 ; if ( B_31_103_0 > _rtP -> P_16 ) { _rtB -> B_3_7_0 = B_31_99_0 -
B_31_99_0 * B_3_3_0 * _rtP -> P_15 ; _rtB -> B_3_9_0 = B_31_134_0 - B_3_3_0 *
B_31_134_0 * _rtP -> P_14 ; } else { _rtB -> B_3_7_0 = B_31_99_0 ; _rtB ->
B_3_9_0 = B_31_134_0 ; } srUpdateBC ( _rtDW -> Saturation_SubsysRanBC ) ; }
if ( _rtP -> P_169 >= _rtP -> P_170 ) { B_31_209_0 = _rtB -> B_3_7_0 ; } else
{ B_31_209_0 = B_31_99_0 ; } B_31_141_0 = ( B_31_312_0 - B_31_209_0 ) * _rtP
-> P_171 ; if ( _rtP -> P_169 >= _rtP -> P_172 ) { B_31_199_0 = _rtB ->
B_3_9_0 ; } else { B_31_199_0 = B_31_134_0 ; } B_31_134_0 = ( B_31_320_0 -
B_31_199_0 ) * _rtP -> P_173 ; B_31_146_0 = ( B_31_314_0 - B_31_209_0 ) *
_rtP -> P_174 ; B_31_148_0 = ( B_31_129_0 - B_31_199_0 ) * _rtP -> P_175 ;
B_31_103_0 = _rtDW -> DiscreteTimeIntegrator1_DSTATE_k ; B_31_150_0 = _rtP ->
P_304 ; B_31_151_0 = _rtP -> P_304 ; if ( B_31_151_0 ) { if ( ! _rtDW ->
sinthrcosthr_MODE ) { _rtDW -> sinthrcosthr_MODE = TRUE ; } _rtB -> B_15_0_0
[ 0 ] = _rtP -> P_38 [ 0 ] ; _rtB -> B_15_0_0 [ 1 ] = _rtP -> P_38 [ 1 ] ;
_rtB -> B_15_1_0 = muDoubleScalarSin ( _rtDW ->
DiscreteTimeIntegrator1_DSTATE_k ) ; _rtB -> B_15_2_0 = muDoubleScalarCos (
_rtDW -> DiscreteTimeIntegrator1_DSTATE_k ) ; srUpdateBC ( _rtDW ->
sinthrcosthr_SubsysRanBC ) ; } else { if ( _rtDW -> sinthrcosthr_MODE ) {
_rtB -> B_15_1_0 = _rtP -> P_37 ; _rtB -> B_15_2_0 = _rtP -> P_37 ; _rtB ->
B_15_0_0 [ 0 ] = _rtP -> P_37 ; _rtB -> B_15_0_0 [ 1 ] = _rtP -> P_37 ; _rtDW
-> sinthrcosthr_MODE = FALSE ; } } B_31_153_0 = _rtDW ->
DiscreteTimeIntegrator_DSTATE_i2 ; _rtB -> B_31_155_0 = _rtP -> P_305 ; if (
_rtB -> B_31_155_0 ) { B_14_3_0 = ssGetTaskTime ( S , 1 ) ; _rtB -> B_14_2_0
= _rtP -> P_35 - B_31_153_0 ; B_14_3_0 *= _rtP -> P_36 ; B_31_99_0 = B_14_3_0
- B_31_103_0 ; _rtB -> B_14_5_0 = muDoubleScalarSin ( B_14_3_0 ) ; _rtB ->
B_14_6_0 = muDoubleScalarSin ( B_31_99_0 ) ; _rtB -> B_14_7_0 =
muDoubleScalarCos ( B_31_99_0 ) ; _rtB -> B_14_8_0 = muDoubleScalarCos (
B_14_3_0 ) ; srUpdateBC ( _rtDW -> sinbetacosbetasinthcosth_SubsysRanBC ) ; }
if ( B_31_150_0 ) { B_31_157_0_idx_2 = _rtB -> B_15_1_0 ; B_31_157_0_idx_1 =
_rtB -> B_15_2_0 ; B_31_157_0_idx_0 = _rtB -> B_15_0_0 [ 0 ] ; B_31_157_0_idx
= _rtB -> B_15_0_0 [ 1 ] ; } else { B_31_157_0_idx_2 = _rtB -> B_14_6_0 ;
B_31_157_0_idx_1 = _rtB -> B_14_7_0 ; B_31_157_0_idx_0 = _rtB -> B_14_5_0 ;
B_31_157_0_idx = _rtB -> B_14_8_0 ; } B_31_159_0 = _rtP -> P_306 ; if (
B_31_159_0 ) { if ( ! _rtDW -> Rotorreferenceframe_MODE ) { _rtDW ->
Rotorreferenceframe_MODE = TRUE ; } _rtB -> B_7_0_0 = B_31_141_0 ; _rtB ->
B_7_1_0 = - ( 1.7320508075688772 * B_31_134_0 + B_31_141_0 ) / 2.0 ; _rtB ->
B_7_2_0 = B_31_157_0_idx_1 * B_31_146_0 + B_31_157_0_idx_2 * B_31_148_0 ;
_rtB -> B_7_3_0 = ( ( 1.7320508075688772 * B_31_157_0_idx_2 + -
B_31_157_0_idx_1 ) * B_31_146_0 + ( - 1.7320508075688772 * B_31_157_0_idx_1 -
B_31_157_0_idx_2 ) * B_31_148_0 ) / 2.0 ; srUpdateBC ( _rtDW ->
Rotorreferenceframe_SubsysRanBC ) ; } else { if ( _rtDW ->
Rotorreferenceframe_MODE ) { _rtB -> B_7_0_0 = _rtP -> P_23 ; _rtB -> B_7_1_0
= _rtP -> P_23 ; _rtB -> B_7_2_0 = _rtP -> P_24 ; _rtB -> B_7_3_0 = _rtP ->
P_24 ; _rtDW -> Rotorreferenceframe_MODE = FALSE ; } } B_31_162_0 = _rtP ->
P_307 ; if ( B_31_162_0 ) { if ( ! _rtDW -> Stationaryreferenceframe_MODE ) {
_rtDW -> Stationaryreferenceframe_MODE = TRUE ; } _rtB -> B_8_0_0 =
B_31_157_0_idx_1 * B_31_141_0 - B_31_157_0_idx_2 * B_31_134_0 ; _rtB ->
B_8_1_0 = ( ( - B_31_157_0_idx_1 - 1.7320508075688772 * B_31_157_0_idx_2 ) *
B_31_141_0 + ( B_31_157_0_idx_2 - 1.7320508075688772 * B_31_157_0_idx_1 ) *
B_31_134_0 ) / 2.0 ; _rtB -> B_8_2_0 = B_31_146_0 ; _rtB -> B_8_3_0 = - (
1.7320508075688772 * B_31_148_0 + B_31_146_0 ) / 2.0 ; srUpdateBC ( _rtDW ->
Stationaryreferenceframe_SubsysRanBC ) ; } else { if ( _rtDW ->
Stationaryreferenceframe_MODE ) { _rtB -> B_8_0_0 = _rtP -> P_25 ; _rtB ->
B_8_1_0 = _rtP -> P_25 ; _rtB -> B_8_2_0 = _rtP -> P_26 ; _rtB -> B_8_3_0 =
_rtP -> P_26 ; _rtDW -> Stationaryreferenceframe_MODE = FALSE ; } }
B_31_165_0 = _rtP -> P_308 ; if ( B_31_165_0 ) { if ( ! _rtDW ->
Synchronousreferenceframe_MODE ) { _rtDW -> Synchronousreferenceframe_MODE =
TRUE ; } _rtB -> B_9_0_0 = B_31_157_0_idx_1 * B_31_141_0 + B_31_157_0_idx_2 *
B_31_134_0 ; _rtB -> B_9_1_0 = ( ( 1.7320508075688772 * B_31_157_0_idx_2 + -
B_31_157_0_idx_1 ) * B_31_141_0 + ( - 1.7320508075688772 * B_31_157_0_idx_1 -
B_31_157_0_idx_2 ) * B_31_134_0 ) / 2.0 ; _rtB -> B_9_2_0 = B_31_157_0_idx *
B_31_146_0 + B_31_157_0_idx_0 * B_31_148_0 ; _rtB -> B_9_3_0 = ( (
1.7320508075688772 * B_31_157_0_idx_0 + - B_31_157_0_idx ) * B_31_146_0 + ( -
1.7320508075688772 * B_31_157_0_idx - B_31_157_0_idx_0 ) * B_31_148_0 ) / 2.0
; srUpdateBC ( _rtDW -> Synchronousreferenceframe_SubsysRanBC ) ; } else { if
( _rtDW -> Synchronousreferenceframe_MODE ) { _rtB -> B_9_0_0 = _rtP -> P_27
; _rtB -> B_9_1_0 = _rtP -> P_27 ; _rtB -> B_9_2_0 = _rtP -> P_28 ; _rtB ->
B_9_3_0 = _rtP -> P_28 ; _rtDW -> Synchronousreferenceframe_MODE = FALSE ; }
} switch ( ( int32_T ) B_31_124_0 ) { case 1 : B_31_167_0_idx_0 = _rtB ->
B_7_0_0 ; B_31_167_0_idx = _rtB -> B_7_1_0 ; break ; case 2 :
B_31_167_0_idx_0 = _rtB -> B_8_0_0 ; B_31_167_0_idx = _rtB -> B_8_1_0 ; break
; default : B_31_167_0_idx_0 = _rtB -> B_9_0_0 ; B_31_167_0_idx = _rtB ->
B_9_1_0 ; break ; } switch ( ( int32_T ) _rtP -> P_180 ) { case 1 :
B_30_6_0_idx_0 = _rtB -> B_7_2_0 ; B_30_6_0_idx = _rtB -> B_7_3_0 ; break ;
case 2 : B_30_6_0_idx_0 = _rtB -> B_8_2_0 ; B_30_6_0_idx = _rtB -> B_8_3_0 ;
break ; default : B_30_6_0_idx_0 = _rtB -> B_9_2_0 ; B_30_6_0_idx = _rtB ->
B_9_3_0 ; break ; } _rtB -> B_31_170_0 [ 0 ] = _rtP -> P_181 *
B_31_167_0_idx_0 ; _rtB -> B_31_170_0 [ 1 ] = _rtP -> P_181 * B_31_167_0_idx
; _rtB -> B_31_170_0 [ 2 ] = _rtP -> P_181 * B_30_6_0_idx_0 ; _rtB ->
B_31_170_0 [ 3 ] = _rtP -> P_181 * B_30_6_0_idx ; if ( _rtDW -> systemEnable
!= 0 ) { _rtDW -> lastSin = muDoubleScalarSin ( _rtP -> P_184 * ssGetTaskTime
( S , 1 ) ) ; _rtDW -> lastCos = muDoubleScalarCos ( _rtP -> P_184 *
ssGetTaskTime ( S , 1 ) ) ; _rtDW -> systemEnable = 0 ; } _rtB -> B_31_171_0
= ( ( _rtDW -> lastSin * _rtP -> P_188 + _rtDW -> lastCos * _rtP -> P_187 ) *
_rtP -> P_186 + ( _rtDW -> lastCos * _rtP -> P_188 - _rtDW -> lastSin * _rtP
-> P_187 ) * _rtP -> P_185 ) * _rtP -> P_182 + _rtP -> P_183 ; if ( _rtDW ->
systemEnable_k != 0 ) { _rtDW -> lastSin_i = muDoubleScalarSin ( _rtP ->
P_191 * ssGetTaskTime ( S , 1 ) ) ; _rtDW -> lastCos_l = muDoubleScalarCos (
_rtP -> P_191 * ssGetTaskTime ( S , 1 ) ) ; _rtDW -> systemEnable_k = 0 ; }
_rtB -> B_31_172_0 = ( ( _rtDW -> lastSin_i * _rtP -> P_195 + _rtDW ->
lastCos_l * _rtP -> P_194 ) * _rtP -> P_193 + ( _rtDW -> lastCos_l * _rtP ->
P_195 - _rtDW -> lastSin_i * _rtP -> P_194 ) * _rtP -> P_192 ) * _rtP ->
P_189 + _rtP -> P_190 ; if ( _rtDW -> systemEnable_i != 0 ) { _rtDW ->
lastSin_b = muDoubleScalarSin ( _rtP -> P_198 * ssGetTaskTime ( S , 1 ) ) ;
_rtDW -> lastCos_h = muDoubleScalarCos ( _rtP -> P_198 * ssGetTaskTime ( S ,
1 ) ) ; _rtDW -> systemEnable_i = 0 ; } _rtB -> B_31_173_0 = ( ( _rtDW ->
lastSin_b * _rtP -> P_202 + _rtDW -> lastCos_h * _rtP -> P_201 ) * _rtP ->
P_200 + ( _rtDW -> lastCos_h * _rtP -> P_202 - _rtDW -> lastSin_b * _rtP ->
P_201 ) * _rtP -> P_199 ) * _rtP -> P_196 + _rtP -> P_197 ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_31_174_0 [ i ] = _rtP -> P_203 [ i ] ; if ( _rtB ->
B_31_1_0 [ i ] != 0.0 ) { _rtB -> B_31_177_0 [ i ] = _rtP -> P_204 [ i ] ; }
else { _rtB -> B_31_177_0 [ i ] = _rtP -> P_205 [ i ] ; } }
ssCallAccelRunBlock ( S , 31 , 178 , SS_CALL_MDL_OUTPUTS ) ; B_31_99_0 = _rtP
-> P_206 ; B_31_199_0 = _rtP -> P_208 * _rtP -> P_207 [ 0 ] ; B_31_124_0 =
_rtP -> P_208 * _rtP -> P_207 [ 1 ] ; B_31_209_0 = _rtP -> P_208 * _rtB ->
B_31_178_0 [ 12 ] ; B_3_3_0 = _rtP -> P_208 * _rtB -> B_31_178_0 [ 13 ] ;
B_31_184_0 = _rtP -> P_309 ; if ( B_31_184_0 ) { if ( ! _rtDW ->
Rotorreferenceframe_MODE_p ) { _rtDW -> Rotorreferenceframe_MODE_p = TRUE ; }
_rtB -> B_4_0_0 = - 0.57735026918962573 * B_31_124_0 ; _rtB -> B_4_1_0 = ( (
B_31_157_0_idx_2 - 1.7320508075688772 * B_31_157_0_idx_1 ) * B_3_3_0 + 2.0 *
B_31_157_0_idx_2 * B_31_209_0 ) * 0.33333333333333331 ; _rtB -> B_4_2_0 = (
2.0 * B_31_199_0 + B_31_124_0 ) * 0.33333333333333331 ; _rtB -> B_4_3_0 = ( (
1.7320508075688772 * B_31_157_0_idx_2 + B_31_157_0_idx_1 ) * B_3_3_0 + 2.0 *
B_31_157_0_idx_1 * B_31_209_0 ) * 0.33333333333333331 ; srUpdateBC ( _rtDW ->
Rotorreferenceframe_SubsysRanBC_p ) ; } else { if ( _rtDW ->
Rotorreferenceframe_MODE_p ) { _rtB -> B_4_2_0 = _rtP -> P_17 ; _rtB ->
B_4_0_0 = _rtP -> P_17 ; _rtB -> B_4_3_0 = _rtP -> P_18 ; _rtB -> B_4_1_0 =
_rtP -> P_18 ; _rtDW -> Rotorreferenceframe_MODE_p = FALSE ; } } B_31_187_0 =
_rtP -> P_310 ; if ( B_31_187_0 ) { if ( ! _rtDW ->
Stationaryreferenceframe_MODE_n ) { _rtDW -> Stationaryreferenceframe_MODE_n
= TRUE ; } _rtB -> B_5_0_0 = ( ( - B_31_157_0_idx_2 - 1.7320508075688772 *
B_31_157_0_idx_1 ) * B_31_124_0 + - 2.0 * B_31_157_0_idx_2 * B_31_199_0 ) *
0.33333333333333331 ; _rtB -> B_5_1_0 = - 0.57735026918962573 * B_3_3_0 ;
_rtB -> B_5_2_0 = ( ( B_31_157_0_idx_1 - 1.7320508075688772 *
B_31_157_0_idx_2 ) * B_31_124_0 + 2.0 * B_31_157_0_idx_1 * B_31_199_0 ) *
0.33333333333333331 ; _rtB -> B_5_3_0 = ( 2.0 * B_31_209_0 + B_3_3_0 ) *
0.33333333333333331 ; srUpdateBC ( _rtDW ->
Stationaryreferenceframe_SubsysRanBC_k ) ; } else { if ( _rtDW ->
Stationaryreferenceframe_MODE_n ) { _rtB -> B_5_2_0 = _rtP -> P_19 ; _rtB ->
B_5_0_0 = _rtP -> P_19 ; _rtB -> B_5_3_0 = _rtP -> P_20 ; _rtB -> B_5_1_0 =
_rtP -> P_20 ; _rtDW -> Stationaryreferenceframe_MODE_n = FALSE ; } }
B_31_190_0 = _rtP -> P_311 ; if ( B_31_190_0 ) { if ( ! _rtDW ->
Synchronousreferenceframe_MODE_d ) { _rtDW ->
Synchronousreferenceframe_MODE_d = TRUE ; } _rtB -> B_6_0_0 = ( (
B_31_157_0_idx_2 - 1.7320508075688772 * B_31_157_0_idx_1 ) * B_31_124_0 + 2.0
* B_31_157_0_idx_2 * B_31_199_0 ) / 3.0 ; _rtB -> B_6_1_0 = ( (
B_31_157_0_idx_0 - 1.7320508075688772 * B_31_157_0_idx ) * B_3_3_0 + 2.0 *
B_31_157_0_idx_0 * B_31_209_0 ) / 3.0 ; _rtB -> B_6_2_0 = ( (
1.7320508075688772 * B_31_157_0_idx_2 + B_31_157_0_idx_1 ) * B_31_124_0 + 2.0
* B_31_157_0_idx_1 * B_31_199_0 ) / 3.0 ; _rtB -> B_6_3_0 = ( (
1.7320508075688772 * B_31_157_0_idx_0 + B_31_157_0_idx ) * B_3_3_0 + 2.0 *
B_31_157_0_idx * B_31_209_0 ) / 3.0 ; srUpdateBC ( _rtDW ->
Synchronousreferenceframe_SubsysRanBC_b ) ; } else { if ( _rtDW ->
Synchronousreferenceframe_MODE_d ) { _rtB -> B_6_2_0 = _rtP -> P_21 ; _rtB ->
B_6_0_0 = _rtP -> P_21 ; _rtB -> B_6_3_0 = _rtP -> P_22 ; _rtB -> B_6_1_0 =
_rtP -> P_22 ; _rtDW -> Synchronousreferenceframe_MODE_d = FALSE ; } } switch
( ( int32_T ) B_31_99_0 ) { case 1 : B_31_124_0 = _rtB -> B_4_2_0 ;
B_31_157_0_idx_2 = _rtB -> B_4_0_0 ; break ; case 2 : B_31_124_0 = _rtB ->
B_5_2_0 ; B_31_157_0_idx_2 = _rtB -> B_5_0_0 ; break ; default : B_31_124_0 =
_rtB -> B_6_2_0 ; B_31_157_0_idx_2 = _rtB -> B_6_0_0 ; break ; } switch ( (
int32_T ) _rtP -> P_209 ) { case 1 : B_31_157_0_idx_1 = _rtB -> B_4_3_0 ;
B_31_157_0_idx_0 = _rtB -> B_4_1_0 ; break ; case 2 : B_31_157_0_idx_1 = _rtB
-> B_5_3_0 ; B_31_157_0_idx_0 = _rtB -> B_5_1_0 ; break ; default :
B_31_157_0_idx_1 = _rtB -> B_6_3_0 ; B_31_157_0_idx_0 = _rtB -> B_6_1_0 ;
break ; } _rtB -> B_31_196_0 [ 0 ] = _rtP -> P_210 [ 0 ] * B_31_167_0_idx_0 ;
_rtB -> B_31_196_0 [ 1 ] = _rtP -> P_210 [ 1 ] * B_31_167_0_idx ; _rtB ->
B_31_196_0 [ 2 ] = ( ( 0.0 - B_31_167_0_idx_0 ) - B_31_167_0_idx ) * _rtP ->
P_210 [ 2 ] ; _rtB -> B_31_196_0 [ 3 ] = _rtP -> P_210 [ 3 ] * B_31_141_0 ;
_rtB -> B_31_196_0 [ 4 ] = _rtP -> P_210 [ 4 ] * B_31_134_0 ; _rtB ->
B_31_196_0 [ 5 ] = _rtP -> P_210 [ 5 ] * B_31_312_0 ; _rtB -> B_31_196_0 [ 6
] = _rtP -> P_210 [ 6 ] * B_31_320_0 ; _rtB -> B_31_196_0 [ 7 ] = _rtP ->
P_210 [ 7 ] * B_31_124_0 ; _rtB -> B_31_196_0 [ 8 ] = _rtP -> P_210 [ 8 ] *
B_31_157_0_idx_2 ; _rtB -> B_31_196_0 [ 9 ] = _rtP -> P_210 [ 9 ] *
B_30_6_0_idx_0 ; _rtB -> B_31_196_0 [ 10 ] = _rtP -> P_210 [ 10 ] *
B_30_6_0_idx ; _rtB -> B_31_196_0 [ 11 ] = ( ( 0.0 - B_30_6_0_idx_0 ) -
B_30_6_0_idx ) * _rtP -> P_210 [ 11 ] ; _rtB -> B_31_196_0 [ 12 ] = _rtP ->
P_210 [ 12 ] * B_31_146_0 ; _rtB -> B_31_196_0 [ 13 ] = _rtP -> P_210 [ 13 ]
* B_31_148_0 ; _rtB -> B_31_196_0 [ 14 ] = _rtP -> P_210 [ 14 ] * B_31_314_0
; _rtB -> B_31_196_0 [ 15 ] = _rtP -> P_210 [ 15 ] * B_31_129_0 ; _rtB ->
B_31_196_0 [ 16 ] = _rtP -> P_210 [ 16 ] * B_31_157_0_idx_1 ; _rtB ->
B_31_196_0 [ 17 ] = _rtP -> P_210 [ 17 ] * B_31_157_0_idx_0 ; B_31_199_0 =
B_31_129_0 * B_31_146_0 - B_31_314_0 * B_31_148_0 ; _rtB -> B_31_201_0 [ 0 ]
= _rtP -> P_212 [ 0 ] * B_31_153_0 ; _rtB -> B_31_201_0 [ 1 ] = _rtP -> P_212
[ 1 ] * B_31_199_0 ; _rtB -> B_31_201_0 [ 2 ] = _rtP -> P_211 * B_31_103_0 *
_rtP -> P_212 [ 2 ] ; ssCallAccelRunBlock ( S , 31 , 202 ,
SS_CALL_MDL_OUTPUTS ) ; B_31_203_0 = _rtDW -> _DSTATE_o [ 0 ] ;
ssCallAccelRunBlock ( S , 31 , 204 , SS_CALL_MDL_OUTPUTS ) ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_31_207_0 = _rtP -> P_218 * _rtDW ->
NextOutput_l ; } _rtB -> B_31_208_0 = _rtDW -> u_DSTATE_g + _rtB ->
B_31_207_0 ; _rtDW -> u_tmp_k = ( _rtB -> B_31_208_0 - _rtP -> P_221 [ 1 ] *
_rtDW -> u_DSTATE_b ) / _rtP -> P_221 [ 0 ] ; B_31_209_0 = _rtP -> P_220 *
_rtDW -> u_tmp_k ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtB -> B_31_212_0 =
_rtP -> P_226 * _rtDW -> NextOutput_g ; } _rtB -> B_31_213_0 = _rtDW ->
u_DSTATE_c + _rtB -> B_31_212_0 ; _rtDW -> u_tmp_a = ( _rtB -> B_31_213_0 -
_rtP -> P_229 [ 1 ] * _rtDW -> u_DSTATE_m ) / _rtP -> P_229 [ 0 ] ; B_3_3_0 =
_rtP -> P_228 * _rtDW -> u_tmp_a ; B_31_215_0 = _rtDW -> u_DSTATE_ba [ 0 ] ;
_rtB -> B_31_261_0 = _rtP -> P_231 ; _rtB -> B_31_217_0 = _rtP -> P_232 *
_rtB -> B_31_196_0 [ 6 ] ; _rtB -> B_31_218_0 = _rtP -> P_233 * _rtB ->
B_31_196_0 [ 12 ] ; _rtB -> B_31_219_0 = _rtP -> P_234 * _rtB -> B_31_196_0 [
13 ] ; _rtB -> B_31_220_0 = _rtP -> P_235 * _rtB -> B_31_196_0 [ 5 ] ; _rtB
-> B_31_221_0 = _rtP -> P_236 * _rtB -> B_31_196_0 [ 16 ] ; _rtB ->
B_31_222_0 = _rtP -> P_237 * _rtB -> B_31_196_0 [ 17 ] ; switch ( ( int32_T )
_rtP -> P_240 ) { case 1 : B_31_103_0 = _rtP -> P_32 ; break ; case 2 :
B_31_103_0 = _rtP -> P_31 * B_31_153_0 ; break ; default : B_31_103_0 = _rtB
-> B_14_2_0 ; break ; } _rtB -> B_31_233_0 = ( ( B_31_103_0 * B_31_312_0 +
B_31_157_0_idx_2 ) - _rtP -> P_239 * B_31_134_0 ) * _rtP -> P_241 ; _rtB ->
B_31_234_0 = ( ( B_31_124_0 - B_31_320_0 * B_31_103_0 ) - _rtP -> P_238 *
B_31_141_0 ) * _rtP -> P_242 ; switch ( ( int32_T ) _rtP -> P_245 ) { case 1
: B_31_103_0 = B_31_153_0 ; break ; case 2 : B_31_103_0 = _rtP -> P_30 ;
break ; default : B_31_103_0 = _rtP -> P_29 ; break ; } _rtB -> B_31_245_0 =
( ( B_31_103_0 * B_31_314_0 + B_31_157_0_idx_0 ) - _rtP -> P_244 * B_31_148_0
) * _rtP -> P_246 ; _rtB -> B_31_246_0 = ( ( B_31_157_0_idx_1 - _rtP -> P_243
* B_31_146_0 ) - B_31_103_0 * B_31_129_0 ) * _rtP -> P_247 ; _rtB ->
B_31_247_0 = _rtP -> P_299 ; ( ( BlockIO_Vector_Control_SVPWM_encoderless * )
_ssGetBlockIO ( S ) ) -> B_31_248_0 = ( (
BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) ) ->
B_31_247_0 ; if ( ssGetTaskTime ( S , 1 ) < _rtP -> P_248 ) { _rtB ->
B_31_249_0 = _rtP -> P_249 ; } else { _rtB -> B_31_249_0 = _rtP -> P_250 ; }
ssCallAccelRunBlock ( S , 31 , 250 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_31_254_0 = ( ( B_31_199_0 - _rtP -> P_251 * _rtB -> B_31_261_0 ) - _rtP ->
P_252 * B_31_153_0 ) * _rtP -> P_253 ; _rtB -> B_31_255_0 = _rtP -> P_254 *
B_31_153_0 ; _rtB -> B_31_261_0 = _rtDW -> IntegerDelay1_DSTATE [ 0 ] ; _rtB
-> B_31_262_0 = _rtP -> P_256 * _rtB -> B_31_178_0 [ 14 ] ; for ( i = 0 ; i <
6 ; i ++ ) { _rtB -> B_31_268_0 [ i ] = ( real_T ) _rtB -> B_31_120_0 [ i ] ;
if ( _rtB -> B_31_178_1 [ i + 6 ] >= _rtP -> P_259 ) { B_31_124_0 = _rtB ->
B_31_178_0 [ i + 6 ] * _rtP -> P_258 ; } else { B_31_124_0 = _rtP -> P_257 ;
} if ( B_31_124_0 >= _rtP -> P_260 ) { _rtB -> B_31_270_0 [ i ] = _rtP ->
P_260 ; } else if ( B_31_124_0 <= _rtP -> P_261 ) { _rtB -> B_31_270_0 [ i ]
= _rtP -> P_261 ; } else { _rtB -> B_31_270_0 [ i ] = B_31_124_0 ; } }
ssCallAccelRunBlock ( S , 31 , 277 , SS_CALL_MDL_OUTPUTS ) ; B_31_103_0 =
muDoubleScalarSin ( _rtB -> B_31_20_0 ) ; B_31_312_0 = muDoubleScalarCos (
_rtB -> B_31_20_0 ) ; _rtB -> B_31_280_0 = B_31_312_0 * B_31_6_0 + B_31_103_0
* B_31_15_0 ; _rtB -> B_31_281_0 = - B_31_103_0 * B_31_6_0 + B_31_312_0 *
B_31_15_0 ; B_31_284_0 *= _rtP -> P_262 ; if ( ( B_31_73_0 != B_31_315_0 ) &&
( muDoubleScalarSign ( B_31_73_0 ) == muDoubleScalarSign ( B_31_284_0 ) ) ) {
_rtB -> B_31_289_0 = Vector_Control_SVPWM_encoderless_rtC ( S ) -> B_31_288_0
; } else { _rtB -> B_31_289_0 = B_31_284_0 ; } B_31_292_0 *= _rtP -> P_264 ;
if ( ( B_31_51_0 != _rtB -> B_31_52_0 ) && ( muDoubleScalarSign ( B_31_51_0 )
== muDoubleScalarSign ( B_31_292_0 ) ) ) { _rtB -> B_31_297_0 =
Vector_Control_SVPWM_encoderless_rtC ( S ) -> B_31_296_0 ; } else { _rtB ->
B_31_297_0 = B_31_292_0 ; } B_31_300_0 *= _rtP -> P_266 ; if ( ( B_31_61_0 !=
B_31_62_0 ) && ( muDoubleScalarSign ( B_31_61_0 ) == muDoubleScalarSign (
B_31_300_0 ) ) ) { _rtB -> B_31_305_0 = Vector_Control_SVPWM_encoderless_rtC
( S ) -> B_31_304_0 ; } else { _rtB -> B_31_305_0 = B_31_300_0 ; } B_31_103_0
= muDoubleScalarSin ( _rtB -> B_31_20_0 ) ; B_31_312_0 = muDoubleScalarCos (
_rtB -> B_31_20_0 ) ; B_31_320_0 = B_31_312_0 * B_31_6_0 + B_31_103_0 *
B_31_15_0 ; B_31_309_0 = - B_31_103_0 * B_31_6_0 + B_31_312_0 * B_31_15_0 ;
B_31_103_0 = _rtP -> P_269 * _rtDW -> DiscreteTransferFcn_DSTATE ; _rtB ->
B_31_311_0 = _rtP -> P_271 * B_31_320_0 ; B_31_320_0 = muDoubleScalarCos (
_rtB -> B_31_20_0 ) ; B_31_314_0 = muDoubleScalarSin ( _rtB -> B_31_20_0 ) ;
B_31_99_0 = ( B_31_320_0 * B_31_103_0 - B_31_314_0 * _rtP -> P_272 ) * _rtP
-> P_273 ; B_31_320_0 = B_31_314_0 * B_31_103_0 + B_31_320_0 * _rtP -> P_272
; _rtB -> B_31_325_0 = B_31_8_0 - ( _rtP -> P_274 * B_31_6_0 + B_31_99_0 ) ;
_rtB -> B_31_330_0 = B_31_17_0 - ( _rtP -> P_275 * B_31_15_0 + _rtP -> P_276
* B_31_320_0 ) ; _rtB -> B_31_336_0 = ( B_31_209_0 - _rtP -> P_286 * B_31_6_0
) - ( _rtP -> P_279 * _rtDW -> DiscreteTimeIntegrator1_DSTATE_n + _rtP ->
P_280 * _rtB -> B_31_325_0 ) ; _rtB -> B_31_338_0 = ( B_3_3_0 - _rtP -> P_285
* B_31_15_0 ) - ( _rtP -> P_283 * _rtDW -> DiscreteTimeIntegrator2_DSTATE +
_rtP -> P_284 * _rtB -> B_31_330_0 ) ; ssCallAccelRunBlock ( S , 31 , 339 ,
SS_CALL_MDL_OUTPUTS ) ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_31_345_0 [ i
] = _rtP -> P_287 [ i ] ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { real_T HoldSine ;
int32_T i ; BlockIO_Vector_Control_SVPWM_encoderless * _rtB ;
Parameters_Vector_Control_SVPWM_encoderless * _rtP ;
D_Work_Vector_Control_SVPWM_encoderless * _rtDW ; _rtDW = ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ; _rtP = (
( Parameters_Vector_Control_SVPWM_encoderless * ) ssGetDefaultParam ( S ) ) ;
_rtB = ( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO ( S ) )
; for ( i = 0 ; i < 6 ; i ++ ) { _rtDW -> UnitDelay_DSTATE [ i ] = _rtB ->
B_31_270_0 [ i ] ; } _rtDW -> u_DSTATE = _rtB -> B_31_218_0 ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtDW -> NextOutput =
rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed ) * _rtP -> P_57 + _rtP ->
P_56 ; } _rtDW -> _DSTATE = _rtDW -> _tmp ; _rtDW ->
DiscreteTimeIntegrator1_DSTATE += _rtP -> P_64 * _rtB -> B_31_336_0 ; _rtDW
-> u_DSTATE_k = _rtB -> B_31_219_0 ; if ( ssIsSampleHit ( S , 2 , 0 ) ) {
_rtDW -> NextOutput_k = rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_k )
* _rtP -> P_69 + _rtP -> P_68 ; } _rtDW -> u_DSTATE_e = _rtDW -> u_tmp ;
_rtDW -> DiscreteTimeIntegrator_DSTATE += _rtP -> P_76 * _rtB -> B_31_338_0 ;
_rtDW -> DiscreteFilter_DSTATE = _rtDW -> DiscreteFilter_tmp ; for ( i = 0 ;
i < 9 ; i ++ ) { _rtDW -> IntegerDelay_DSTATE [ ( uint32_T ) i ] = _rtDW ->
IntegerDelay_DSTATE [ ( uint32_T ) i + 1U ] ; } _rtDW -> IntegerDelay_DSTATE
[ 9 ] = _rtB -> B_31_31_0 ; { real_T timeStampA = ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampA ; real_T timeStampB = ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampB ; real_T * lastTime = & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampA ; real_T * lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeA ; if ( timeStampA != rtInf ) { if (
timeStampB == rtInf ) { lastTime = & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . TimeStampB ; lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeB ; } else if ( timeStampA >= timeStampB ) {
lastTime = & ( ( D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork (
S ) ) -> Derivative_RWORK . TimeStampB ; lastU = & ( (
D_Work_Vector_Control_SVPWM_encoderless * ) ssGetRootDWork ( S ) ) ->
Derivative_RWORK . LastUAtTimeB ; } } * lastTime = ssGetTaskTime ( S , 0 ) ;
* lastU ++ = ( ( BlockIO_Vector_Control_SVPWM_encoderless * ) _ssGetBlockIO (
S ) ) -> B_31_20_0 ; } _rtDW -> DiscreteFilter1_DSTATE = _rtDW ->
DiscreteFilter1_tmp ; _rtDW -> Integrator_DSTATE += _rtP -> P_102 * _rtB ->
B_31_297_0 ; _rtDW -> DiscreteFilter2_DSTATE = _rtDW -> DiscreteFilter2_tmp ;
_rtDW -> UnitDelay3_DSTATE = _rtB -> B_31_281_0 ; _rtDW ->
Integrator_DSTATE_j += _rtP -> P_112 * _rtB -> B_31_305_0 ; _rtDW ->
UnitDelay2_DSTATE = _rtB -> B_31_280_0 ; _rtDW -> Integrator_DSTATE_n += _rtP
-> P_121 * _rtB -> B_31_289_0 ; _rtDW -> IntegerDelay3_DSTATE = _rtB ->
B_31_262_0 ; for ( i = 0 ; i < 6 ; i ++ ) { if ( _rtDW -> ONDelay_MODE ) {
_rtDW -> UnitDelay_DSTATE_n [ i ] = _rtB -> B_31_110_0 [ i ] ; _rtDW ->
UnitDelay_DSTATE_a [ i ] = _rtB -> B_30_15_0 [ i ] ; } if ( _rtDW ->
OFFDelay_MODE ) { _rtDW -> UnitDelay_DSTATE_g [ i ] = _rtB -> B_31_110_0 [ i
] ; _rtDW -> UnitDelay_DSTATE_p [ i ] = _rtB -> B_24_16_0 [ i ] ; } } if (
_rtDW -> Tail_MODE ) { HoldSine = _rtP -> P_3 * _rtB -> B_0_0_0 ; for ( i = 0
; i < 6 ; i ++ ) { _rtDW -> DiscreteTimeIntegrator_DSTATE_ii [ i ] +=
HoldSine ; if ( _rtB -> B_31_120_0 [ i ] ) { _rtDW ->
DiscreteTimeIntegrator_PrevResetState [ i ] = 1 ; } else { _rtDW ->
DiscreteTimeIntegrator_PrevResetState [ i ] = 0 ; } _rtDW ->
UnitDelay_DSTATE_l [ i ] = _rtB -> B_0_13_0 [ i ] ; } } _rtDW ->
DiscreteTimeIntegrator_DSTATE_i += _rtP -> P_156 * _rtB -> B_31_234_0 ; _rtDW
-> DiscreteTimeIntegrator1_DSTATE_e += _rtP -> P_158 * _rtB -> B_31_233_0 ;
_rtDW -> DiscreteTimeIntegrator_DSTATE_d += _rtP -> P_161 * _rtB ->
B_31_246_0 ; _rtDW -> DiscreteTimeIntegrator1_DSTATE_f += _rtP -> P_163 *
_rtB -> B_31_245_0 ; _rtDW -> DiscreteTimeIntegrator1_DSTATE_k += _rtP ->
P_176 * _rtB -> B_31_255_0 ; _rtDW -> DiscreteTimeIntegrator_DSTATE_i2 +=
_rtP -> P_178 * _rtB -> B_31_254_0 ; HoldSine = _rtDW -> lastSin ; _rtDW ->
lastSin = _rtDW -> lastSin * _rtP -> P_186 + _rtDW -> lastCos * _rtP -> P_185
; _rtDW -> lastCos = _rtDW -> lastCos * _rtP -> P_186 - HoldSine * _rtP ->
P_185 ; HoldSine = _rtDW -> lastSin_i ; _rtDW -> lastSin_i = _rtDW ->
lastSin_i * _rtP -> P_193 + _rtDW -> lastCos_l * _rtP -> P_192 ; _rtDW ->
lastCos_l = _rtDW -> lastCos_l * _rtP -> P_193 - HoldSine * _rtP -> P_192 ;
HoldSine = _rtDW -> lastSin_b ; _rtDW -> lastSin_b = _rtDW -> lastSin_b *
_rtP -> P_200 + _rtDW -> lastCos_h * _rtP -> P_199 ; _rtDW -> lastCos_h =
_rtDW -> lastCos_h * _rtP -> P_200 - HoldSine * _rtP -> P_199 ;
ssCallAccelRunBlock ( S , 31 , 178 , SS_CALL_MDL_UPDATE ) ; _rtDW ->
_DSTATE_o [ 0U ] = _rtDW -> _DSTATE_o [ 1U ] ; _rtDW -> _DSTATE_o [ 1 ] =
_rtB -> B_31_220_0 ; _rtDW -> u_DSTATE_g = _rtB -> B_31_221_0 ; if (
ssIsSampleHit ( S , 2 , 0 ) ) { _rtDW -> NextOutput_l =
rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_o ) * _rtP -> P_216 + _rtP
-> P_215 ; } _rtDW -> u_DSTATE_b = _rtDW -> u_tmp_k ; _rtDW -> u_DSTATE_c =
_rtB -> B_31_222_0 ; if ( ssIsSampleHit ( S , 2 , 0 ) ) { _rtDW ->
NextOutput_g = rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_i ) * _rtP ->
P_224 + _rtP -> P_223 ; } _rtDW -> u_DSTATE_m = _rtDW -> u_tmp_a ; _rtDW ->
u_DSTATE_ba [ 0U ] = _rtDW -> u_DSTATE_ba [ 1U ] ; _rtDW -> u_DSTATE_ba [ 1 ]
= _rtB -> B_31_217_0 ; _rtDW -> IntegerDelay1_DSTATE [ 0U ] = _rtDW ->
IntegerDelay1_DSTATE [ 1U ] ; _rtDW -> IntegerDelay1_DSTATE [ 1 ] = _rtB ->
B_31_201_0 [ 0 ] ; _rtDW -> DiscreteTransferFcn_DSTATE = ( _rtB -> B_31_311_0
- _rtP -> P_270 [ 1 ] * _rtDW -> DiscreteTransferFcn_DSTATE ) / _rtP -> P_270
[ 0 ] ; _rtDW -> DiscreteTimeIntegrator1_DSTATE_n += _rtP -> P_277 * _rtB ->
B_31_325_0 ; _rtDW -> DiscreteTimeIntegrator2_DSTATE += _rtP -> P_281 * _rtB
-> B_31_330_0 ; UNUSED_PARAMETER ( tid ) ; } static void mdlInitializeSizes (
SimStruct * S ) { ssSetChecksumVal ( S , 0 , 1742957400U ) ; ssSetChecksumVal
( S , 1 , 1118373925U ) ; ssSetChecksumVal ( S , 2 , 3511888493U ) ;
ssSetChecksumVal ( S , 3 , 758102178U ) ; { mxArray * slVerStructMat = NULL ;
mxArray * slStrMat = mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ;
int status = mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" )
; if ( status == 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 ,
"Version" ) ; if ( slVerMat == NULL ) { status = 1 ; } else { status =
mxGetString ( slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "7.9" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
D_Work_Vector_Control_SVPWM_encoderless ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( BlockIO_Vector_Control_SVPWM_encoderless ) ) { ssSetErrorStatus
( S , "Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
Parameters_Vector_Control_SVPWM_encoderless ) ) { static char msg [ 256 ] ;
sprintf ( msg , "Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & Vector_Control_SVPWM_encoderless_rtDefaultParameters ) ;
_ssSetConstBlockIO ( S , &
Vector_Control_SVPWM_encoderless_rtInvariantSignals ) ; rt_InitInfAndNaN (
sizeof ( real_T ) ) ; ( ( Parameters_Vector_Control_SVPWM_encoderless * )
ssGetDefaultParam ( S ) ) -> P_260 = rtInf ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct * childS ;
SysOutputFcn * callSysFcns ; childS = ssGetSFunction ( S , 0 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 1 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 2 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
