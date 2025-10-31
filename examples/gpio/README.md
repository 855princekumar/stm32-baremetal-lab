# GPIO Example for STM32 Bare Metal Lab

## Overview

This document provides an overview of the GPIO (General Purpose Input/Output) examples for the STM32 microcontroller. GPIOs are fundamental components in embedded systems, allowing the microcontroller to interact with the external environment. This example will demonstrate how to configure and use GPIO pins for basic input and output operations.

## Objectives

- Understand the basic concepts of GPIO.
- Learn how to configure GPIO pins as input or output.
- Implement simple applications using GPIO, such as blinking an LED or reading a button state.

## Prerequisites

Before starting with the GPIO examples, ensure that you have the following:

- STM32 development board.
- STM32 toolchain installed (e.g., GCC for ARM).
- Basic understanding of C programming and embedded systems.

## GPIO Configuration

### Pin Configuration

To configure a GPIO pin, you need to set the appropriate registers in the STM32 microcontroller. The following steps outline the general process:

1. **Enable the GPIO Clock**: Before configuring any GPIO pin, you must enable the clock for the GPIO port.
2. **Configure the Pin Mode**: Set the mode of the pin (input, output, alternate function, or analog).
3. **Set Output Type**: Choose between push-pull or open-drain for output pins.
4. **Set Pull-up/Pull-down Resistors**: Configure internal pull-up or pull-down resistors if needed.
5. **Set Output Speed**: Define the speed of the output pin (low, medium, high, very high).

### Example Code

Below is a simple example of how to configure a GPIO pin as an output to blink an LED:

```c
#include "board.h"

void delay(volatile uint32_t count) {
    while (count--) {
        __asm("nop");
    }
}

int main(void) {
    // Enable the GPIO clock for port A
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Set PA5 as output
    GPIOA->MODER |= (1 << (5 * 2)); // Set mode to output (01)

    while (1) {
        // Toggle PA5
        GPIOA->ODR ^= (1 << 5);
        delay(100000);
    }
}
```

### Explanation

- The code begins by including the necessary header file for board-specific definitions.
- A simple delay function is implemented using a busy-wait loop.
- The main function enables the clock for GPIOA and configures pin PA5 as an output.
- In an infinite loop, the state of PA5 is toggled, causing an LED connected to this pin to blink.

## Additional Examples

- **Reading a Button State**: Configure a GPIO pin as input to read the state of a button.
- **Using Interrupts**: Set up GPIO interrupts to respond to button presses.

## Conclusion

This GPIO example serves as a foundation for understanding how to interact with hardware using the STM32 microcontroller. By mastering GPIO configuration and usage, you can build more complex applications that involve various peripherals and sensors.

## References

- STM32 Reference Manual
- STM32 HAL Library Documentation
- Online tutorials and resources for STM32 development.