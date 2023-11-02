# Gyroscope-Sensor-for-STM32

This code for a Gyroscope sensor that is intended to be used on a STM32 Microcontroller. Code is based in C code and use with Platform.IO Extension through VSCode

#Set Up

1. PlatformIO Extension: PlatformIO is a popular extension for VSCode that simplifies embedded development for various platforms, including STM32. Install the PlatformIO extension from the Visual Studio Code marketplace by following these steps:

      a. Open VSCode.
      
      b. Click on the "Extensions" icon in the sidebar or press Ctrl+Shift+X.
      
      c. Search for "PlatformIO IDE" in the Extensions marketplace.
      
      d. Install "PlatformIO IDE" by clicking the "Install" button.

2. STM32 CubeMX: STM32CubeMX is a graphical configuration and initialization tool for STM32 microcontrollers. It helps you set up your STM32 project and generate the necessary initialization code. You can download STM32CubeMX from the official STMicroelectronics website: STM32CubeMX.

3. STM32 CubeMX Plugin for PlatformIO: After installing PlatformIO, you can also install the "STM32CubeMX Plugin" to make it compatible with CubeMX. To install this plugin:

      a. In VSCode, click on the "PlatformIO" icon in the sidebar.
      
      b. Go to "Platform" and select "ST STM32."
      
      c. Click "Install" next to "ST CubeMX (advanced settings)."

4. GCC ARM Toolchain: You need a toolchain to compile code for STM32 microcontrollers. You can download the GNU Arm Embedded Toolchain from the ARM website: GNU Arm Embedded Toolchain. Make sure to add the toolchain's bin directory to your system's PATH.

5. STM32 HAL/LL Libraries: Depending on your STM32 microcontroller model, you may need the STM32 Hardware Abstraction Layer (HAL) and Low-Level (LL) libraries. These are typically provided by STMicroelectronics. You can download them from the STMicroelectronics website or use CubeMX to generate the code that includes these libraries.

6. CubeMX Configuration: Use STM32CubeMX to set up your project, configure the microcontroller, pin assignments, and generate initialization code. Ensure that you select "System Workbench for STM32" as the toolchain during project generation.

7. Open Your Project in VSCode: After generating the code with CubeMX, you can open the project folder in VSCode. PlatformIO should automatically detect and configure the project. You can then edit, build, and upload your code to the STM32 microcontroller using VSCode and PlatformIO.
