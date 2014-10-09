micromouse
==========

Code for an autonomous maze-solving robot.

Modules
-------

  * **micromouse-stm32**: Firmware for the physical robot, running on an STM32F405 microcontroller
  * **micromouse-gazebo**: Simulation of a virtual robot, based on the Gazebo robotics simulation platform
  * **micromouse-common**: The high-level logic of the robot, shared between the *stm32* and *gazebo* implementations

STM32 Debugging Workflow
------------------------

  1. Connect the micromouse to the ST-Link/V2 via SWD (**IMPORTANT: red wire corresponds to the dot on the ST-Link/V2**).
  2. Connect the ST-Link/V2 to your computer via USB.
  3. Power on the robot.
  4. Open a terminal window.
    1. `cd` to the `micromouse-stm32` directory.
    2. Run `./openocd.sh`.
    3. The last line in the terminal should be `Info : stm32f4x.cpu: hardware has 6 breakpoints, 4 watchpoints`. Target voltage should be around 2.9V. If not, **STOP** and power off the robot. Ask for help.
  5. Select the "micromouse-stm32" project in Eclipse.
  6. Select the "micromouse-stm32 Debug" debug configuration (click on the dropdown arrow beside the "bug" icon on the toolbar)
  7. The binary will upload and begin to run.
  8. **When you want to debug again**:
    1. Click the "stop" button in the toolbar (the red square). Otherwise, openocd will start rejecting connections.
    2. Start from step (6) again.
  9. **When you are done**:
    1. Click the "stop" button in the toolbar.
    2. Reopen the terminal window where openocd is running. Type `Ctrl-C` to quit openocd.
    3. Power off the robot.
