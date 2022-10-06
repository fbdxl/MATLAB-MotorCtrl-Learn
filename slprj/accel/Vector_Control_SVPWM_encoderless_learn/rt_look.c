#include "__cf_Vector_Control_SVPWM_encoderless_learn.h"
#include "rt_look.h"
int_T rt_GetLookupIndex ( const real_T * x , int_T xlen , real_T u ) { int_T
idx = 0 ; int_T bottom = 0 ; int_T top = xlen - 1 ; int_T retValue = 0 ;
boolean_T returnStatus = 0U ;
#ifdef DOINTERPSEARCH
real_T offset = 0 ;
#endif
if ( u <= x [ bottom ] ) { retValue = bottom ; returnStatus = 1U ; } else if
( u >= x [ top ] ) { retValue = top - 1 ; returnStatus = 1U ; } else { } if (
returnStatus == 0U ) { if ( u < 0 ) { for ( ; ; ) {
#ifdef DOINTERPSEARCH
offset = ( u - x [ bottom ] ) / ( x [ top ] - x [ bottom ] ) ; idx = bottom +
( int_T ) ( ( top - bottom ) * ( offset - DBL_EPSILON ) ) ;
#else
idx = ( bottom + top ) / 2 ;
#endif
if ( u < x [ idx ] ) { top = idx - 1 ; } else if ( u >= x [ idx + 1 ] ) {
bottom = idx + 1 ; } else { retValue = idx ; break ; } } } else { for ( ; ; )
{
#ifdef DOINTERPSEARCH
offset = ( u - x [ bottom ] ) / ( x [ top ] - x [ bottom ] ) ; idx = bottom +
( int_T ) ( ( top - bottom ) * ( offset - DBL_EPSILON ) ) ;
#else
idx = ( bottom + top ) / 2 ;
#endif
if ( u <= x [ idx ] ) { top = idx - 1 ; } else if ( u > x [ idx + 1 ] ) {
bottom = idx + 1 ; } else { retValue = idx ; break ; } } } } return retValue
; }
