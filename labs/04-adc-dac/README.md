# ADC and DAC Lab Guide

## Overview
This lab focuses on the usage of the Analog-to-Digital Converter (ADC) and Digital-to-Analog Converter (DAC) available in STM32 microcontrollers. Students will learn how to configure and utilize these peripherals to read analog signals and generate analog outputs.

## Objectives
- Understand the principles of ADC and DAC.
- Configure the ADC to read analog signals from sensors.
- Use the DAC to output analog signals.
- Implement basic signal processing techniques.

## Prerequisites
Before starting this lab, students should be familiar with:
- Basic concepts of microcontroller programming.
- C programming language.
- Previous labs, especially those covering GPIO and timers.

## Hardware Requirements
- STM32 development board (e.g., STM32F4 Discovery)
- Potentiometer (for ADC input)
- Signal generator or function generator (for DAC output)
- Multimeter or oscilloscope (for measuring output signals)

## Software Requirements
- STM32CubeIDE or any compatible IDE for STM32 development.
- STM32 HAL library for peripheral management.

## Lab Setup
1. **Wiring the Circuit**:
   - Connect the potentiometer to an ADC pin on the STM32 board.
   - Connect the DAC output pin to an oscilloscope or multimeter to observe the output signal.

2. **Project Structure**:
   - Navigate to the `labs/04-adc-dac` directory in your project.
   - Open the `main.c` file to review the code that configures the ADC and DAC.

## Code Explanation
The `main.c` file contains the following key sections:
- **Initialization**: Configures the ADC and DAC peripherals.
- **Main Loop**: Continuously reads the ADC value and outputs a corresponding value to the DAC.

### Example Code Snippet
```c
#include "board.h"

void setup() {
    // Initialize ADC and DAC
    ADC_Init();
    DAC_Init();
}

void loop() {
    uint32_t adcValue = ADC_Read();
    DAC_Write(adcValue);
}
```

## Testing
1. Compile the project using the provided Makefile.
2. Flash the firmware onto the STM32 board using the `flash.sh` script.
3. Observe the output on the oscilloscope or multimeter as you adjust the potentiometer.

## Troubleshooting
- Ensure all connections are secure.
- Verify that the correct ADC and DAC pins are used in the code.
- Check for any compilation errors and resolve them before flashing.

## Conclusion
By the end of this lab, students will have hands-on experience with ADC and DAC functionalities in STM32 microcontrollers, enabling them to interface with various analog sensors and actuators in future projects.

## Further Reading
- STM32 Reference Manual for ADC and DAC.
- Application notes on signal processing techniques.
- Explore more advanced topics such as DMA for ADC and DAC operations.