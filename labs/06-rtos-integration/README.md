# RTOS Integration Lab Guide

## Overview

In this lab, we will explore the integration of a Real-Time Operating System (RTOS) into an STM32 bare-metal application. The purpose of this lab is to familiarize students with the concepts of multitasking, inter-task communication, and resource management using an RTOS. We will use FreeRTOS as our RTOS of choice due to its popularity and extensive documentation.

## Objectives

By the end of this lab, students will be able to:

1. Understand the basic concepts of RTOS and its advantages over bare-metal programming.
2. Set up FreeRTOS in an STM32 project.
3. Create multiple tasks and manage their execution.
4. Implement inter-task communication using queues and semaphores.
5. Analyze the behavior of tasks and system performance.

## Prerequisites

Before starting this lab, ensure that you have completed the following labs:

- Lab 01: LED Blinking
- Lab 02: USART Communication
- Lab 03: Timers
- Lab 04: ADC and DAC
- Lab 05: I2C and SPI

## Setup Instructions

1. **Clone the Repository**: Ensure you have cloned the `stm32-baremetal-lab` repository to your local machine.

   ```bash
   git clone https://github.com/yourusername/stm32-baremetal-lab.git
   cd stm32-baremetal-lab
   ```

2. **Install FreeRTOS**: Download the FreeRTOS kernel and include it in your project. You can find the latest version on the [FreeRTOS website](https://www.freertos.org/).

3. **Configure the Project**: Update the `Makefile` in the `labs/06-rtos-integration` directory to include the FreeRTOS source files and headers.

4. **Build the Project**: Use the provided Makefile to compile the project.

   ```bash
   make
   ```

5. **Flash the Firmware**: Use the `flash.sh` script to upload the compiled firmware to your STM32 microcontroller.

   ```bash
   ./tools/flash.sh
   ```

## Lab Tasks

### Task 1: Create Tasks

- Implement two tasks: one for blinking an LED and another for sending a message over USART.
- Use the FreeRTOS API to create and manage these tasks.

### Task 2: Inter-Task Communication

- Implement a queue to send messages between the LED task and the USART task.
- Use FreeRTOS queues to facilitate communication and synchronization between tasks.

### Task 3: Resource Management

- Implement a semaphore to manage access to a shared resource (e.g., a variable that counts the number of times the LED has blinked).
- Ensure that tasks properly handle the semaphore to avoid race conditions.

## Testing and Validation

- Verify that both tasks are running concurrently and that the LED blinks at the expected rate.
- Check the USART output to ensure that messages are being sent correctly.
- Monitor the system performance and task execution times using FreeRTOS utilities.

## Conclusion

In this lab, you have learned how to integrate an RTOS into an STM32 bare-metal application. You have gained hands-on experience with task management, inter-task communication, and resource synchronization. These skills are essential for developing complex embedded systems that require real-time capabilities.

## Further Reading

- [FreeRTOS Documentation](https://www.freertos.org/Documentation/RTOS_book.html)
- [STM32 Reference Manual](https://www.st.com/en/microcontrollers-microprocessors/stm32f4-series.html)
- [Embedded Systems: Real-Time Operating Systems for ARM Cortex-M Microcontrollers](https://www.amazon.com/Embedded-Systems-Real-Time-Operating-Microcontrollers/dp/0134995555)

Feel free to reach out if you have any questions or need further assistance!