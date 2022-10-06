#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_pko7jYKpYmCbXoPGn8l9eE_cclib_INIT_FILE(unsigned int decCovId);

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_27 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_27() \
  (++__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_27 + __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(29U), (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(30U), (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_29(expr) \
  ((expr) ? \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(29U), (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 = 1), 1) : 1) : \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(30U), (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(34U), (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(35U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_34(expr) \
  ((expr) ? \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(34U), (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 += 1), 1) : 1) : \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(35U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_27(expr) \
  ((expr) ? \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), 1) : 1) : \
   ((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), 0) : 0))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() \
  unsigned int __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_curr_combination_idx_27 = 0; 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_abs_tol, __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled || __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables = __MW_INSTRUM_pko7jYKpYmCbXoPGn8l9eE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (((!__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled || __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables = __MW_INSTRUM_pko7jYKpYmCbXoPGn8l9eE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (__MW_INSTRUM_RECORD_HIT(4U))
#define __MW_INSTRUM_NODE_5() \
  (((!__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled || __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables = __MW_INSTRUM_pko7jYKpYmCbXoPGn8l9eE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(5U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(6U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(7U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_6(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(6U), 1) : (__MW_INSTRUM_RECORD_HIT(7U), 0))
#endif
#define __MW_INSTRUM_NODE_8(lhs, rhs) (((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(8U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(9U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(10U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_11() \
  (__MW_INSTRUM_RECORD_HIT(11U))
#define __MW_INSTRUM_NODE_12() \
  (((!__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled || __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables = __MW_INSTRUM_pko7jYKpYmCbXoPGn8l9eE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(12U))
#define __MW_INSTRUM_NODE_13() \
  (__MW_INSTRUM_RECORD_HIT(13U))
#define __MW_INSTRUM_NODE_14() \
  (__MW_INSTRUM_RECORD_HIT(14U))
#define __MW_INSTRUM_NODE_15() \
  (__MW_INSTRUM_RECORD_HIT(15U))
#define __MW_INSTRUM_NODE_16() \
  (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_17() \
  (__MW_INSTRUM_RECORD_HIT(17U))
#define __MW_INSTRUM_NODE_18() \
  (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_19() \
  (__MW_INSTRUM_RECORD_HIT(19U))
#define __MW_INSTRUM_NODE_20() \
  (__MW_INSTRUM_RECORD_HIT(20U))
#define __MW_INSTRUM_NODE_21() \
  (((!__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled || __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_ptruth_tables = __MW_INSTRUM_pko7jYKpYmCbXoPGn8l9eE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(21U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(22U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(23U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_22(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(22U), 1) : (__MW_INSTRUM_RECORD_HIT(23U), 0))
#endif
#define __MW_INSTRUM_NODE_24(lhs, rhs) (((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(24U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(25U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(26U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_31(lhs, rhs) (((__mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_enabled && __mw_instrum_pko7jYKpYmCbXoPGn8l9eE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(31U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(32U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(33U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_28() \
  (__MW_INSTRUM_RECORD_HIT(28U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(36U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(37U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_36(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(36U), 1) : (__MW_INSTRUM_RECORD_HIT(37U), 0))
#endif
#define __MW_INSTRUM_NODE_37() \
  (__MW_INSTRUM_RECORD_HIT(37U))
#define __MW_INSTRUM_NODE_38() \
  (__MW_INSTRUM_RECORD_HIT(38U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29CZ_pko7jYKpYmCbXoPGn8l9eE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29CZ_pko7jYKpYmCbXoPGn8l9eE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29CZ_pko7jYKpYmCbXoPGn8l9eE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_34CZ_pko7jYKpYmCbXoPGn8l9eE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) (__MW_INSTRUM_RECORD_HIT_34CZ_pko7jYKpYmCbXoPGn8l9eE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_34(exp) (__MW_INSTRUM_RECORD_HIT_34CZ_pko7jYKpYmCbXoPGn8l9eE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DA_29_34Z_pko7jYKpYmCbXoPGn8l9eE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_pko7jYKpYmCbXoPGn8l9eE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_pko7jYKpYmCbXoPGn8l9eE(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_2XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_2() __MW_INSTRUM_RECORD_HIT_2XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3EZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3EZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_5EZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_5() __MW_INSTRUM_RECORD_HIT_5EZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_6DZ_pko7jYKpYmCbXoPGn8l9eE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) (__MW_INSTRUM_RECORD_HIT_6DZ_pko7jYKpYmCbXoPGn8l9eE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6DZ_pko7jYKpYmCbXoPGn8l9eE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8IZ_pko7jYKpYmCbXoPGn8l9eE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_8(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_8IZ_pko7jYKpYmCbXoPGn8l9eE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_11() __MW_INSTRUM_RECORD_HIT_11XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12EZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_12() __MW_INSTRUM_RECORD_HIT_12EZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_13DZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_13() __MW_INSTRUM_RECORD_HIT_13DZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_14XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_14() __MW_INSTRUM_RECORD_HIT_14XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_15DZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_15() __MW_INSTRUM_RECORD_HIT_15DZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_17DZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_17() __MW_INSTRUM_RECORD_HIT_17DZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_18XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_18() __MW_INSTRUM_RECORD_HIT_18XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19DZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_19() __MW_INSTRUM_RECORD_HIT_19DZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_20XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_20() __MW_INSTRUM_RECORD_HIT_20XZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_21EZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_21() __MW_INSTRUM_RECORD_HIT_21EZ_pko7jYKpYmCbXoPGn8l9eE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_22CZ_pko7jYKpYmCbXoPGn8l9eE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) (__MW_INSTRUM_RECORD_HIT_22CZ_pko7jYKpYmCbXoPGn8l9eE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22CZ_pko7jYKpYmCbXoPGn8l9eE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24IZ_pko7jYKpYmCbXoPGn8l9eE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_24(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_24IZ_pko7jYKpYmCbXoPGn8l9eE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31IZ_pko7jYKpYmCbXoPGn8l9eE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_31(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_31IZ_pko7jYKpYmCbXoPGn8l9eE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_28() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_36DZ_pko7jYKpYmCbXoPGn8l9eE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) (__MW_INSTRUM_RECORD_HIT_36DZ_pko7jYKpYmCbXoPGn8l9eE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_36(exp) (__MW_INSTRUM_RECORD_HIT_36DZ_pko7jYKpYmCbXoPGn8l9eE(exp))
#endif

#define __MW_INSTRUM_NODE_37() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_38XZ_pko7jYKpYmCbXoPGn8l9eE(void) { }
#define __MW_INSTRUM_NODE_38() __MW_INSTRUM_RECORD_HIT_38XZ_pko7jYKpYmCbXoPGn8l9eE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "D:\\matlab 2019b\\toolbox\\simulink\\simdemos\\simfeatures\\src\\my_func.c"
#line 2 "d:\\matlab 2019b\\toolbox\\simulink\\simdemos\\simfeatures\\include\\my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
#line 12
typedef 
#line 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
#line 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
#line 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
#line 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern void incrementElement(int * u, unsigned size, unsigned increment_idx); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
#line 12 "D:\\matlab 2019b\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
#line 4 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\limits.h"
#ifndef MB_LEN_MAX
#define MB_LEN_MAX 2
#endif /* MB_LEN_MAX */
#line 2 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\float.h"
#ifndef __float_h__
#define __float_h__
#line 24
extern int __fltrounds(void); 
#line 163
double _chgsign(double); 
double _copysign(double, double); 
double _logb(double); 
double _nextafter(double, double); 
double _scalb(double, long); 
extern int *__fpecode(void); 
int _finite(double); 
int _fpclass(double); 
int _isnan(double); 
unsigned _clearfp(void); 
unsigned _controlfp(unsigned, unsigned); 
unsigned _statusfp(void); 
unsigned _control87(unsigned, unsigned); 
void _fpreset(void); 
#line 185
typedef 
#line 178
struct { 
unsigned mantissa1; 
unsigned mantissa0:31; 
unsigned one:1; 
unsigned exponent:15; 
unsigned negative:1; 
unsigned empty:16; 
} _longDouble; 
#line 191
typedef 
#line 186
struct { 
unsigned mantissa1; 
unsigned mantissa0:20; 
unsigned exponent:11; 
unsigned sign:1; 
} _Double; 
#line 197
typedef 
#line 193
struct { 
unsigned mantissa:23; 
unsigned exponent:8; 
unsigned sign:1; 
} _Float; 
#line 211
#endif /* __float_h__ */
#line 79 "D:\\matlab 2019b\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
#line 87
typedef unsigned long long ulonglong_T; 
#line 210
typedef char int8_T; 
#line 225
typedef unsigned char uint8_T; 
#line 241
typedef short int16_T; 
#line 257
typedef unsigned short uint16_T; 
#line 273
typedef int int32_T; 
#line 289
typedef unsigned uint32_T; 
#line 350
typedef float real32_T; 
#line 364
typedef double real64_T; 
#line 408
typedef long long int64_T; 
#line 448
typedef unsigned long long uint64_T; 
#line 504
typedef real64_T real_T; 
#line 513
typedef real_T time_T; 
#line 525
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
#line 561
typedef 
#line 559
struct { 
real32_T re, im; 
} creal32_T; 
#line 570
typedef 
#line 568
struct { 
real64_T re, im; 
} creal64_T; 
#line 579
typedef 
#line 577
struct { 
real_T re, im; 
} creal_T; 
#line 590
typedef 
#line 588
struct { 
int8_T re, im; 
} cint8_T; 
#line 599
typedef 
#line 597
struct { 
uint8_T re, im; 
} cuint8_T; 
#line 608
typedef 
#line 606
struct { 
int16_T re, im; 
} cint16_T; 
#line 617
typedef 
#line 615
struct { 
uint16_T re, im; 
} cuint16_T; 
#line 626
typedef 
#line 624
struct { 
int32_T re, im; 
} cint32_T; 
#line 635
typedef 
#line 633
struct { 
uint32_T re, im; 
} cuint32_T; 
#line 644
typedef 
#line 642
struct { 
int64_T re, im; 
} cint64_T; 
#line 653
typedef 
#line 651
struct { 
uint64_T re, im; 
} cuint64_T; 
#line 762
#ifndef _bool_T
#define _bool_T

typedef boolean_T bool; 

#ifndef false
#define false (0)
#endif /* false */
#ifndef true
#define true (1)
#endif /* true */

#endif /* _bool_T */
#line 1 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stddef.h"
#ifndef __STDDEF_H
#define __STDDEF_H
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#line 4
typedef unsigned long long size_t; 

#endif /* _SIZE_T_DEFINED */
typedef long long ptrdiff_t; 

#ifndef NULL
#define NULL (void *)0
#endif /* NULL */
#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
typedef size_t rsize_t; 
#endif /* _RSIZE_T_DEFINED */
#endif /* __STDDEF_H */
#line 802 "D:\\matlab 2019b\\extern\\include\\tmwtypes.h"
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 



#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX
typedef int SLIndex; 
typedef int SLSize; 
#endif /* SLSIZE_SLINDEX */
#line 844
typedef unsigned short CHAR16_T; 


#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
#line 5 "D:\\matlab 2019b\\toolbox\\simulink\\simdemos\\simfeatures\\src\\my_func.c"
double add(double u1, double u2) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 
{ double __mw_tmp_for_return = u1 + u2; __MW_INSTRUM_NODE_2(); return __mw_tmp_for_return; } 
} 

double timesK(double u, double K) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_3(); 
{ double __mw_tmp_for_return = u * K; __MW_INSTRUM_NODE_4(); return __mw_tmp_for_return; } 
} 

void incrementElement(int *u, unsigned size, unsigned increment_idx) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_5(); 
if (__MW_INSTRUM_NODE_6((__MW_INSTRUM_NODE_8(increment_idx, size), (increment_idx < size)))) { 
(u[increment_idx])++; 
}  __MW_INSTRUM_NODE_11(); 
} 

TrafficLightColor getNextTrafficLight(TrafficLightColor current) 
{ __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_12(); 
switch (current) { 
case RED:  __MW_INSTRUM_NODE_13(); __MW_INSTRUM_NODE_14(); 
return GREEN; 
case YELLOW:  __MW_INSTRUM_NODE_15(); __MW_INSTRUM_NODE_16(); 
return RED; 
case GREEN:  __MW_INSTRUM_NODE_17(); __MW_INSTRUM_NODE_18(); 
return YELLOW; 
default:  __MW_INSTRUM_NODE_19(); __MW_INSTRUM_NODE_20(); 
return UNKNOWN; 
}  
} 

void counterbusFcn(const COUNTERBUS *u1, int32_T u2, COUNTERBUS *y1, int32_T *y2) 
{ int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_21(); { 
int32_T limit; 
boolean_T inputGElower; 
limit = (u1->inputsignal).input + u2; 
inputGElower = __MW_INSTRUM_NODE_22(((__mw_tmp_for_expr_1 = (u1->limits).lower_saturation_limit), (__MW_INSTRUM_NODE_24(limit, __mw_tmp_for_expr_1), (limit >= __mw_tmp_for_expr_1)))); 
if (__MW_INSTRUM_NODE_27(__MW_INSTRUM_NODE_29(((__mw_tmp_for_expr_2 = (u1->limits).upper_saturation_limit), (__MW_INSTRUM_NODE_31(__mw_tmp_for_expr_2, limit), (__mw_tmp_for_expr_2 >= limit)))) && (__MW_INSTRUM_NODE_34(inputGElower)))) { 
*y2 = limit; 
} else { 
if (__MW_INSTRUM_NODE_36(inputGElower)) { 
limit = (u1->limits).upper_saturation_limit; 
} else { 
limit = (u1->limits).lower_saturation_limit; 
}  
*y2 = limit; 
}  
(y1->inputsignal).input = *y2; 
y1->limits = u1->limits; } __MW_INSTRUM_NODE_38(); 
} 
