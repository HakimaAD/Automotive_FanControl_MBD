/*
 * File: FanControl.c
 *
 * Code generated for Simulink model 'FanControl'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Nov 12 21:38:29 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FanControl.h"
#include "rtwtypes.h"
#include "FanControl_private.h"

/* Named constants for Chart: '<Root>/FanStateflow' */
#define FanControl_IN_Fan_OFF          ((uint8_T)1U)

/* Block states (default storage) */
DW_FanControl_T FanControl_DW;

/* Real-time model */
static RT_MODEL_FanControl_T FanControl_M_;
RT_MODEL_FanControl_T *const FanControl_M = &FanControl_M_;

/* Model step function */
void FanControl_step(void)
{
  /* Chart: '<Root>/FanStateflow' */
  if (FanControl_DW.is_active_c3_FanControl == 0U) {
    FanControl_DW.is_active_c3_FanControl = 1U;
    FanControl_DW.is_c3_FanControl = FanControl_IN_Fan_OFF;
  } else {
    switch (FanControl_DW.is_c3_FanControl) {
     case FanControl_IN_Fan_OFF:
      break;

     default:
      /* case IN_Fan_ON: */
      FanControl_DW.is_c3_FanControl = FanControl_IN_Fan_OFF;
      break;
    }
  }

  /* End of Chart: '<Root>/FanStateflow' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  FanControl_M->Timing.t[0] =
    ((time_T)(++FanControl_M->Timing.clockTick0)) *
    FanControl_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.002, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    FanControl_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void FanControl_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&FanControl_M->solverInfo,
                          &FanControl_M->Timing.simTimeStep);
    rtsiSetTPtr(&FanControl_M->solverInfo, &rtmGetTPtr(FanControl_M));
    rtsiSetStepSizePtr(&FanControl_M->solverInfo,
                       &FanControl_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&FanControl_M->solverInfo, (&rtmGetErrorStatus
      (FanControl_M)));
    rtsiSetRTModelPtr(&FanControl_M->solverInfo, FanControl_M);
  }

  rtsiSetSimTimeStep(&FanControl_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&FanControl_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&FanControl_M->solverInfo, false);
  rtsiSetSolverName(&FanControl_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(FanControl_M, &FanControl_M->Timing.tArray[0]);
  FanControl_M->Timing.stepSize0 = 0.002;
}

/* Model terminate function */
void FanControl_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
