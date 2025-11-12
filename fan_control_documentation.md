# FanControl Project Documentation

## 1. Project Description
The FanControl project simulates and controls a fan based on the temperature of a system, such as a motor or an industrial process.

- The system monitors the temperature and adjusts the fan speed automatically.
- Temperature changes follow different phases: stable, increasing, holding, decreasing, and oscillating.
- The model is built in Simulink and includes blocks to process the input temperature, control logic, and display outputs.

## 2. Project Objectives
- Simulate temperature-dependent fan control.
- Visualize system behavior and temperature response.
- Understand interaction between input signals, control logic, and output displays.

## 3. Tools and Technologies
- MATLAB R2025a
- Simulink for modeling and simulation
- Stateflow (used for control logic)
- Simulink Coder for optional C code generation

## 4. Model Structure
The Simulink model consists of the following main blocks:

1. **From Workspace**
   - Role: Receives the temperature input signal from MATLAB or predefined source.
   - Function: Provides dynamic temperature data to the control system.

2. **Control Logic / Controller Block**
   - Role: Implements the fan control strategy.
   - Function: Determines fan operation (on/off) based on temperature input.

3. **Fan Actuator / Output Block**
   - Role: Represents the fan .
   - Function: Shows the effect of the controller on the fan behavior.

4. **Display / Scope**
   - Role: Visualizes the temperature signal and control response.
   - Function: Allows monitoring of system behavior over time.

5. **Interconnections / Signal Lines**
   - Role: Connects all blocks to ensure proper signal flow.
   - Function: Ensures that input, processing, and outputs communicate correctly.

## 5. System Behavior
- The system monitors temperature continuously.
- The controller adjusts the fan based on temperature trends.
- Outputs are visualized on Display or Scope for real-time observation.

## 6. Conclusion
- The FanControl model demonstrates automatic temperature-based fan control.
- It provides a clear structure of input, control, and output blocks in Simulink.

