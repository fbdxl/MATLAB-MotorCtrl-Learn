/* Include files */

#include "PWM2010a_analysis_sfun.h"
#include "c8_PWM2010a_analysis.h"
#include "c11_PWM2010a_analysis.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _PWM2010a_analysisMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void PWM2010a_analysis_initializer(void)
{
}

void PWM2010a_analysis_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_PWM2010a_analysis_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==8) {
    c8_PWM2010a_analysis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_PWM2010a_analysis_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_PWM2010a_analysis_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4119059819U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2141049162U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4133860690U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3192076727U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1996558792U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2417156588U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1769844119U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3129322104U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 8:
        {
          extern void sf_c8_PWM2010a_analysis_get_check_sum(mxArray *plhs[]);
          sf_c8_PWM2010a_analysis_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_PWM2010a_analysis_get_check_sum(mxArray *plhs[]);
          sf_c11_PWM2010a_analysis_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3564696471U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(678668628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1090454852U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3896867807U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2482600236U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(372816303U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3879114145U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2820248007U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_PWM2010a_analysis_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        if (strcmp(aiChksum, "LvypJNGRb7Voy2Fdf0fTv") == 0) {
          extern mxArray *sf_c8_PWM2010a_analysis_get_autoinheritance_info(void);
          plhs[0] = sf_c8_PWM2010a_analysis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "5caw1Fw3SjjvOE7Wv6FvnF") == 0) {
          extern mxArray *sf_c11_PWM2010a_analysis_get_autoinheritance_info(void);
          plhs[0] = sf_c11_PWM2010a_analysis_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_PWM2010a_analysis_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        extern const mxArray
          *sf_c8_PWM2010a_analysis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_PWM2010a_analysis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_PWM2010a_analysis_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_PWM2010a_analysis_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void PWM2010a_analysis_debug_initialize(void)
{
  _PWM2010a_analysisMachineNumber_ = sf_debug_initialize_machine(
    "PWM2010a_analysis","sfun",0,2,0,0,0);
  sf_debug_set_machine_event_thresholds(_PWM2010a_analysisMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_PWM2010a_analysisMachineNumber_,0);
}

void PWM2010a_analysis_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_PWM2010a_analysis_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "PWM2010a_analysis", "PWM2010a_analysis");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_PWM2010a_analysis_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
