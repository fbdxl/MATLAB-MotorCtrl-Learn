#line 1 "C:\\Users\\W002220B\\AppData\\Local\\Temp\\cxxfe_115546269380882.in"
#line 15 "D:\\matlab 2019b\\extern\\include\\mex.h"
#ifndef mex_h
#define mex_h
#line 1 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stdio.h"
#ifndef __stdio_h__
#define __stdio_h__





#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#line 9
typedef unsigned long long size_t; 

#endif /* _SIZE_T_DEFINED */

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
#line 14
typedef unsigned short wchar_t; 

#endif /* _WCHAR_T_DEFINED */

#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
#line 19
typedef wchar_t wint_t; 
typedef wchar_t wctype_t; 

#endif /* _WCTYPE_T_DEFINED */
#line 1 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stdarg.h"
#ifndef __stdarg_h__
#define __stdarg_h__

struct __va_list { 
unsigned long long gp_offset; 
unsigned long long fp_offset; 
void *overflow_arg_area; 
void *reg_save_area; 
}; 
typedef struct __va_list *va_list; 
#line 20
typedef 
#line 11
struct tagRegisterSaveArea { 
long long rcx; 
long long rdx; 
long long r8; 
long long r9; 
long long xmm0; 
long long xmm1; 
long long xmm2; 
long long xmm3; 
} __REGISTER_SAVE_AREA; 
void *__builtin_va_arg(va_list, int); 
void *__builtin_va_start(va_list *, void *); 


extern void *alloca(unsigned long long); 


#endif /* __stdarg_h__ */
#line 36 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stdio.h"
struct __FILE; 
typedef struct __FILE FILE; 
extern FILE *_Files[]; 
#line 83
#ifndef NULL
#define NULL ((void *)0)
#endif /* NULL */



#ifndef _FPOS_T_DEFINED
#define _FPOS_T_DEFINED
#line 90
typedef long fpos_t; 

#endif /* _FPOS_T_DEFINED */
#line 113
void clearerr(FILE *); 
int fclose(FILE *); 

int feof(FILE *); 
int ferror(FILE *); 
int fflush(FILE *); 
int fgetc(FILE *); 
wchar_t fgetwc(FILE *); 
wchar_t getwc(FILE *); 

int _fgetchar(void); 
int fgetpos(FILE *, fpos_t *); 
char *fgets(char *, int, FILE *); 

FILE *fopen(const char *, const char *); 
int fprintf(FILE *, const char *, ...); 
int fputc(int, FILE *); 
int _fputchar(int); 
int fputs(const char *, FILE *); 
size_t fread(void *, size_t, size_t, FILE *); 
FILE *freopen(const char *, const char *, FILE *); 
int fscanf(FILE *, const char *, ...); 
int fsetpos(FILE *, const fpos_t *); 
int fseek(FILE *, long long, int); 
long long ftell(FILE *); 
size_t fwrite(const void *, size_t, size_t, FILE *); 
int getc(FILE *); 
int getchar(void); 
char *gets(char *); 
int getw(FILE *); 
int printf(const char *, ...); 
int dprintf(const char *, ...); 
int putc(int, FILE *); 
int putchar(int); 
int puts(const char *); 
int remove(const char *); 
int rename(const char *, const char *); 
void rewind(FILE *); 
int scanf(const char *, ...); 
void setbuf(FILE *, char *); 
int setvbuf(FILE *, char *, int, size_t); 
int sprintf(char *, const char *, ...); 
int snprintf(char *, size_t, const char *, ...); 
int sscanf(const char *, const char *, ...); 
FILE *tmpfile(void); 
char *tmpnam(char *); 
char *tempnam(char *, char *); 
int ungetc(int, FILE *); 
int vfprintf(FILE *, const char *, va_list); 
int vprintf(const char *, va_list); 
int vsnprintf(char *, size_t, const char *, va_list); 
int vsprintf(char *, const char *, va_list); 
void perror(char *); 
void _wperror(const wchar_t *); 
#line 1 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\safelib.h"
#ifndef __safelib_h__
#define __safelib_h__
int ConstraintFailed(const char * fn, const char * reason, void * reserved); 

#ifndef _ERRNO_T_DEFINED
#define _ERRNO_T_DEFINED
#line 6
typedef int errno_t; 

#endif /* _ERRNO_T_DEFINED */

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
typedef unsigned rsize_t; 
#endif /* _RSIZE_T_DEFINED */
#endif /* __safelib_h__ */
#line 169 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stdio.h"
errno_t tmpfile_s(FILE ** streamptr); 
errno_t tmpnam_s(char * s, rsize_t maxsize); 
errno_t fopen_s(FILE ** streamptr, const char * filename, const char * mode); 
errno_t freopen_s(FILE ** newS, const char * fname, const char * m, FILE * s); 
int fprintf_s(FILE * stream, const char * format, ...); 
int fscanf_s(FILE * stream, const char * format, ...); 
int printf_s(const char * format, ...); 
int scanf_s(const char * format, ...); 
int snprintf_s(char * s, rsize_t n, const char * format, ...); 
int sprintf_s(char * s, rsize_t n, const char * format, ...); 
int sscanf_s(const char * s, const char * format, ...); 
int vfprintf_s(FILE * stream, const char * format, va_list arg); 
int vfscanf_s(FILE * stream, const char * format, va_list arg); 
int vprintf_s(const char * format, va_list arg); 
int vscanf_s(const char * format, va_list arg); 
int vsnprintf_s(char * s, rsize_t n, const char * format, va_list arg); 
int vsprintf_s(char * s, rsize_t n, const char * format, va_list arg); 
int vsscanf_s(const char * s, const char * format, va_list arg); 
char *gets_s(char * s, rsize_t n); 


#ifndef MAX_PATH
#define MAX_PATH 260
#endif /* MAX_PATH */

#ifndef MAX_FNAME
#define MAX_FNAME 256
#endif /* MAX_FNAME */
int fcloseall(void); 
int _filbuf(FILE *); 
int flsbuf(int, FILE *); 
FILE *_fsopen(const char *, const char *, int); 
int _fcloseall(void); 
FILE *fdopen(int, const char *); 
int fileno(FILE *); 


int _flushall(void); 
int _pclose(FILE *); 

FILE *popen(const char *, const char *); 
int _putw(int, FILE *); 
int _vsnprintf(char *, size_t, const char *, va_list); 
int _vsnwprintf(wchar_t *, size_t, const wchar_t *, va_list); 
int _unlink(const char *); 
int _snprintf(char *, size_t, const char *, ...); 
char *_tempnam(char *, char *); 
void *_get_osfhandle(int); 
int _rmtmp(void); 
#line 232
#endif /* __stdio_h__ */
#line 41 "D:\\matlab 2019b\\extern\\include\\mex.h"
typedef struct impl_info_tag *MEX_impl_info; 
#line 19 "D:\\matlab 2019b\\extern\\include\\matrix.h"
#ifndef matrix_h
#define matrix_h
#line 4 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stdlib.h"
#ifndef __stdlib_h__
#define __stdlib_h__
#line 1 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stddef.h"
#ifndef __STDDEF_H
#define __STDDEF_H




typedef long long ptrdiff_t; 
#line 16
#endif /* __STDDEF_H */
#line 17 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\stdlib.h"
typedef 
#line 14
struct { 
int quot; 
int rem; 
} div_t; 




typedef 
#line 19
struct { 
long quot; 
long rem; 
} ldiv_t; 



typedef 
#line 23
struct { 
long long quot; 
long long rem; 
} lldiv_t; 
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))

#endif /* max */
#line 47
void abort(void); 
int abs(int); 
long long llabs(long long); 
int atexit(void (* _func)(void)); 
double atof(const char * _nptr); 
double wtof(const wchar_t * input); 
int atoi(const char * _nptr); 

char *itoa(int, char *, int); 
char *_i64toa(long long, char *, int); 
char *_ui64toa(unsigned long long, char *, int); 
long long _atoi64(const char *); 

char *ltoa(long, char *, int); 
char *_ultoa(unsigned long, char *, int); 


long atol(char * _nptr); 

typedef void (*constraint_handler_t)(const char * msg, void * ptr, errno_t error); 
constraint_handler_t set_constraint_handler_s(constraint_handler_t handler); 
constraint_handler_t get_constraint_handler_s(void); 
void abort_handler_s(const char * msg, void * ptr, errno_t error); 
void ignore_handler_s(const char * msg, void * ptr, errno_t error); 
errno_t getenv_s(size_t * len, char * value, rsize_t maxsize, const char * name); 
void *bsearch_s(const void * key, const void * base, rsize_t nmemb, rsize_t size, int (* compar)(const void * k, const void * y, void * context), void * context); 
errno_t qsort_s(void * base, rsize_t nmemb, rsize_t size, int (* compar)(const void * x, const void * y, void * context), void * context); 
errno_t wctomb_s(int * status, char * s, rsize_t smax, wchar_t wc); 
errno_t mbstowcs_s(size_t * retval, wchar_t * dst, rsize_t dstmax, const char * src, rsize_t len); 
errno_t wcstombs_s(size_t * retval, char * dst, rsize_t dstmax, const wchar_t * src, rsize_t len); 

void *bsearch(const void * _key, const void * _base, size_t _nmemb, size_t _size, int (* _compar)(const void *, const void *)); 

void *calloc(size_t _nmemb, size_t _size); 
#line 93
div_t div(int _numer, int _denom); 

void exit(int _status); 
void _exit(int status); 
void free(void *); 
char *_fullpath(char * absPath, const char * relPath, size_t maxLength); 
void _makepath(char * path, const char * drive, const char * dir, const char * fname, const char * ext); 
void _splitpath(const char *, char *, char *, char *, char *); 
char *getenv(const char * _string); 
long labs(long); 
ldiv_t ldiv(long _numer, long _denom); 
void *malloc(size_t _size); 
unsigned long _lrotl(unsigned long, int); 
unsigned long _lrotr(unsigned, int); 
void qsort(void * _base, size_t _nmemb, size_t _size, int (* _compar)(const void *, const void *)); 
int rand(void); 
void *realloc(void * _r, size_t _size); 
void srand(unsigned _seed); 
double strtod(const char * _n, char ** _endvoid); 
long double strtold(const char *, char **); 
long long strtoll(const char *, char **, int); 
unsigned long long strtoull(const char *, char **, int); 
long strtol(const char * _n, char ** _endvoid, int _base); 
unsigned long strtoul(const char * _n, char ** _end, int _base); 

int system(const char * _string); 
int _System(const char * cmd, int nCmdShow); 
int putenv(const char * _string); 
int setenv(char * _string, char * _value, int _overwrite); 
char *_gcvt(double, int, char *); 
char *_fcvt(double, int, int *, int *); 
char *ecvt(double, int, int *, int *); 
size_t mbstowcs(wchar_t *, const char *, size_t); 
size_t wcstombs(char * mbstr, const wchar_t * wcstr, size_t count); 
int mblen(char *, size_t); 
int mbstrlen(char * s); 
extern int _sleep(unsigned long); 


void _searchenv(char *, char *, char *); 
wchar_t *_itow(int, wchar_t *, int); 
wchar_t *_ltow(long, wchar_t *, int); 
unsigned short *_ultow(unsigned long, unsigned short *, int); 
double wcstod(const wchar_t *, wchar_t **); 
long wcstol(const wchar_t *, wchar_t **, int); 
int wctomb(char * s, wchar_t wchar); 
unsigned long wcstoul(const wchar_t *, wchar_t **, int); 
wchar_t *_wgetenv(const wchar_t *); 
int _wsystem(const wchar_t *); 
int _wtoi(const wchar_t *); 
long _wtol(const wchar_t *); 

extern char *_pgmptr; 

#endif /* __stdlib_h__ */
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
#line 802
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
#line 143 "D:\\matlab 2019b\\extern\\include\\matrix.h"
typedef struct mxArray_tag mxArray; 




typedef void (*mxFunctionPtr)(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]); 
#line 158
typedef bool mxLogical; 




typedef CHAR16_T mxChar; 
#line 193
typedef 
#line 168
enum { 
mxUNKNOWN_CLASS, 
mxCELL_CLASS, 
mxSTRUCT_CLASS, 
mxLOGICAL_CLASS, 
mxCHAR_CLASS, 
mxVOID_CLASS, 
mxDOUBLE_CLASS, 
mxSINGLE_CLASS, 
mxINT8_CLASS, 
mxUINT8_CLASS, 
mxINT16_CLASS, 
mxUINT16_CLASS, 
mxINT32_CLASS, 
mxUINT32_CLASS, 
mxINT64_CLASS, 
mxUINT64_CLASS, 
mxFUNCTION_CLASS, 
mxOPAQUE_CLASS, 
mxOBJECT_CLASS, 

mxINDEX_CLASS = 15



} mxClassID; 




typedef enum { mxREAL, mxCOMPLEX} mxComplexity; 




typedef double mxDouble; 
typedef float mxSingle; 
typedef int8_T mxInt8; 
typedef uint8_T mxUint8; 
typedef int16_T mxInt16; 
typedef uint16_T mxUint16; 
typedef int32_T mxInt32; 
typedef uint32_T mxUint32; 
typedef int64_T mxInt64; 
typedef uint64_T mxUint64; 
#line 218
typedef struct { mxDouble real, imag; } mxComplexDouble; 
typedef struct { mxSingle real, imag; } mxComplexSingle; 
typedef struct { mxInt8 real, imag; } mxComplexInt8; 
typedef struct { mxUint8 real, imag; } mxComplexUint8; 
typedef struct { mxInt16 real, imag; } mxComplexInt16; 
typedef struct { mxUint16 real, imag; } mxComplexUint16; 
typedef struct { mxInt32 real, imag; } mxComplexInt32; 
typedef struct { mxUint32 real, imag; } mxComplexUint32; 
typedef struct { mxInt64 real, imag; } mxComplexInt64; 
typedef struct { mxUint64 real, imag; } mxComplexUint64; 
#line 499
extern void *mxMalloc_800(size_t n); 
#line 505
extern void *mxCalloc_800(size_t n, size_t size); 
#line 512
extern void mxFree_800(void * ptr); 




extern void *mxRealloc_800(void * ptr, size_t size); 




extern mwSize mxGetNumberOfDimensions_800(const mxArray * pa); 




extern const mwSize *mxGetDimensions_800(const mxArray * pa); 




extern size_t mxGetM_800(const mxArray * pa); 




extern mwIndex *mxGetIr_800(const mxArray * pa); 




extern mwIndex *mxGetJc_800(const mxArray * pa); 




extern mwSize mxGetNzmax_800(const mxArray * pa); 




extern void mxSetNzmax_800(mxArray * pa, mwSize nzmax); 




extern const char *mxGetFieldNameByNumber_800(const mxArray * pa, int n); 
#line 565
extern mxArray *mxGetFieldByNumber_800(const mxArray * pa, mwIndex i, int fieldnum); 




extern mxArray *mxGetCell_800(const mxArray * pa, mwIndex i); 




extern mxClassID mxGetClassID_800(const mxArray * pa); 




extern void *mxGetData_800(const mxArray * pa); 
#line 586
extern void mxSetData_800(mxArray * pa, void * newdata); 
#line 594
extern bool mxIsNumeric_800(const mxArray * pa); 




extern bool mxIsCell_800(const mxArray * pa); 




extern bool mxIsLogical_800(const mxArray * pa); 




extern bool mxIsScalar_800(const mxArray * pa); 




extern bool mxIsChar_800(const mxArray * pa); 




extern bool mxIsStruct_800(const mxArray * pa); 




extern bool mxIsOpaque_800(const mxArray * pa); 




extern bool mxIsFunctionHandle_800(const mxArray * pa); 
#line 636
extern bool mxIsObject_800(const mxArray * pa); 
#line 657
extern bool mxIsComplex_800(const mxArray * pa); 




extern bool mxIsSparse_800(const mxArray * pa); 
#line 668
extern bool mxIsDouble_800(const mxArray * pa); 
#line 674
extern bool mxIsSingle_800(const mxArray * pa); 
#line 680
extern bool mxIsInt8_800(const mxArray * pa); 
#line 686
extern bool mxIsUint8_800(const mxArray * pa); 
#line 692
extern bool mxIsInt16_800(const mxArray * pa); 
#line 698
extern bool mxIsUint16_800(const mxArray * pa); 
#line 704
extern bool mxIsInt32_800(const mxArray * pa); 
#line 710
extern bool mxIsUint32_800(const mxArray * pa); 
#line 716
extern bool mxIsInt64_800(const mxArray * pa); 
#line 722
extern bool mxIsUint64_800(const mxArray * pa); 




extern size_t mxGetNumberOfElements_800(const mxArray * pa); 
#line 749
extern mxChar *mxGetChars_800(const mxArray * pa); 
#line 757
extern int mxGetUserBits_800(const mxArray * pa); 
#line 765
extern void mxSetUserBits_800(mxArray * pa, int value); 
#line 771
extern double mxGetScalar_800(const mxArray * pa); 
#line 784
extern bool mxIsFromGlobalWS_800(const mxArray * pa); 




extern void mxSetFromGlobalWS_800(mxArray * pa, bool global); 




extern void mxSetM_800(mxArray * pa, mwSize m); 




extern size_t mxGetN_800(const mxArray * pa); 




extern bool mxIsEmpty_800(const mxArray * pa); 




extern int mxGetFieldNumber_800(const mxArray * pa, const char * name); 




extern void mxSetIr_800(mxArray * pa, mwIndex * newir); 




extern void mxSetJc_800(mxArray * pa, mwIndex * newjc); 

extern void *mxGetData_800(const mxArray * pa); 
extern void mxSetData_800(mxArray * pa, void * newdata); 
extern double *mxGetPr_800(const mxArray * pa); 
extern void mxSetPr_800(mxArray * pa, double * newdata); 
extern size_t mxGetElementSize_800(const mxArray * pa); 
#line 831
extern mwIndex mxCalcSingleSubscript_800(const mxArray * pa, mwSize nsubs, const mwIndex * subs); 
#line 839
extern int mxGetNumberOfFields_800(const mxArray * pa); 
#line 845
extern void mxSetCell_800(mxArray * pa, mwIndex i, mxArray * value); 
#line 851
extern void mxSetFieldByNumber_800(mxArray * pa, mwIndex i, int fieldnum, mxArray * value); 
#line 859
extern mxArray *mxGetField_800(const mxArray * pa, mwIndex i, const char * fieldname); 
#line 866
extern void mxSetField_800(mxArray * pa, mwIndex i, const char * fieldname, mxArray * value); 
#line 876
extern mxArray *mxGetProperty_800(const mxArray * pa, const mwIndex i, const char * propname); 
#line 884
extern void mxSetProperty_800(mxArray * pa, mwIndex i, const char * propname, const mxArray * value); 




extern const char *mxGetClassName_800(const mxArray * pa); 




extern bool mxIsClass_800(const mxArray * pa, const char * name); 
#line 901
extern mxArray *mxCreateNumericMatrix_800(mwSize m, mwSize n, mxClassID classid, mxComplexity flag); 
#line 908
extern mxArray *mxCreateUninitNumericMatrix_800(size_t m, size_t n, mxClassID classid, mxComplexity flag); 
#line 915
extern mxArray *mxCreateUninitNumericArray_800(size_t ndim, size_t * dims, mxClassID classid, mxComplexity flag); 




extern void mxSetN_800(mxArray * pa, mwSize n); 
#line 927
extern int mxSetDimensions_800(mxArray * pa, const mwSize * pdims, mwSize ndims); 




extern void mxDestroyArray_800(mxArray * pa); 
#line 941
extern mxArray *mxCreateNumericArray_800(mwSize ndim, const mwSize * dims, mxClassID classid, mxComplexity flag); 
#line 947
extern mxArray *mxCreateCharArray_800(mwSize ndim, const mwSize * dims); 
#line 954
extern mxArray *mxCreateDoubleMatrix_800(mwSize m, mwSize n, mxComplexity flag); 




extern mxLogical *mxGetLogicals_800(const mxArray * pa); 




extern mxArray *mxCreateLogicalArray_800(mwSize ndim, const mwSize * dims); 
#line 970
extern mxArray *mxCreateLogicalMatrix_800(mwSize m, mwSize n); 




extern mxArray *mxCreateLogicalScalar_800(bool value); 




extern bool mxIsLogicalScalar_800(const mxArray * pa); 




extern bool mxIsLogicalScalarTrue_800(const mxArray * pa); 
#line 991
extern mxArray *mxCreateDoubleScalar_800(double value); 
#line 1012
extern mxArray *mxCreateSparse_800(mwSize m, mwSize n, mwSize nzmax, mxComplexity flag); 
#line 1018
extern mxArray *mxCreateSparseLogicalMatrix_800(mwSize m, mwSize n, mwSize nzmax); 
#line 1026
extern void mxGetNChars_800(const mxArray * pa, char * buf, mwSize nChars); 
#line 1037
extern int mxGetString_800(const mxArray * pa, char * buf, mwSize buflen); 
#line 1044
extern char *mxArrayToString_800(const mxArray * pa); 
#line 1053
extern char *mxArrayToUTF8String_800(const mxArray * pa); 
#line 1060
extern mxArray *mxCreateStringFromNChars_800(const char * str, mwSize n); 
#line 1066
extern mxArray *mxCreateString_800(const char * str); 




extern mxArray *mxCreateCharMatrixFromStrings_800(mwSize m, const char ** str); 
#line 1077
extern mxArray *mxCreateCellMatrix_800(mwSize m, mwSize n); 
#line 1083
extern mxArray *mxCreateCellArray_800(mwSize ndim, const mwSize * dims); 
#line 1090
extern mxArray *mxCreateStructMatrix_800(mwSize m, mwSize n, int nfields, const char ** fieldnames); 
#line 1097
extern mxArray *mxCreateStructArray_800(mwSize ndim, const mwSize * dims, int nfields, const char ** fieldnames); 




extern mxArray *mxDuplicateArray_800(const mxArray * in); 
#line 1109
extern int mxSetClassName_800(mxArray * pa, const char * classname); 
#line 1115
extern int mxAddField_800(mxArray * pa, const char * fieldname); 
#line 1121
extern void mxRemoveField_800(mxArray * pa, int field); 




extern double mxGetEps_800(void); 




extern double mxGetInf_800(void); 




extern double mxGetNaN_800(void); 




extern bool mxIsFinite_800(double x); 
#line 1147
extern bool mxIsInf_800(double x); 




extern bool mxIsNaN_800(double x); 
#line 1179
extern mxDouble *mxGetDoubles_800(const mxArray *); extern int mxSetDoubles_800(mxArray *, mxDouble *); extern mxComplexDouble *mxGetComplexDoubles_800(const mxArray *); extern int mxSetComplexDoubles_800(mxArray *, mxComplexDouble *); 
extern mxSingle *mxGetSingles_800(const mxArray *); extern int mxSetSingles_800(mxArray *, mxSingle *); extern mxComplexSingle *mxGetComplexSingles_800(const mxArray *); extern int mxSetComplexSingles_800(mxArray *, mxComplexSingle *); 
extern mxInt8 *mxGetInt8s_800(const mxArray *); extern int mxSetInt8s_800(mxArray *, mxInt8 *); extern mxComplexInt8 *mxGetComplexInt8s_800(const mxArray *); extern int mxSetComplexInt8s_800(mxArray *, mxComplexInt8 *); 
extern mxUint8 *mxGetUint8s_800(const mxArray *); extern int mxSetUint8s_800(mxArray *, mxUint8 *); extern mxComplexUint8 *mxGetComplexUint8s_800(const mxArray *); extern int mxSetComplexUint8s_800(mxArray *, mxComplexUint8 *); 
extern mxInt16 *mxGetInt16s_800(const mxArray *); extern int mxSetInt16s_800(mxArray *, mxInt16 *); extern mxComplexInt16 *mxGetComplexInt16s_800(const mxArray *); extern int mxSetComplexInt16s_800(mxArray *, mxComplexInt16 *); 
extern mxUint16 *mxGetUint16s_800(const mxArray *); extern int mxSetUint16s_800(mxArray *, mxUint16 *); extern mxComplexUint16 *mxGetComplexUint16s_800(const mxArray *); extern int mxSetComplexUint16s_800(mxArray *, mxComplexUint16 *); 
extern mxInt32 *mxGetInt32s_800(const mxArray *); extern int mxSetInt32s_800(mxArray *, mxInt32 *); extern mxComplexInt32 *mxGetComplexInt32s_800(const mxArray *); extern int mxSetComplexInt32s_800(mxArray *, mxComplexInt32 *); 
extern mxUint32 *mxGetUint32s_800(const mxArray *); extern int mxSetUint32s_800(mxArray *, mxUint32 *); extern mxComplexUint32 *mxGetComplexUint32s_800(const mxArray *); extern int mxSetComplexUint32s_800(mxArray *, mxComplexUint32 *); 
extern mxInt64 *mxGetInt64s_800(const mxArray *); extern int mxSetInt64s_800(mxArray *, mxInt64 *); extern mxComplexInt64 *mxGetComplexInt64s_800(const mxArray *); extern int mxSetComplexInt64s_800(mxArray *, mxComplexInt64 *); 
extern mxUint64 *mxGetUint64s_800(const mxArray *); extern int mxSetUint64s_800(mxArray *, mxUint64 *); extern mxComplexUint64 *mxGetComplexUint64s_800(const mxArray *); extern int mxSetComplexUint64s_800(mxArray *, mxComplexUint64 *); 

extern int mxMakeArrayReal_800(mxArray *); 
extern int mxMakeArrayComplex_800(mxArray *); 
#line 1224
extern void mexPrintAssertion(const char * test, const char * fname, int linenum, const char * message); 
#line 1286
#endif /* matrix_h */
#line 49 "D:\\matlab 2019b\\extern\\include\\mex.h"
typedef void (*mex_exit_fn)(void); 
#line 58
typedef 
#line 54
struct mexGlobalTableEntry_Tag { 

const char *name; 
mxArray **variable; 
} mexGlobalTableEntry, *mexGlobalTable; 
#line 73
typedef 
#line 67
struct mexFunctionTableEntry_tag { 
const char *name; 
mxFunctionPtr f; 
int nargin; 
int nargout; 
struct _mexLocalFunctionTable *local_function_table; 
} mexFunctionTableEntry, *mexFunctionTable; 




typedef 
#line 75
struct _mexLocalFunctionTable { 
size_t length; 
mexFunctionTable entries; 
} _mexLocalFunctionTable, *mexLocalFunctionTable; 




typedef 
#line 80
struct { 
void (*initialize)(void); 
void (*terminate)(void); 
} _mexInitTermTableEntry, *mexInitTermTableEntry; 



typedef void (*fn_clean_up_after_error)(void); 
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr f); 

typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void); 
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable); 
#line 150
extern void mexErrMsgTxt_800(const char * error_msg); 
#line 159
extern void mexErrMsgIdAndTxt_800(const char * identifier, const char * err_msg, ...); 
#line 170
extern void mexWarnMsgTxt_800(const char * warn_msg); 
#line 181
extern void mexWarnMsgIdAndTxt_800(const char * identifier, const char * warn_msg, ...); 
#line 191
extern int mexPrintf_800(const char * fmt, ...); 
#line 206
extern void mexMakeArrayPersistent_800(mxArray * pa); 
#line 216
extern void mexMakeMemoryPersistent_800(void * ptr); 
#line 222
extern int mexCallMATLAB_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 234
extern mxArray *mexCallMATLABWithTrap_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 247
extern void mexPrintAssertion_800(const char * test, const char * fname, int linenum, const char * message); 
#line 257
extern bool mexIsGlobal_800(const mxArray * pA); 
#line 264
extern int mexPutVariable_800(const char * workspace, const char * name, const mxArray * parray); 
#line 275
extern const mxArray *mexGetVariablePtr_800(const char * workspace, const char * name); 
#line 285
extern mxArray *mexGetVariable_800(const char * workspace, const char * name); 
#line 294
extern void mexLock_800(void); 
#line 300
extern void mexUnlock_800(void); 
#line 306
extern bool mexIsLocked_800(void); 
#line 312
extern const char *mexFunctionName_800(void); 
#line 319
extern int mexEvalString_800(const char * str); 
#line 328
extern mxArray *mexEvalStringWithTrap_800(const char * str); 
#line 336
extern int mexAtExit_800(mex_exit_fn exit_fcn); 
#line 356
extern void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]); 
#line 363
#endif /* mex_h */
#line 2 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\string.h"
#ifndef __string_h__
#define __string_h__
#line 11
void *memchr(const void *, int, size_t); 

short *memshort(const short *, short, size_t); 
unsigned short *memushort(const unsigned short *, unsigned short, size_t); 
int *memint(const int *, int, size_t); 
unsigned *memuint(const unsigned *, unsigned, size_t); 
long long *memll(const long long *, long long, size_t); 
unsigned long long *memull(const unsigned long long *, unsigned long long, size_t); 
char *strupr(char *); 
char *strlwr(char *); 
char *strnupr(char *, size_t); 
char *strnlwr(char *, size_t); 
int strtrim(char *); 
char *strrev(char *); 

int memcmp(const void *, const void *, size_t); 
void *memcpy(void *, const void *, size_t); 
void *mempcpy(void *, const void *, size_t); 
void *memmove(void *, const void *, size_t); 
void *memset(void *, int, size_t); 
char *strcat(char *, const char *); 
char *strchr(const char *, int); 
int strcmp(const char *, const char *); 
int strcoll(const char *, const char *); 
char *strcpy(char *, const char *); 
unsigned strlcpy(char * destination, const char * source, unsigned bufsize); 
size_t strcspn(const char *, const char *); 
char *strerror(int); 
size_t strlen(const char *); 
size_t strnlen_s(const char *, size_t); 
char *strncat(char *, const char *, size_t); 
unsigned strlcat(char * destination, const char * source, unsigned bufsize); 
int strncmp(const char *, const char *, size_t); 
char *strncpy(char *, const char *, size_t); 
char *strpbrk(const char *, const char *); 
char *strrchr(const char *, int); 
size_t strspn(const char *, const char *); 
char *strstr(const char *, const char *); 
char *stristr(const char *, const char *); 
char *strtok(char *, const char *); 
void *memccpy(void *, const void *, int, size_t); 
void *_memccpy(void *, void *, unsigned); 
char *strdup(const char *); 
char *strndup(const char *, size_t siz); 
int strnicmp(const char *, const char *, size_t); 
void swab(const char *, char *, size_t); 
int stricmp(const char *, const char *); 
char *_strset(char *, int); 
int strcmpi(const char *, const char *); 

int _memicmp(const void *, const void *, size_t); 
int strrepl(char * InputString, char * StringToFind, char * Replacement, char * OutputString); 
int strtobase64(char * dst, size_t destsiz, unsigned char * src, size_t srcsiz); 
int strfrombase64(char * dst, size_t destsiz, unsigned char * src, size_t srcsiz); 



errno_t memmove_s(void * s1, rsize_t s1max, const void * s2, rsize_t n); 
errno_t strcpy_s(char * s1, rsize_t s1max, const char * s2); 
errno_t strcat_s(char * s1, rsize_t s1max, const char * s2); 
char *strtok_s(char * s1, rsize_t * s1max, const char * s2, char ** ptr); 
errno_t memcpy_s(void * s1, rsize_t s1max, const void * s2, rsize_t n); 
errno_t strerror_s(char * s, rsize_t maxsize, errno_t errnum); 
size_t strnlen_s(const char * s, size_t maxsize); 
size_t strerrorlen_s(errno_t errnum); 
errno_t strerror_s(char * s, rsize_t maxsize, errno_t errnum); 
errno_t strncpy_s(char * s1, rsize_t s1max, const char * s2, rsize_t n); 
errno_t strncpy_s(char * s1, rsize_t s1max, const char * s2, rsize_t n); 
errno_t strncat_s(char * s1, rsize_t s1max, const char * s2, rsize_t n); 
errno_t strerror_s(char * s, rsize_t maxsize, errno_t errnum); 

#endif /* __string_h__ */
#line 2 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\math.h"
#ifndef __math_h__
#define __math_h__

#ifndef HUGE_VAL
#define HUGE_VAL 1.7976931348623157e+308
#endif /* HUGE_VAL */




#pragma extensions(push,on)




typedef float float_t; 
typedef double double_t; 


double atan(double); 
double _atani(int); 
long double atanl(long double); 
float atanf(float); 


long double tanl(long double); 
double tan(double); 
float tanf(float); 


double cos(double); 
long double cosl(long double); 
float cosf(float); 
double _cosi(int); 
double _cosu(unsigned); 
double _cosll(long long); 
double _cosull(unsigned long long); 

long double sinl(long double); 
float sinf(float); 
double sin(double); 
double _sini(int); 
double _sinu(unsigned); 
double _sinll(long long); 
double _sinull(unsigned long long); 


long double exp2l(long double); 
double exp2(double); 
float exp2f(float); 


double exp10(double); 
float exp10f(float); 
long double exp10l(long double); 


long double expm1l(long double); 
double expm1(double); 
float expm1f(float); 
double _expm1i(int); 


double tanh(double); 
long double tanhl(long double); 
float tanhf(float); 


double frexp(double, int *); 
long double frexpl(long double, int *); 
double _frexpi(int, int *); 
float frexpf(float, int *); 


long double fdiml(long double x, long double y); 
double fdim(double x, double y); 
float fdimf(float x, float y); 

double modf(double, double *); 
long double modfl(long double, long double *); 


double ceil(double); 
long double ceill(long double); 
float ceilf(float); 
double _ceili(int); 


double cbrt(double); 
long double cbrtl(long double); 
float cbrtf(float); 


long double fabsl(long double); 
double fabsd(double); 
float fabsf(float); 
double fabs(double); 
double _fabsi(int); 
double _fabsull(unsigned long long); 
double _fabsll(long long); 
double _fabsu(unsigned); 


long double floorl(long double); 
double floord(double); 
float floorf(float); 
double floor(double); 
double _floori(int); 
double _flooru(unsigned); 


long double fmal(long double, long double, long double); 
double fma(double, double, double); 
float fmaf(float, float, float); 
double _fmai(int, int, int); 


long double fmaxl(long double, long double); 
double fmax(double, double); 
float fmaxf(float, float); 

double acos(double); 
float acosf(float); 
long double acosl(long double); 


double asin(double); 
long double asinl(long double); 
float asinf(float); 

double atan2(double, double); 
long double atan2l(long double, long double); 
float atan2f(float, float); 


double cosh(double); 
long double coshl(long double); 
float coshf(float); 
double _coshi(int); 


double sinh(double); 
long double sinhl(long double); 
float sinhf(float); 
double _sinhi(int); 
double _sinhll(long long); 


long double expl(long double); 
float expf(float); 
double exp(double); 


double ldexp(double, int); 
long double ldexpl(long double, int); 
float ldexpf(float, int); 


long double logl(long double); 
float logf(float); 
double log(double); 
double _logi(int); 


double log10(double); 
long double log10l(long double); 
float log10f(float); 


double log1p(double); 
long double log1pl(long double); 
float log1pf(float); 


long double log10l(long double); 
float log10f(float); 
double _log10i(int); 
double log10(double); 


double pow(double, double); 
long double powl(long double, long double); 
double powd(double, double); 
long double powlli(long double, int); 
double ipow(double, int); 
double powdi(double, int); 
long double ipowl(long double, int); 
float ipowf(float, int); 
float powf(float, float); 
double powii(int, int); 
long double powlld(long double, double); 
long double powlli(long double, int); 
long double powdll(double, long double); 
double powid(int, double); 


double scalb(double, double); 
long double scalbl(long double, long double); 
float scalbf(float, float); 


double scalbn(double, int); 
long double scalbnl(long double, int); 
float scalbnf(float, int); 


double scalbln(double, long); 
long double scalblnl(long double, long); 
float scalblnf(float, long); 


long double sqrtl(long double); 
double _sqrti(int); 
double _sqrtu(unsigned); 
double _sqrtll(long long); 
double _sqrtull(unsigned long long); 
float sqrtf(float); 
double sqrt(double); 


double fmod(double, double); 
long double fmodl(long double, long double); 
float fmodf(float, float); 

double infinity(void); 
long double infinityl(void); 
float infinityf(void); 
long double max_normall(void); 
double max_normal(void); 
float max_normalf(void); 
long double min_normall(void); 
double min_normal(void); 
float min_normalf(void); 

int isnand(double); 
int isnanl(long double); 
int isnanf(float); 
int isnan(double); 

int finite(double); 

int isnormalf(float); 
int isnormal(double); 
int isnormall(long double); 

double copysign(double, double); 
long double copysignl(long double, long double); 
float copysignf(float, float); 

int ilogb(double); 
int ilogbf(float); 
int ilogbl(long double); 

double logb(double); 
long double logbl(long double); 
float logbf(float); 

double erf(double); 
long double erfl(long double); 
float erff(float); 


double erfc(double); 
long double erfcl(long double); 
float erfcf(float); 

int _signbit(double); 



double asinh(double); 
long double asinhl(long double); 
long double sinhl(long double); 
float asinhf(float); 


double nextafter(double, double); 
long double nextafterl(long double, long double); 
float nextafterf(float, float); 


double nexttoward(double, long double); 
long double nexttowardl(long double, long double); 
float nexttowardf(float, long double); 


double acosh(double); 
long double acoshl(long double); 
long double acoshl(long double); 
float acoshf(float); 


double atanh(double); 
long double atanhl(long double); 
float atanhf(float); 


double lgamma(double); 
long double lgammal(long double); 
float lgammaf(float); 

long double tgammal(long double); 
double tgamma(double); 
float tgammaf(float); 


double _y0(double); 
long double y0l(long double); 
double y1(double); 
long double y1l(long double); 
double yn(int, double); 
long double ynl(int, long double); 
double j0(double); 
double j1(double); 
long double j1l(long double); 
double jn(int, double); 
long double jnl(int, long double); 



long double log2l(long double); 
double log2(double); 
float log2f(float); 
double _log2i(int); 
double _log2ll(long long); 


long double nearbyintl(long double); 
double nearbyint(double); 
float nearbyintf(float); 


double hypot(double, double); 
long double hypotl(long double, long double); 
float hypotf(float, float); 

double _rint(double); 



int isinf(double); 
int _isinfd(double); 
int isinfl(long double); 
int isinff(float); 
int _isinfi(int); 


int isfinite(double); 
int isfinitef(float); 
int isfinitel(long double); 

int __fpclassifyl(long double); 
int __fpclassifyd(double); 
int __fpclassifyf(float); 


double round(double); 
float roundf(float); 
long double roundl(long double); 
double _roundi(int); 


double remainder(double, double); 
long double remainderl(long double, long double); 
float remainderf(float, float); 

int lrint(double); 
int lrintf(float); 
long lrintl(long double); 
long long llrintl(long double); 
long long llrintf(float); 
long long llrint(double); 

long lround(double); 
long lroundf(float); 
long lroundl(long double); 

long long llround(double); 
long long llroundf(float); 
long long llroundl(long double); 

long double remquol(long double, long double, int *); 
double remquo(double, double, int *); 
float remquof(float, float, int *); 

double trunc(double x); 
long double truncl(long double); 
float truncf(float); 


long double fminl(long double, long double); 
float fminf(float, float); 
double fmin(double, double); 
#line 406
void ldtoa(long double, char *); 
double cabs(double _Complex); 
float cabsf(float _Complex); 
long double cabsl(long double _Complex); 




struct exception { 

int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
int err; 
}; 

int matherr(struct exception * e); 

extern float __nan__; 

extern float __infinity__; 
double nan(const char *); 
float nanf(const char *); 
long double nanl(const char *); 



int fcmp(double, double, double); 
int fcmpl(long double, long double, long double); 
void sincos(double x, double * sin, double * cos); 
void sincosf(float x, float * sin, float * cos); 
void sincosl(long double x, long double * sin, long double * cos); 
#line 446
int _isgreater(long double, long double); 


int _isgreaterequal(long double, long double); 


int _isless(long double, long double); 


int _islessequal(long double, long double); 


int _islessgreater(long double, long double); 


int _isunordered(long double, long double); 
#line 474
double atof(const char *); 

int cubic(double a, double b, double c, double d, double * x); 




int cubicl(long double a, long double b, long double c, long double d, long double * x); 
#line 537
#endif /* __math_h__ */
#line 2 "d:\\matlab 2019b\\toolbox\\simulink\\simdemos\\simfeatures\\include\\my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
#line 535 "D:\\matlab 2019b\\sys\\lcc64\\lcc64\\include64\\math.h"
#pragma extensions(pop)
#line 12 "d:\\matlab 2019b\\toolbox\\simulink\\simdemos\\simfeatures\\include\\my_func.h"
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
