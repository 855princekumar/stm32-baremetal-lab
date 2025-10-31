# STM32 Bare Metal Lab Reference Guide

## Introduction
This reference guide serves as a comprehensive resource for students participating in the STM32 Bare Metal Lab sessions. It includes essential documentation, datasheets, application notes, and other relevant materials that will aid in understanding and utilizing the STM32 microcontroller effectively.

## STM32 Microcontroller Overview
The STM32 family of microcontrollers is based on the ARM Cortex-M core, offering a wide range of performance, power efficiency, and peripheral options. This section provides an overview of the STM32 architecture, including:

- **Core Architecture**: Description of the ARM Cortex-M architecture and its features.
- **Memory Organization**: Overview of the memory map, including Flash, SRAM, and peripheral memory regions.
- **Peripheral Overview**: Brief descriptions of the various peripherals available on STM32 microcontrollers, such as GPIO, USART, ADC, DAC, I2C, SPI, and timers.

## Key Resources
### Datasheets
- **STM32 Datasheet**: The official datasheet for the specific STM32 microcontroller being used in the lab. This document provides detailed specifications, electrical characteristics, and pin configurations.

### Reference Manuals
- **STM32 Reference Manual**: A comprehensive guide that details the architecture, peripherals, and programming model of the STM32 microcontroller. It is essential for understanding how to configure and use the various features of the microcontroller.

### Application Notes
- **AN2606 - STM32 Microcontroller System Memory**: This application note provides insights into the system memory and bootloader features of STM32 microcontrollers.
- **AN3156 - STM32F4xx GPIO Programming**: A guide on how to effectively use GPIOs in STM32F4xx microcontrollers, including examples and best practices.

## Development Tools
### IDE and Toolchain
- **IDE**: Recommended Integrated Development Environments (IDEs) for STM32 development, such as STM32CubeIDE or Keil MDK.
- **Toolchain**: Information on the GNU Arm Embedded Toolchain, including installation instructions and usage.

### Debugging Tools
- **OpenOCD**: Open On-Chip Debugger (OpenOCD) is used for programming and debugging STM32 microcontrollers. Configuration files and usage instructions can be found in the `tools` directory of this repository.

## Coding Standards
This section outlines the coding standards and best practices to follow while developing firmware for STM32 microcontrollers. Key points include:

- **Naming Conventions**: Guidelines for naming variables, functions, and files.
- **Code Structure**: Recommendations for organizing code into modules and files for better readability and maintainability.
- **Commenting and Documentation**: Best practices for writing comments and documentation to enhance code clarity.

## Additional References
- **STM32CubeMX**: A graphical tool that helps configure STM32 microcontrollers and generate initialization code.
- **HAL and LL Libraries**: Overview of the Hardware Abstraction Layer (HAL) and Low-Layer (LL) libraries provided by STMicroelectronics for easier peripheral management.

## Conclusion
This reference guide is intended to support students throughout their lab sessions, providing them with the necessary resources and information to successfully complete their projects. For any questions or further assistance, please refer to the `CONTRIBUTING.md` file for guidance on how to seek help or contribute to the project.