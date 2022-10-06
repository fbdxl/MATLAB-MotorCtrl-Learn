/* Include files */

#include "VectorCtrl_Asynchronous_debugSPWM_sfun.h"
#include "c1_VectorCtrl_Asynchronous_debugSPWM.h"
#include "c2_VectorCtrl_Asynchronous_debugSPWM.h"
#include "c16_VectorCtrl_Asynchronous_debugSPWM.h"
#include "c19_VectorCtrl_Asynchronous_debugSPWM.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _VectorCtrl_Asynchronous_debugSPWMMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void VectorCtrl_Asynchronous_debugSPWM_initializer(void)
{
}

void VectorCtrl_Asynchronous_debugSPWM_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==1) {
    c1_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_VectorCtrl_Asynchronous_debugSPWM_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  return 0;
}

unsigned int sf_VectorCtrl_Asynchronous_debugSPWM_process_check_sum_call( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2570871028U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3866479632U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(191544588U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1454883951U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1859149197U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3454218084U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3642424480U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1652359812U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_VectorCtrl_Asynchronous_debugSPWM_get_check_sum
            (mxArray *plhs[]);
          sf_c1_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_check_sum
            (mxArray *plhs[]);
          sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_VectorCtrl_Asynchronous_debugSPWM_get_check_sum
            (mxArray *plhs[]);
          sf_c16_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_check_sum
            (mxArray *plhs[]);
          sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_check_sum(plhs);
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
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3042715934U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3055635210U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3964028105U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2648931868U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_VectorCtrl_Asynchronous_debugSPWM_autoinheritance_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
     case 1:
      {
        if (strcmp(aiChksum, "pk5qKJWGeDl2MEZdV74jYC") == 0) {
          extern mxArray
            *sf_c1_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c1_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "pk5qKJWGeDl2MEZdV74jYC") == 0) {
          extern mxArray
            *sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 16:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c16_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c16_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 19:
      {
        if (strcmp(aiChksum, "s1aXIuEwoftwZX5JSIQAtE") == 0) {
          extern mxArray
            *sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_autoinheritance_info();
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

unsigned int
  sf_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info( int nlhs,
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
     case 1:
      {
        extern const mxArray
          *sf_c1_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray
          *sf_c16_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray
          *sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_VectorCtrl_Asynchronous_debugSPWM_get_eml_resolved_functions_info
          ();
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

void VectorCtrl_Asynchronous_debugSPWM_debug_initialize(void)
{
  _VectorCtrl_Asynchronous_debugSPWMMachineNumber_ = sf_debug_initialize_machine
    ("VectorCtrl_Asynchronous_debugSPWM","sfun",0,4,0,0,0);
  sf_debug_set_machine_event_thresholds
    (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds
    (_VectorCtrl_Asynchronous_debugSPWMMachineNumber_,0);
}

void VectorCtrl_Asynchronous_debugSPWM_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_VectorCtrl_Asynchronous_debugSPWM_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "VectorCtrl_Asynchronous_debugSPWM", "VectorCtrl_Asynchronous_debugSPWM");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_VectorCtrl_Asynchronous_debugSPWM_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
