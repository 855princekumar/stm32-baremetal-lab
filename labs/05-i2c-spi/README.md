# I2C and SPI Communication Lab

## Overview
This lab focuses on understanding and implementing I2C (Inter-Integrated Circuit) and SPI (Serial Peripheral Interface) communication protocols using the STM32 microcontroller. Students will learn how to configure the peripherals, establish communication between devices, and troubleshoot common issues.

## Objectives
- Understand the principles of I2C and SPI communication.
- Configure STM32 peripherals for I2C and SPI.
- Implement basic communication between the STM32 and peripheral devices.
- Analyze and troubleshoot communication issues.

## Prerequisites
Before starting this lab, students should be familiar with:
- Basic concepts of microcontroller programming.
- The STM32 development environment setup.
- Previous labs, especially those covering GPIO and USART.

## Hardware Requirements
- STM32 development board (e.g., Nucleo or Discovery series)
- I2C and SPI peripheral devices (e.g., temperature sensor, EEPROM, or OLED display)
- Jumper wires for connections
- Breadboard (optional)

## Software Requirements
- STM32CubeIDE or any compatible IDE
- STM32 HAL library for peripheral configuration
- OpenOCD for flashing the firmware

## Lab Procedure

### Part 1: I2C Communication
1. **Setup the Hardware:**
   - Connect the I2C device to the STM32 board. Ensure proper connections for SDA, SCL, VCC, and GND.
   
2. **Configure I2C in STM32CubeIDE:**
   - Open STM32CubeIDE and create a new project.
   - Enable the I2C peripheral in the configuration settings.
   - Set the appropriate parameters (speed, addressing mode, etc.).

3. **Write the I2C Code:**
   - Implement the I2C communication code in `main.c`.
   - Use HAL library functions to initialize I2C, send, and receive data.

4. **Test the I2C Communication:**
   - Flash the firmware onto the STM32 board.
   - Use a logic analyzer or oscilloscope to verify the I2C signals.
   - Check the data received from the I2C device.

### Part 2: SPI Communication
1. **Setup the Hardware:**
   - Connect the SPI device to the STM32 board. Ensure proper connections for MOSI, MISO, SCK, CS, VCC, and GND.
   
2. **Configure SPI in STM32CubeIDE:**
   - Enable the SPI peripheral in the configuration settings.
   - Set the appropriate parameters (mode, data size, etc.).

3. **Write the SPI Code:**
   - Implement the SPI communication code in `main.c`.
   - Use HAL library functions to initialize SPI, send, and receive data.

4. **Test the SPI Communication:**
   - Flash the firmware onto the STM32 board.
   - Use a logic analyzer or oscilloscope to verify the SPI signals.
   - Check the data received from the SPI device.

## Troubleshooting Tips
- Ensure all connections are secure and correct.
- Verify the configuration settings in STM32CubeIDE.
- Use debugging tools to step through the code and identify issues.
- Consult the datasheets of the I2C and SPI devices for specific requirements.

## Conclusion
By completing this lab, students will gain hands-on experience with I2C and SPI communication protocols, enhancing their understanding of embedded systems and microcontroller applications.