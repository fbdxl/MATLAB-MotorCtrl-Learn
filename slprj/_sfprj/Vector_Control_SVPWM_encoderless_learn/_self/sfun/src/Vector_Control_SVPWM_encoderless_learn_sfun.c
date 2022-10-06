/* Include files */

#include "Vector_Control_SVPWM_encoderless_learn_sfun.h"
#include "c1_Vector_Control_SVPWM_encoderless_learn.h"
#include "c2_Vector_Control_SVPWM_encoderless_learn.h"
#include "c3_Vector_Control_SVPWM_encoderless_learn.h"
#include "c4_Vector_Control_SVPWM_encoderless_learn.h"
#include "c5_Vector_Control_SVPWM_encoderless_learn.h"
#include "c6_Vector_Control_SVPWM_encoderless_learn.h"
#include "c7_Vector_Control_SVPWM_encoderless_learn.h"
#include "c8_Vector_Control_SVPWM_encoderless_learn.h"
#include "c9_Vector_Control_SVPWM_encoderless_learn.h"
#include "c10_Vector_Control_SVPWM_encoderless_learn.h"
#include "c11_Vector_Control_SVPWM_encoderless_learn.h"
#include "c12_Vector_Control_SVPWM_encoderless_learn.h"
#include "c13_Vector_Control_SVPWM_encoderless_learn.h"
#include "c14_Vector_Control_SVPWM_encoderless_learn.h"
#include "c15_Vector_Control_SVPWM_encoderless_learn.h"
#include "c17_Vector_Control_SVPWM_encoderless_learn.h"
#include "c18_Vector_Control_SVPWM_encoderless_learn.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _Vector_Control_SVPWM_encoderless_learnMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void Vector_Control_SVPWM_encoderless_learn_initializer(void)
{
}

void Vector_Control_SVPWM_encoderless_learn_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Vector_Control_SVPWM_encoderless_learn_method_dispatcher
  (SimStruct *simstructPtr, unsigned int chartFileNumber, const char* specsCksum,
   int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_Vector_Control_SVPWM_encoderless_learn_method_dispatcher(simstructPtr,
      method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Vector_Control_SVPWM_encoderless_learn_process_check_sum_call
  ( int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4286370138U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2691633026U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1146589149U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(472152765U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1252695819U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3146549659U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2992711144U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1791822691U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c1_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c2_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c3_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c4_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c5_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c6_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c7_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c8_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_Vector_Control_SVPWM_encoderless_learn_get_check_sum
            (mxArray *plhs[]);
          sf_c9_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void
            sf_c10_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c10_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void
            sf_c11_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c11_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void
            sf_c12_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c12_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void
            sf_c13_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c13_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void
            sf_c14_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c14_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void
            sf_c15_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c15_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void
            sf_c17_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c17_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void
            sf_c18_Vector_Control_SVPWM_encoderless_learn_get_check_sum(mxArray *
            plhs[]);
          sf_c18_Vector_Control_SVPWM_encoderless_learn_get_check_sum(plhs);
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
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3127851479U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2637451125U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(749070776U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1859942942U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Vector_Control_SVPWM_encoderless_learn_autoinheritance_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
        if (strcmp(aiChksum, "QZDEiQui440yM2E3BEcruE") == 0) {
          extern mxArray
            *sf_c1_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c1_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray
            *sf_c2_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c2_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "Xr3Fvf5oEJdcVL6jswdH2G") == 0) {
          extern mxArray
            *sf_c3_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c3_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "tLA3DwO8I6h8BnxSvHNgiF") == 0) {
          extern mxArray
            *sf_c4_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c4_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray
            *sf_c5_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c5_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "s1aXIuEwoftwZX5JSIQAtE") == 0) {
          extern mxArray
            *sf_c6_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c6_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray
            *sf_c7_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c7_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "LvypJNGRb7Voy2Fdf0fTv") == 0) {
          extern mxArray
            *sf_c8_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c8_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray
            *sf_c9_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c9_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c10_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c10_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c11_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c11_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "nezpdrIt2IiplcLMMw1fsF") == 0) {
          extern mxArray
            *sf_c12_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c12_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 13:
      {
        if (strcmp(aiChksum, "LvypJNGRb7Voy2Fdf0fTv") == 0) {
          extern mxArray
            *sf_c13_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c13_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 14:
      {
        if (strcmp(aiChksum, "nezpdrIt2IiplcLMMw1fsF") == 0) {
          extern mxArray
            *sf_c14_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c14_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 15:
      {
        if (strcmp(aiChksum, "yXHkJCDo1BSeRdkiqEBfgD") == 0) {
          extern mxArray
            *sf_c15_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c15_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 17:
      {
        if (strcmp(aiChksum, "MCQ7WJvtTa6RIr1keUV1lE") == 0) {
          extern mxArray
            *sf_c17_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c17_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 18:
      {
        if (strcmp(aiChksum, "84vBggreRLxcZyANWoEMWF") == 0) {
          extern mxArray
            *sf_c18_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            (void);
          plhs[0] =
            sf_c18_Vector_Control_SVPWM_encoderless_learn_get_autoinheritance_info
            ();
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
  sf_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info( int
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
          *sf_c1_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray
          *sf_c10_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray
          *sf_c12_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray
          *sf_c13_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray
          *sf_c14_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray
          *sf_c15_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray
          *sf_c17_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          ();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray
          *sf_c18_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_Vector_Control_SVPWM_encoderless_learn_get_eml_resolved_functions_info
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

void Vector_Control_SVPWM_encoderless_learn_debug_initialize(void)
{
  _Vector_Control_SVPWM_encoderless_learnMachineNumber_ =
    sf_debug_initialize_machine("Vector_Control_SVPWM_encoderless_learn","sfun",
    0,17,0,0,0);
  sf_debug_set_machine_event_thresholds
    (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds
    (_Vector_Control_SVPWM_encoderless_learnMachineNumber_,0);
}

void Vector_Control_SVPWM_encoderless_learn_register_exported_symbols(SimStruct*
  S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_Vector_Control_SVPWM_encoderless_learn_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "Vector_Control_SVPWM_encoderless_learn",
      "Vector_Control_SVPWM_encoderless_learn");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_Vector_Control_SVPWM_encoderless_learn_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
