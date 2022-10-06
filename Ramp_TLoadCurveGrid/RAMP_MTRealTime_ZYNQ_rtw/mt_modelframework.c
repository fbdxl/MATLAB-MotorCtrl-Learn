/*========================================================================*
 * MT REALTIME Model Framework for MathWorks Simulink (R)
 * Core interface
 *
 * Abstract:
 * Core functions to the MT REALTIME Model Framework interface.
 *
 * Compiler specified defines:
 * RT				- Required.
 * MODEL= modelname	- Required.
 * NUMST=#			- Required. Number of sample times.
 * NCSTATES=#		- Required. Number of continuous states.
 * TID01EQ=1 or 0	- Optional. Only define to 1 if sample time task id's 0 and 1 have equal rates.
 * MULTITASKING		- Optional. (use MT for a synonym).
 * SAVEFILE			- Optional (non-quoted) name of .mat file to create. Default is <MODEL>.mat
 *========================================================================*/

#include "mt_modelframework.h"
#include <float.h>
#include "tmwtypes.h"
#include "rtmodel.h"
#include "rt_sim.h"

//#include "rt_logging.h"

//#ifdef UseMMIDataLogging
//#include "rt_logging_mmi.h"
//#endif
#include "rt_nonfinite.h"
#include "mt_modelframework_ex.h"

/*========================================================================*
 * Verify existence of required MACROS
 *========================================================================*/
#ifndef RT
#error "must define RT"
#endif

#ifndef MODEL
#error "must define MODEL"
#endif

#ifndef NUMST
#error "must define number of sample times, NUMST"
#endif

#ifndef NCSTATES
#error "must define NCSTATES"
#endif

/*========================================================================*
 * MACRO Declarations
 *========================================================================*/
#ifndef TRUE
#define FALSE                          (0)
#define TRUE                           (1)
#endif

#ifndef EXIT_FAILURE
#define EXIT_FAILURE                   1
#endif

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS                   0
#endif

#ifndef SAVEFILE
#define MATFILE2(file)                 #file ".mat"
#define MATFILE1(file)                 MATFILE2(file)
#define MATFILE                        MATFILE1(MODEL)
#else
#define MATFILE                        QUOTE(SAVEFILE)
#endif

#define RUN_FOREVER                    -1.0
#define EXPAND_CONCAT(name1,name2)     name1 ## name2
#define CONCAT(name1,name2)            EXPAND_CONCAT(name1,name2)
#define RT_MODEL                       CONCAT(MODEL,_rtModel)
#define QUOTE1(name)                   #name
#define QUOTE(name)                    QUOTE1(name)              /* need to expand name    */

/*
 * MT REALTIME Model Framework API version
 * Use MTRT_GetModelFrameworkVersion() instead to retrieve
 * version information.
 */
MT_Version MTVS_APIversion DataSection(".MTVS.APIVersion") = { MTMF_VER_MAJOR,
  MTMF_VER_MINOR, MTMF_VER_FIX, MTMF_VER_BUILD };

/*========================================================================*
 * Utility Function Definitions
 *========================================================================*/
#ifdef kMTOSLinux

HANDLE CreateSemaphore(void* lpSemaphoreAttributes, int lInitialCount, int
  lMaximumCount, char* lpName)
{
  UNUSED_PARAMETER(lpSemaphoreAttributes);
  UNUSED_PARAMETER(lpName);
  UNUSED_PARAMETER(lMaximumCount);
  HANDLE sem = (HANDLE) malloc(sizeof(sem_t));
  int err = sem_init(sem, 0, lInitialCount);
  if (err == 0) {
    return sem;
  } else {
    free(sem);
    return NULL;
  }
}

void WaitForSingleObject(HANDLE hHandle, int dwMilliseconds)
{
  if (dwMilliseconds == INFINITE) {
    sem_wait(hHandle);
  } else {
    struct timespec ts;
    ts.tv_nsec = dwMilliseconds * 10^6;
    sem_timedwait(hHandle, &ts);
  }
}

void ReleaseSemaphore(HANDLE hSemaphore, int lReleaseCount, void
                      * lpPreviousCount)
{
  UNUSED_PARAMETER(lReleaseCount);
  UNUSED_PARAMETER(lpPreviousCount);
  sem_post(hSemaphore);
}

void CloseHandle(HANDLE hObject)
{
  sem_destroy(hObject);
  free(hObject);
}

void InitializeCriticalSection(CRITICAL_SECTION *CriticalSection)
{
  *CriticalSection = CreateSemaphore(NULL, 1, 1, NULL);
}

void EnterCriticalSection(CRITICAL_SECTION *CriticalSection)
{
  sem_wait(*CriticalSection);
}

void LeaveCriticalSection(CRITICAL_SECTION *CriticalSection)
{
  sem_post(*CriticalSection);
}

void DeleteCriticalSection(CRITICAL_SECTION *CriticalSection)
{
  CloseHandle(*CriticalSection);
}

boolean_T _isnan(real_T value)
{
  return isnan(value);
}

#endif

/*========================================================================*
 * External Functions
 *========================================================================*/
#ifdef __cplusplus

extern "C" {

#endif

  /* The following functions are implemented by Simulink's generated code. The identifiers are prefixed with the
     extern "c" directive when generating C++ code; as such we must do the same. */
  extern RT_MODEL *MODEL(void);
  extern void MdlInitializeSizes(void);
  extern void MdlInitializeSampleTimes(void);
  extern void MdlStart(void);
  extern void MdlOutputs(int_T tid);
  extern void MdlUpdate(int_T tid);
  extern void MdlTerminate(void);
  extern void rt_ODECreateIntegrationData(RTWSolverInfo *si);
  extern void rt_ODEUpdateContinuousStates(RTWSolverInfo *si);

#ifdef __cplusplus

}
#endif

#if NCSTATES > 0
#define rt_CreateIntegrationData(S)    rt_ODECreateIntegrationData(rtmGetRTWSolverInfo(S));
#define rt_UpdateContinuousStates(S)   rt_ODEUpdateContinuousStates(rtmGetRTWSolverInfo(S));
#else
#define rt_CreateIntegrationData(S)    rtsiSetSolverName(rtmGetRTWSolverInfo(S),"FixedStepDiscrete");
#define rt_UpdateContinuousStates(S)   rtmSetT(S, rtsiGetSolverStopTime(rtmGetRTWSolverInfo(S)));
#endif

/*========================================================================*
 * Global data local to this module
 *========================================================================*/
static struct {
  int_T stopExecutionFlag;
  int_T isrOverrun;
  int_T overrunFlags[NUMST];
  int_T overrunCount[NUMST];
  int_T haltonOverrun;

#ifdef kMTOSLinux

  CRITICAL_SECTION taskCriticalSection;

#endif

  const char_T *errmsg;
  boolean_T isFirstTimeStep;
  boolean_T isModelStarted;
} SITglobals;

#ifdef __cplusplus

extern "C" {

#endif

  _SITexportglobals SITexportglobals;
  RT_MODEL *S = NULL;

  /* Following functions are defined in <model name>.c */
  void SetExternalInputs(double *data, int_T* sampleHit);
  void SetExternalOutputs(double *data, int_T* sampleHit);
  int32_t NumInputPorts(void);
  int32_t NumOutputPorts(void);
  int32_t MT_InitParamDoubleBuf(void);
  int32_t MT_InitializeParamStruct(void);
  int32_t MT_InitExternalOutputs(void);
  extern const MT_Task MT_TaskList[];
  extern const int32_t MT_NumTasks;

#ifdef __cplusplus

}
#endif

/*========================================================================*
 * Function: SetSITErrorMessage
 *
 * Abstract:
 *	Sets and prints the system's error or warning message to stderr. To clear the last message, you must first set ErrMsg to NULL.
 *
 * Parameters:
 *	ErrMsg : error or warning string. First set to NULL to clear the last error message
 *	isError : if true, the SITglobals.stopExecutionFlag is enabled and the message is reported as a Fatal Error.
 *
 *========================================================================*/
void SetSITErrorMessage(const char *ErrMsg, int32_t isError)
{
  /* If a fatal error and one hasn't yet occurred */
  if (isError && (SITglobals.stopExecutionFlag == 0)) {
    /* Set the stop flag and forcefully set the error message by setting internal variable to NULL.*/
    SITglobals.stopExecutionFlag = 1;
    SITglobals.errmsg = NULL;
  }

  /* Only set the error message if it hasn't been set before. */
  if (SITglobals.errmsg == NULL) {
    SITglobals.errmsg = ErrMsg;
  }

  /* Print the error\warning message */
  if (SITglobals.errmsg != NULL) {
    if (isError) {
      (void)fprintf(stderr,"REALTIME Error: %s\n", SITglobals.errmsg);
    } else {
      (void)fprintf(stderr,"REALTIME Warning: %s\n", SITglobals.errmsg);
    }
  }
}

#ifndef MULTITASKING                   /* SINGLETASKING */
#define FIRST_TID                      0

/*========================================================================*
 * Function: rtOneStep
 *
 * Abstract:
 *	Perform one step of the model. This function is modeled such that
 *	it could be called from an interrupt service routine (ISR) with minor
 *	modifications.
 *
 * Returns:
 *     MT_OK if no error.
 *========================================================================*/
static int32_t rt_OneStep(RT_MODEL *S, double *inData)
{
  real_T tnext = 0;
  int_T *sampleHit = rtmGetSampleHitPtr(S);

  /***********************************************
   * Check and see if base step time is too fast *
   ***********************************************/
  if (SITglobals.isrOverrun++) {
    SITglobals.stopExecutionFlag = 1;
    return -1;
  }

  /***********************************************
   * Check and see if error status has been set  *
   ***********************************************/
  if (rtmGetErrorStatus(S) != NULL) {
    SITglobals.stopExecutionFlag = 1;
    return -1;
  }

  /* enable interrupts here */
  SetExternalInputs(inData, sampleHit);
  tnext = rt_SimGetNextSampleHit();
  rtsiSetSolverStopTime(rtmGetRTWSolverInfo(S),tnext);
  MdlOutputs(0);
  SITglobals.isrOverrun--;
  return MT_OK;
}                                      /* end rtOneStep */

#else                                  /* MULTITASKING */
#if TID01EQ == 1
#define FIRST_TID                      1
#else
#define FIRST_TID                      0
#endif

/*========================================================================*
 * Function: SCHEDULER
 *
 * Abstract:
 *	Computes SampleHits for tasks in the model.
 *
 * Returns:
 *	MT_OK if no error.
 *========================================================================*/
static int32_t SCHEDULER(RT_MODEL *S)
{
  int_T i = 0;
  real_T tnext = 0;
  int_T *sampleHit = rtmGetSampleHitPtr(S);

  /***********************************************
   * Check and see if base step time is too fast *
   ***********************************************/
  if (SITglobals.isrOverrun++) {
    SITglobals.stopExecutionFlag = 1;
    return -1;
  }

  /***********************************************
   * Check and see if error status has been set  *
   ***********************************************/
  if (rtmGetErrorStatus(S) != NULL) {
    SITglobals.stopExecutionFlag = 1;
    return -1;
  }

  /* compute next cycle hits */
  tnext = rt_SimUpdateDiscreteEvents(rtmGetNumSampleTimes(S),
    rtmGetTimingData(S),
    rtmGetSampleHitPtr(S),
    rtmGetPerTaskSampleHitsPtr(S));
  rtsiSetSolverStopTime(rtmGetRTWSolverInfo(S),tnext);

  /*********************************************
   * Step the model for any other sample times *
   *********************************************/
  for (i=1+FIRST_TID; i<NUMST; i++) {
    if (sampleHit[i]) {
      /*	if sampleHit, mark the overrunFlag : if the flag is already marked,
         the task has not finished its run from last sampleHit.
         Marking the flag in scheduler instead of in the task:
         To detect the case of overrun when the task cannot even start
         execution even though it is scheduled
       */
      if (SITglobals.overrunFlags[i] > 0) {
        // check for overrun
        printf("overrun in task %d: %d\n", i, SITglobals.overrunFlags[i]);
        SITglobals.overrunCount[i]++;  // update counter
        if (SITglobals.haltonOverrun) {
          SetSITErrorMessage("Task Overran", 1);
        }
      } else {
        SITglobals.overrunFlags[i] = 1;
      }
    }
  }

  SITglobals.isrOverrun--;
  return MT_OK;
}                                      /* end SCHEDULER */

/*========================================================================*
 * Function: MTRT_ScheduleTasks2
 *
 * Abstract:
 *	Determines the sub tasks to execute next. We do not run the other tasks here, they are
 *	executed separately through MTRT_TaskTakeOneStep)
 *
 * Output Parameters:
 *	dispatchtasks	: Array size of NUMST.  This defines the next task to execute. dispatchtasks[0] is the base task.
 *	isFirstSchedule	: true if executing the first time step
 *
 * Returns:
 *	MT_OK if no error.
 *========================================================================*/
DLL_EXPORT int32_t MTRT_ScheduleTasks2(int32_t *dispatchtasks, char
  *isFirstSchedule)
{

#ifndef MULTITASKING

  SetSITErrorMessage("Called ScheduleTasks2() for a single-rate model.  Use Schedule() instead.",
                     1);
  return MT_ERROR;

#else

  int32_t tid = 0;
  int32_t retVal = 0;
  int_T *sampleHits = rtmGetSampleHitPtr(S);
  retVal = SCHEDULER(S);
  if (retVal == 0) {
    /* Update with list of scheduled tasks.*/
    for (tid=0; tid<NUMST; tid++) {
      dispatchtasks[tid] = sampleHits[tid + TID01EQ];
    }
  }

  *isFirstSchedule = SITglobals.isFirstTimeStep;
  return retVal;

#endif

}

/*========================================================================*
 * Function: rt_OneStepTask
 *
 * Abstract:
 *	Takes one step for the task specified by tid
 *
 * Input Parameters:
 *	S		: Pointer to model information
 *	tid		: Task ID to step
 *	inData	: Pointer to inport data. Ignored unless it is the FIRST_TID (aka base rate).
 *
 * Returns:
 *	1 if this is the last task to execute for a time step
 *	0 if other tasks still need to execute
 *	-1 if an error occurred
 *========================================================================*/
static int32_t rt_OneStepTask(RT_MODEL *S, int32_t tid, double *inData)
{
  if (tid == FIRST_TID) {
    /* Return if there has been a previous error */
    if (SITglobals.stopExecutionFlag) {
      return -1;
    }

    /*******************************************
     * Step the model for the base sample time *
     *******************************************/
    if ((inData == NULL) && (NumInputPorts() > 0)) {
      /* For baserate (FIRST_TID) we need inData, but only set error message if it hasn't been set yet */
      SetSITErrorMessage("External Input data array is NULL for base rate task",
                         1);
      return -1;
    }

    /* MdlUpdate is not executed on the first iteration. */

    /* pull inport data in from caller */
    SetExternalInputs(inData, rtmGetSampleHitPtr(S));
    MdlOutputs(FIRST_TID);
  } else {
    /*********************************************
     * Step the model for any other sample times *
     *********************************************/
    if ((tid < (FIRST_TID+1)) || (tid >= NUMST) ) {
      return -1;
    }

    MdlOutputs(tid);
    MdlUpdate(tid);
    rt_SimUpdateDiscreteTaskTime(rtmGetTPtr(S), rtmGetTimingData(S),tid);

    /* Indicate task complete */
    SITglobals.overrunFlags[tid]--;
  }                                    // of tid==FIRST_TID

  return MT_OK;
}                                      /* end rtOneStep */

#endif                                 /* MULTITASKING */

/*========================================================================*
 * Function: MTRT_GetModelFrameworkVersion
 *
 * Abstract:
 *	Returns the version of the MT REALTIME Model Framework
 *
 * Output Parameters
 *	major : major version number
 *	minor : minor version number
 *	fix   : fix version number
 *	build : build version number
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_GetModelFrameworkVersion(uint32_t* major, uint32_t*
  minor, uint32_t* fix, uint32_t* build)
{
  *major = MTVS_APIversion.major;
  *minor = MTVS_APIversion.minor;
  *fix = MTVS_APIversion.fix;
  *build = MTVS_APIversion.build;
  return MT_OK;
}

/*========================================================================*
 * Function: MTRT_InitializeModel
 *
 * Abstract:
 *	Initializes internal structures and prepares model for execution.
 *
 * Input Parameters:
 *	finaltime	: the final time until which the model should run.
 *
 * Output Parameters:
 *	outTimeStep	: the base time step of the model scheduler.
 *	num_in		: number of external inputs
 *	num_out		: number of external outputs
 *	num_tasks	: number of Tasks (for multirate models only).
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_InitializeModel (double finaltime, double *outTimeStep,
  int32_t *outNumInports, int32_t *outNumOutports, int32_t *numTasks)
{
  const char *status = NULL;

  //Make sure SITglobals is reinitialized even if DLL is not reloaded
  (void)memset(&SITglobals, 0, sizeof(SITglobals));
  (void)memset(&SITexportglobals, 0, sizeof(SITexportglobals));
  rt_InitInfAndNaN(sizeof(real_T));
  MT_InitializeParamStruct();
  S = MODEL();
  if (rtmGetErrorStatus(S) != NULL) {
    (void)fprintf(stderr,"Error during model registration: %s\n",
                  rtmGetErrorStatus(S));
    return 5;
  }

  if ((finaltime >= 0.0) || (finaltime == RUN_FOREVER)) {
    rtmSetTFinal(S,finaltime);
  }

  MdlInitializeSizes();
  MdlInitializeSampleTimes();
  status = rt_SimInitTimingEngine(rtmGetNumSampleTimes(S),
    rtmGetStepSize(S),
    rtmGetSampleTimePtr(S),
    rtmGetOffsetTimePtr(S),
    rtmGetSampleHitPtr(S),
    rtmGetSampleTimeTaskIDPtr(S),
    rtmGetTStart(S),
    &rtmGetSimTimeStep(S),
    &rtmGetTimingData(S));
  if (status != NULL) {
    (void)fprintf(stderr, "Failed to initialize sample time engine: %s\n",
                  status);
    exit(EXIT_FAILURE);
  }

  rt_CreateIntegrationData(S);

  /*   SITglobals.errmsg = rt_StartDataLogging(rtmGetRTWLogInfo(S),
     rtmGetTFinal(S),
     rtmGetStepSize(S),
     &rtmGetErrorStatus(S)); */
  if (SITglobals.errmsg != NULL) {
    (void)fprintf(stderr,"Error starting data logging: %s\n",SITglobals.errmsg);
    return(3);
  }

  MT_InitParamDoubleBuf();
  if (rtmGetErrorStatus(S) != NULL) {
    SITglobals.stopExecutionFlag = 1;
  }

  MTRT_GetModelSpec(NULL, 0, outTimeStep, outNumInports, outNumOutports,
                    numTasks);

#ifdef kMTOSLinux

  InitializeCriticalSection(&SITglobals.taskCriticalSection);
  SITexportglobals.flipCriticalSection = CreateSemaphore(NULL, 1, 1, NULL);
  if (SITexportglobals.flipCriticalSection == NULL) {
    SetSITErrorMessage("Failed to create semaphore.", 1);
  }

#endif

  return MT_OK;
}                                      // end of InitializeModel()

/*========================================================================*
 * Function: MTRT_ModelStart
 *
 * Abstract:
 *	Executes before the first time step and only once within a model's execution.
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_ModelStart(void)
{
  MdlStart();
  MT_InitExternalOutputs();

#if defined(MULTITASKING)              /* MULTITASKING */

  {
    SITglobals.isFirstTimeStep = TRUE;

    // Make sure SampleHits is uptodate
    rt_SimUpdateDiscreteEvents(rtmGetNumSampleTimes(S),
      rtmGetTimingData(S),
      rtmGetSampleHitPtr(S),
      rtmGetPerTaskSampleHitsPtr(S));
  }

#endif                                 // defined(MULTITASKING)

  SITglobals.isModelStarted = true;
  return MT_OK;
}

/*========================================================================*
 * Function: MTRT_ModelUpdate
 *
 * Abstract:
 *	Updates the internal state of the model.
 *
 *	Each call to Schedule() or ScheduleTasks() must be followed by a call to MTRT_ModelUpdate before
 *	the scheduling call can be made again. Decrement our count for entries into the critical section,
 *	signalling the it is no longer safe to probeUpdate states. Leave critical section.
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_ModelUpdate(void)
{
  if (SITexportglobals.inCriticalSection) {
    SITexportglobals.inCriticalSection--;
    MdlUpdate(FIRST_TID);

#if defined(MULTITASKING)

    if (rtmGetSampleTime(S,0) == CONTINUOUS_SAMPLE_TIME) {
      rt_UpdateContinuousStates(S);
    } else {
      rt_SimUpdateDiscreteTaskTime(rtmGetTPtr(S), rtmGetTimingData(S), 0);
    }

#if FIRST_TID == 1

    rt_SimUpdateDiscreteTaskTime(rtmGetTPtr(S), rtmGetTimingData(S),1);

#endif

#else

    rt_SimUpdateDiscreteTaskSampleHits(rtmGetNumSampleTimes(S), rtmGetTimingData
      (S), rtmGetSampleHitPtr(S), rtmGetTPtr(S));
    if (rtmGetSampleTime(S,0) == CONTINUOUS_SAMPLE_TIME) {
      rt_UpdateContinuousStates(S);
    }

#endif

#ifdef kMTOSLinux

    ReleaseSemaphore(SITexportglobals.flipCriticalSection,1,NULL);

#endif

  }

  return SITexportglobals.inCriticalSection;
}

DLL_EXPORT int32_t MTRT_ModelUpdate1(void)
{
  MdlUpdate(FIRST_TID);
  return SITexportglobals.inCriticalSection;
}

/*========================================================================*
 * Function: MTRT_StepBaseTask
 *
 * Abstract:
 *	Takes a time step on the base task of a multi-rate model.
 *
 * Input Parameters:
 *	inData	: Points to an array of elements sent to the model inports
 *
 * Output Parameters:
 *	outData	: Points to an array of elements sent to the model outports
 *	outTime	: Used to return the current model time.  Ignored if it is NULL
 *
 * Returns:
 *	MT_OK if no error
   ========================================================================*/
DLL_EXPORT int32_t MTRT_StepBaseTask(double *inData, double *outTime, double
  *outData)
{

#ifndef MULTITASKING

  SetSITErrorMessage("Called StepBaseTask() for a single-rate model.  Use Schedule() instead.",
                     1);
  return MT_ERROR;

#else

  int32_t i = 0;
  int32_t lastStep = 1;
  int_T *sampleHits = rtmGetSampleHitPtr(S);

  // donot increment the time..
  if (outTime != NULL) {
    *outTime = rtmGetT(S);
  }

  /* Critical section is used to prevent the background loop from switching parameters
     sets while the baserate is running.  On a single core system this can not happen, but
     on a multi-core system the baserate and background can be executing at the same time. */
  WaitForSingleObject(SITexportglobals.flipCriticalSection, INFINITE);
  if (SITexportglobals.inCriticalSection > 0) {
    SetSITErrorMessage("Each call to StepBaseTask() MUST be followed by a call to ModelUpdate() before StepBaseTask() is called again.",
                       1);
    ReleaseSemaphore(SITexportglobals.flipCriticalSection, 1, NULL);
    return 1;
  }

  /* For each task other than the base rate copy parameters if there are new ones.
     Since the task is about the be scheduled it should not be executing at the moment
     so copying the parameters will be safe.
   */
# ifdef MT_SIT_PARAMS

  for (i = 1; i < NUMST - TID01EQ; i++) {
    if (sampleHits[i + TID01EQ] && (SITexportglobals.copyTaskBitfield & (1 << i)))
    {
      memcpy(param_lookup[i+TID01EQ][1-READSIDE], param_lookup[0][READSIDE],
             sizeof(MT_PARAM_TYPEDEF));
      SITexportglobals.copyTaskBitfield &= ~(1 << i);
    }
  }

# endif

  //If stopExecutionFlag is true we have had an error
  if (!SITglobals.stopExecutionFlag) {
    if ((rtmGetTFinal(S) == RUN_FOREVER) || ((rtmGetTFinal(S) - rtmGetT(S)) >
         (rtmGetT(S) *DBL_EPSILON))) {
      rt_OneStepTask(S,FIRST_TID, inData);
      lastStep = rtmGetStopRequested(S);
    } else if (!rtmGetStopRequested(S)) {// take last step
      rt_OneStepTask(S,FIRST_TID, inData);
    }

    /* Update outports */
    SetExternalOutputs(outData, sampleHits);
  }

  SITexportglobals.inCriticalSection++;

  /* Reset first run flag */
  SITglobals.isFirstTimeStep = FALSE;
  return SITglobals.stopExecutionFlag | lastStep;

#endif

}

/*========================================================================*
 * Function: MTRT_Schedule
 *
 * Abstract:
 *	Scheduler behaves traditionally for singletasking (Get Inputs, Take Step, Post Outputs).
 *	For multitasking, the outputs are delayed by one time step.
 *
 *	This scheduler ignores dispatchtasks input as all tasks are dispatched based on their sample
 *	rate information alone. This is done externally by timed loops.
 *
 * Input Parameters:
 *	inData	: Points to an array of elements sent to the model inports
 *
 * Output Parameters:
 *	outData	: Points to an array of elements sent to the model outports
 *	outTime	: Used to return the current model time.  Ignored if it is NULL
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_Schedule(double *inData, double *outData, double
  *outTime, int32_t *dispatchtasks)
{

#ifdef MULTITASKING

  SetSITErrorMessage("Called Schedule() for a multi-rate model.  Use ScheduleTasks2() instead.",
                     1);
  return MT_ERROR;

#else

  int32_t lastStep = 1;
  if (outTime != NULL) {
    *outTime = rtmGetT(S);
  }

#ifdef kMTOSLinux

  WaitForSingleObject(SITexportglobals.flipCriticalSection, INFINITE);

#endif

  if (SITexportglobals.inCriticalSection > 0) {
    SetSITErrorMessage("Each call to Schedule() MUST be followed by a call to ModelUpdate() before Schedule() is called again.",
                       1);

#ifdef kMTOSLinux

    ReleaseSemaphore(SITexportglobals.flipCriticalSection, 1, NULL);

#endif

    return 1;
  }

  if (!SITglobals.stopExecutionFlag && ((rtmGetTFinal(S) == RUN_FOREVER) ||
       ((rtmGetTFinal(S) - rtmGetT(S)) > (rtmGetT(S) * DBL_EPSILON)))) {
    rt_OneStep(S, inData);
    lastStep = rtmGetStopRequested(S);
  } else if (!SITglobals.stopExecutionFlag && !rtmGetStopRequested(S)) {
    // take last step
    rt_OneStep(S, inData);
  }

  SetExternalOutputs(outData, rtmGetSampleHitPtr(S));// push outport data out to LabVIEW
  SITexportglobals.inCriticalSection++;
  return lastStep;

#endif

}

//standalone
DLL_EXPORT int32_t MTRT_Schedule1(double *inData, double *outData, double
  *outTime, int32_t *dispatchtasks)
{
  //real_T tnext = 0;
  int_T *sampleHit = rtmGetSampleHitPtr(S);

  /***********************************************
   * Check and see if base step time is too fast *
   ***********************************************/

  /* enable interrupts here */
  SetExternalInputs(inData, sampleHit);
  MdlOutputs(0);
  SetExternalOutputs(outData, rtmGetSampleHitPtr(S));// push outport data out to LabVIEW
}

/*========================================================================*
 * Function: MTRT_TakeOneStep
 *
 * Abstract:
 *	Takes one time step for a single-rate model.
 *
 * Input Parameters:
 *	inData	: Points to an array of elements sent to the model inports
 *
 * Output Parameters:
 *	outData	: Points to an array of elements sent to the model outports
 *	outTime	: Used to return the current model time.  Ignored if it is NULL
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_TakeOneStep(double *inData, double *outData, double
  *outTime)
{
  return MTRT_Schedule(inData, outData, outTime, NULL);
}

/*========================================================================*
 * Function: MTRT_TaskTakeOneStep
 *
 * Abstract:
 *	Steps the specified task one time step.
 *
 * Input Parameters:
 *	tid	: the task ID
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_TaskTakeOneStep(int32_t tid)
{

#if defined(MULTITASKING)

  return rt_OneStepTask(S,tid, NULL);

#else

  return MT_OK;

#endif

}

/*========================================================================*
 * Function: MTRT_FinalizeModel
 *
 * Abstract:
 *	Releases resources. Called after simulation stops.
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_FinalizeModel(void)
{
  // rt_StopDataLogging(MATFILE,rtmGetRTWLogInfo(S));
  if (SITglobals.errmsg != NULL) {
    (void)fprintf(stderr,"%s\n",SITglobals.errmsg);
    return MT_ERROR;
  }

  if (rtmGetErrorStatus(S) != NULL) {
    (void)fprintf(stderr,"%s\n", rtmGetErrorStatus(S));
    return MT_ERROR;
  }

  /* Clean up model resources that were set up during Model Start */
  if (SITglobals.isModelStarted) {
    MdlTerminate();
  }

#ifdef kMTOSLinux

  DeleteCriticalSection(&SITglobals.taskCriticalSection);
  CloseHandle(SITexportglobals.flipCriticalSection);

#endif

  return MT_OK;
}                                      /* end FinalizeModel */

/*========================================================================*
 * Function: MTRT_GetErrorMessageLength
 *
 * Abstract:
 *	Gets the length of the error message.
 *
 * Returns:
 *	Length of the error message.
 *========================================================================*/
DLL_EXPORT int32_t MTRT_GetErrorMessageLength(void)
{
  int32_t retval = 0;
  if (SITglobals.errmsg != NULL) {
    retval = strlen(SITglobals.errmsg);
  } else if (rtmGetErrorStatus(S) != NULL) {
    retval = strlen(rtmGetErrorStatus(S));
  } else {
    /* No error message length */
    retval = 0;
  }

  return retval;
}

/*========================================================================*
 * Function: MTRT_ModelError
 *
 * Abstract:
 *	Check for any simulation errors.
 *
 * Input/Output Parameters:
 *	msglen	: (in) length of input string (out) length of output string
 *
 * Output Parameters:
 *	errmsg	: string containing error message (if any occurred).
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_ModelError(char* errmsg, int32_t *msglen)
{
  int32_t retVal = MT_OK;
  const char *sysmsg = NULL;
  const char *simStoppedMsg =
    "The model simulation was stopped, but no reason was specified. This may be expected behavior.";
  if ((SITglobals.errmsg != NULL) || (rtmGetErrorStatus(S) != NULL)) {
    /* Set error condition */
    retVal = MT_ERROR;
    if (*msglen > 0) {
      /* Get system error message */
      if (SITglobals.errmsg != NULL) {
        sysmsg = SITglobals.errmsg;
      } else {
        sysmsg = rtmGetErrorStatus(S);
      }

      /* Copy message */
      if (*msglen > (int32_t)strlen(sysmsg)) {
        *msglen = strlen(sysmsg);
      }

      strncpy(errmsg, sysmsg, *msglen);
    }
  } else if (SITglobals.stopExecutionFlag == 1) {
    /* No error */
    retVal = MT_OK;

    /* Execution stopped, but without a message. Return generic message. */
    if (*msglen > 0) {
      if (*msglen > (int32_t)strlen(simStoppedMsg)) {
        /* Get error message */
        *msglen = strlen(simStoppedMsg);
      }

      /* Return error message */
      strncpy(errmsg, simStoppedMsg, *msglen);
    }
  } else {
    /* No error */
    retVal = MT_OK;
    *msglen = 0;
  }

  return retVal;
}

//extern const MT_Task MT_TaskList[];
//extern const int32_t MT_NumTasks;

/*========================================================================*
 * Function: MTRT_TaskRunTimeInfo
 *
 * Abstract:
 *	called in background loop. Returns number of overruns of tasks in the simulation overloading this function
 *	to set the HALT ON TASK OVERRUN flag halt = 1: do not halt, 2: halt.
 *
 *========================================================================*/
DLL_EXPORT int32_t MTRT_TaskRunTimeInfo(int32_t halt, int32_t* overruns, int32_t
  *numtasks)
{
  int32_t TaskOverrun = 0;
  int32_t i = 0;
  if (halt) {
    SITglobals.haltonOverrun = halt-1;
  }

  for (i=0; i<NUMST-TID01EQ; i++) {
    TaskOverrun+= overruns[i] = SITglobals.overrunCount[i+FIRST_TID];
  }

  *numtasks = NUMST;
  return TaskOverrun;
}

/*========================================================================*
 * Function: MTRT_GetTaskSpec
 *
 * Abstract:
 *	Returns a model's multirate task specifications
 *
 * Input Parameters:
 *	index	: index of the task
 *
 * Output Parameters:
 *	tid		: task ID. This may not necessarily be the index of task in task list.
 *	tstep	: time step for this task
 *	offset	:
 *
 * Returns:
 *	MT_OK if no error. (if index == -1, return number of tasks in the model)
 *========================================================================*/
DLL_EXPORT int32_t MTRT_GetTaskSpec(int32_t index, int32_t *tID, double *tstep,
  double *offset)
{
  if ((index < 0) || (index >= MT_NumTasks) ) {
    return MT_NumTasks;
  }

  if (tID != NULL) {
    *tID = MT_TaskList[index].tid;
  }

  if (tstep != NULL) {
    *tstep = MT_TaskList[index].tstep;
  }

  if (offset != NULL) {
    *offset = MT_TaskList[index].offset;
  }

  return MT_OK;
}

/*========================================================================*
 * Function: MTRT_GetModelSpec
 *
 * Abstract:
 *	Get the model information without initializing.
 *
 * Output Parameters:
 *	name			: name of the model
 *	namelen			: the name string length. If a value of "-1" is specified, the minimum buffer size of "name" is returned
 *	baseTimeStep	: base time step of the model
 *	outNumInports	: number of external inputs
 *	outNumOutports	: number of external outputs
 *	numtasks		: number of Tasks (including the base rate task)
 *
 * Returns:
 *	MT_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t MTRT_GetModelSpec(char* name, int32_t *namelen, double
  *baseTimeStep,
  int32_t *outNumInports, int32_t *outNumOutports, int32_t *numTasks)
{
  // fill name buffer to min of namelen or namelen
  if (namelen != NULL) {
    int32_t i = 0;
    int32_t length = 0;

    /* Get the char length, not including the terminating char */
    length = (int32_t)strlen(QUOTE(MODEL));
    if (*namelen == -1) {
      /* Return the required minimum buffer size */
      *namelen = length;
    } else if (name != NULL) {
      if (*namelen > length) {
        *namelen = length;
      }

      strncpy(name, QUOTE(MODEL), *namelen);
      for (i=0; i<*namelen; i++) {
        /* Transform each character to lowercase*/
        name[i] = (char) tolower(name[i]);
      }
    }
  }

  if (baseTimeStep != NULL) {
    *baseTimeStep = MT_TaskList[0].tstep;
  }

  if (outNumInports != NULL) {
    *outNumInports = NumInputPorts();
  }

  if (outNumOutports != NULL) {
    *outNumOutports = NumOutputPorts();
  }

  if (numTasks != NULL) {

#if !defined(MULTITASKING)             /* SINGLETASKING */

    *numTasks = 1;

#else

    *numTasks = MT_NumTasks;

#endif

  }

  return MT_OK;
}
