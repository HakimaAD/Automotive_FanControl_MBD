/*
 * File: FanControl.h
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

#ifndef FanControl_h_
#define FanControl_h_
#ifndef FanControl_COMMON_INCLUDES_
#define FanControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* FanControl_COMMON_INCLUDES_ */

#include "FanControl_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_FanControl;     /* '<Root>/FanStateflow' */
  uint8_T is_c3_FanControl;            /* '<Root>/FanStateflow' */
} DW_FanControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_FanControl_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_FanControl_T FanControl_DW;

/* Model entry point functions */
extern void FanControl_initialize(void);
extern void FanControl_step(void);
extern void FanControl_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FanControl_T *const FanControl_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<Root>/FanStatus_Display' : Unused code path elimination
 * Block '<Root>/FanStatus_out' : Unused code path elimination
 * Block '<Root>/Gain' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Temp_In' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FanControl'
 * '<S1>'   : 'FanControl/FanControlSubsystem'
 * '<S2>'   : 'FanControl/FanStateflow'
 */
#endif                                 /* FanControl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
