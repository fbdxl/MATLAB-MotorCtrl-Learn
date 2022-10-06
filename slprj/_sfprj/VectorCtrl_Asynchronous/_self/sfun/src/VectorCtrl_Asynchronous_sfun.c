/* Include files */

#include "VectorCtrl_Asynchronous_sfun.h"
#include "c1_VectorCtrl_Asynchronous.h"
#include "c2_VectorCtrl_Asynchronous.h"
#include "c3_VectorCtrl_Asynchronous.h"
#include "c4_VectorCtrl_Asynchronous.h"
#include "c5_VectorCtrl_Asynchronous.h"
#include "c6_VectorCtrl_Asynchronous.h"
#include "c7_VectorCtrl_Asynchronous.h"
#include "c8_VectorCtrl_Asynchronous.h"
#include "c9_VectorCtrl_Asynchronous.h"
#include "c10_VectorCtrl_Asynchronous.h"
#include "c11_VectorCtrl_Asynchronous.h"
#include "c12_VectorCtrl_Asynchronous.h"
#include "c13_VectorCtrl_Asynchronous.h"
#include "c14_VectorCtrl_Asynchronous.h"
#include "c15_VectorCtrl_Asynchronous.h"
#include "c16_VectorCtrl_Asynchronous.h"
#include "c17_VectorCtrl_Asynchronous.h"
#include "c18_VectorCtrl_Asynchronous.h"
#include "c19_VectorCtrl_Asynchronous.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _VectorCtrl_AsynchronousMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void VectorCtrl_Asynchronous_initializer(void)
{
}

void VectorCtrl_Asynchronous_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_VectorCtrl_Asynchronous_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==1) {
    c1_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_VectorCtrl_Asynchronous_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_VectorCtrl_Asynchronous_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3211309735U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3089977558U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2037548137U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2423728580U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2115299788U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(490231291U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3080566792U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3813847341U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c1_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c2_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c3_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c4_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c5_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c6_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c7_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c8_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_VectorCtrl_Asynchronous_get_check_sum(mxArray *plhs[]);
          sf_c9_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c10_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c11_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c12_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c13_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c14_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c15_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c16_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c17_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c18_VectorCtrl_Asynchronous_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_VectorCtrl_Asynchronous_get_check_sum(mxArray *
            plhs[]);
          sf_c19_VectorCtrl_Asynchronous_get_check_sum(plhs);
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
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1525514779U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2690958647U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(140794754U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(768735741U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_VectorCtrl_Asynchronous_autoinheritance_info( int nlhs, mxArray *
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
     case 1:
      {
        if (strcmp(aiChksum, "pk5qKJWGeDl2MEZdV74jYC") == 0) {
          extern mxArray *sf_c1_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c1_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "pk5qKJWGeDl2MEZdV74jYC") == 0) {
          extern mxArray *sf_c2_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c2_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "LvypJNGRb7Voy2Fdf0fTv") == 0) {
          extern mxArray *sf_c3_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c3_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray *sf_c4_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c4_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "s1aXIuEwoftwZX5JSIQAtE") == 0) {
          extern mxArray *sf_c5_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c5_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray *sf_c6_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c6_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "LvypJNGRb7Voy2Fdf0fTv") == 0) {
          extern mxArray *sf_c7_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c7_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "LvypJNGRb7Voy2Fdf0fTv") == 0) {
          extern mxArray *sf_c8_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c8_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray *sf_c9_VectorCtrl_Asynchronous_get_autoinheritance_info
            (void);
          plhs[0] = sf_c9_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "5caw1Fw3SjjvOE7Wv6FvnF") == 0) {
          extern mxArray
            *sf_c10_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c10_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "5caw1Fw3SjjvOE7Wv6FvnF") == 0) {
          extern mxArray
            *sf_c11_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c11_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c12_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c12_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 13:
      {
        if (strcmp(aiChksum, "s1aXIuEwoftwZX5JSIQAtE") == 0) {
          extern mxArray
            *sf_c13_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c13_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 14:
      {
        if (strcmp(aiChksum, "nezpdrIt2IiplcLMMw1fsF") == 0) {
          extern mxArray
            *sf_c14_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c14_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 15:
      {
        if (strcmp(aiChksum, "yXHkJCDo1BSeRdkiqEBfgD") == 0) {
          extern mxArray
            *sf_c15_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c15_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 16:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c16_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c16_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 17:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c17_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c17_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 18:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray
            *sf_c18_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c18_VectorCtrl_Asynchronous_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 19:
      {
        if (strcmp(aiChksum, "s1aXIuEwoftwZX5JSIQAtE") == 0) {
          extern mxArray
            *sf_c19_VectorCtrl_Asynchronous_get_autoinheritance_info(void);
          plhs[0] = sf_c19_VectorCtrl_Asynchronous_get_autoinheritance_info();
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

unsigned int sf_VectorCtrl_Asynchronous_get_eml_resolved_functions_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
          *sf_c1_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray
          *sf_c10_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray
          *sf_c12_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray
          *sf_c13_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray
          *sf_c14_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray
          *sf_c15_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray
          *sf_c16_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray
          *sf_c17_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray
          *sf_c18_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray
          *sf_c19_VectorCtrl_Asynchronous_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_VectorCtrl_Asynchronous_get_eml_resolved_functions_info();
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

void VectorCtrl_Asynchronous_debug_initialize(void)
{
  _VectorCtrl_AsynchronousMachineNumber_ = sf_debug_initialize_machine(
    "VectorCtrl_Asynchronous","sfun",0,19,0,0,0);
  sf_debug_set_machine_event_thresholds(_VectorCtrl_AsynchronousMachineNumber_,0,
    0);
  sf_debug_set_machine_data_thresholds(_VectorCtrl_AsynchronousMachineNumber_,0);
}

void VectorCtrl_Asynchronous_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_VectorCtrl_Asynchronous_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "VectorCtrl_Asynchronous", "VectorCtrl_Asynchronous");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_VectorCtrl_Asynchronous_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
