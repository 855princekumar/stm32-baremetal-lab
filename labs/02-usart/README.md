# USART Communication Lab Guide

## Overview
This lab focuses on implementing and understanding USART (Universal Synchronous/Asynchronous Receiver/Transmitter) communication using the STM32 microcontroller. Students will learn how to configure USART peripherals, send and receive data, and utilize interrupts for efficient communication.

## Objectives
- Understand the basics of USART communication.
- Configure the USART peripheral on the STM32 microcontroller.
- Implement a simple echo program that sends data from the PC to the STM32 and back.
- Utilize interrupts for handling USART data reception.

## Prerequisites
Before starting this lab, ensure you have completed the following:
- Familiarity with basic C programming.
- Completion of Lab 01: Blink, where you learned to set up the development environment and compile a simple program.

## Hardware Requirements
- STM32 development board (e.g., STM32F4 Discovery)
- USB to UART converter (if not using onboard USB)
- Jumper wires for connections

## Software Requirements
- STM32CubeIDE or any compatible IDE for STM32 development.
- OpenOCD for flashing the firmware onto the STM32 microcontroller.

## Setup Instructions
1. **Connections**:
   - Connect the USART TX pin of the STM32 to the RX pin of the USB to UART converter.
   - Connect the USART RX pin of the STM32 to the TX pin of the USB to UART converter.
   - Connect the ground (GND) of the STM32 to the ground of the USB to UART converter.

2. **Project Setup**:
   - Navigate to the `labs/02-usart` directory in your project.
   - Open the `Makefile` and ensure the paths and settings are correct for your environment.

3. **Build the Project**:
   - Open a terminal in the `labs/02-usart` directory.
   - Run the command `make` to compile the project.

4. **Flash the Firmware**:
   - Use the provided `flash.sh` script to flash the compiled firmware onto the STM32.
   - Ensure your STM32 is connected to your computer via the USB to UART converter.

5. **Open a Serial Terminal**:
   - Use a serial terminal application (e.g., PuTTY, Tera Term) to connect to the COM port associated with the USB to UART converter.
   - Set the baud rate to 115200, with 8 data bits, no parity, and 1 stop bit (115200 8N1).

## Code Explanation
The main source file `main.c` contains the implementation of USART communication. Key sections include:
- Initialization of the USART peripheral.
- Configuration of GPIO pins for USART functionality.
- Implementation of the transmit and receive functions.
- Use of interrupts to handle incoming data.

## Testing
1. Open the serial terminal and type a message.
2. Press Enter to send the message.
3. The STM32 should echo back the received message.

## Troubleshooting
- If you do not see any output in the terminal, check the connections and ensure the correct COM port is selected.
- Verify that the baud rate and other serial settings match those configured in the firmware.

## Conclusion
In this lab, you have successfully implemented USART communication on the STM32 microcontroller. You learned how to configure the USART peripheral, send and receive data, and handle interrupts. This foundational knowledge will be essential for more advanced communication protocols in future labs.