/*
 * File: FanControl.c
 *
 * Code generated for Simulink model 'FanControl'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Nov 13 00:01:20 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FanControl.h"
#include "rtwtypes.h"

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
}

/* Model initialize function */
void FanControl_initialize(void)
{
  /* (no initialization code required) */
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
