# UART Communication Example for STM32 Bare Metal Lab

## Overview

This document provides a comprehensive guide to using UART (Universal Asynchronous Receiver-Transmitter) communication in STM32 microcontrollers. UART is a widely used protocol for serial communication, allowing for the exchange of data between devices. This example demonstrates how to set up and use UART for basic communication tasks.

## Objectives

- Understand the basics of UART communication.
- Configure the UART peripheral on the STM32 microcontroller.
- Implement a simple program to send and receive data over UART.
- Utilize a terminal program to interact with the STM32 device.

## Prerequisites

Before starting this lab, ensure you have the following:

- STM32 development board (e.g., STM32F4 Discovery).
- STM32CubeIDE or any compatible development environment.
- USB to UART converter (if not using onboard UART).
- Terminal software (e.g., PuTTY, Tera Term) installed on your computer.

## Hardware Setup

1. **Connect the STM32 Board**: 
   - If using an external USB to UART converter, connect the TX pin of the converter to the RX pin of the STM32 and the RX pin of the converter to the TX pin of the STM32.
   - Connect the GND of the converter to the GND of the STM32 board.

2. **Power the STM32 Board**: Ensure that the STM32 board is powered on.

## Software Setup

1. **Clone the Repository**: Clone the STM32 Bare Metal Lab repository to your local machine.

   ```
   git clone https://github.com/yourusername/stm32-baremetal-lab.git
   ```

2. **Navigate to the UART Example**:

   ```
   cd stm32-baremetal-lab/examples/uart
   ```

3. **Build the Project**: Use the provided Makefile to compile the project.

   ```
   make
   ```

4. **Flash the Firmware**: Use the provided `flash.sh` script to upload the compiled firmware to the STM32 microcontroller.

   ```
   ./flash.sh
   ```

## Code Explanation

The main functionality of the UART communication is implemented in `main.c`. Below is a brief overview of the key components:

- **Initialization**: The UART peripheral is initialized with the desired baud rate, word length, stop bits, and parity settings.
- **Sending Data**: A function is provided to send data over UART.
- **Receiving Data**: A function is implemented to receive data from UART.

### Example Code Snippet

```c
#include "stm32f4xx.h" // Include the appropriate header for your STM32 series

void UART_Init(void) {
    // Initialization code for UART peripheral
}

void UART_Send(char *data) {
    // Code to send data over UART
}

char UART_Receive(void) {
    // Code to receive data from UART
}

int main(void) {
    UART_Init();
    
    while (1) {
        UART_Send("Hello from STM32!\n");
        // Add delay or receive logic here
    }
}
```

## Testing the UART Communication

1. **Open Terminal Software**: Launch your terminal program and configure it to the correct COM port with the following settings:
   - Baud Rate: 9600 (or as configured in your code)
   - Data Bits: 8
   - Stop Bits: 1
   - Parity: None

2. **Run the Program**: After flashing the firmware, you should see the message "Hello from STM32!" being sent repeatedly in the terminal.

3. **Send Data**: You can also send data from the terminal to the STM32. Implement the receiving logic in your code to handle incoming data.

## Conclusion

This example demonstrates the basic setup and usage of UART communication in STM32 microcontrollers. You can expand upon this example by implementing more complex communication protocols or integrating it with other peripherals.

## References

- STM32 Reference Manual
- STM32 HAL Library Documentation
- UART Communication Protocol Documentation

Feel free to modify and expand this example as needed for your specific applications and projects!