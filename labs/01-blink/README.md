# Lab 01: LED Blinking

## Objective
The objective of this lab is to familiarize students with the basics of embedded programming using the STM32 microcontroller. In this lab, students will write a simple program to blink an LED on the development board. This exercise will help students understand the GPIO (General Purpose Input/Output) configuration and basic programming concepts in a bare-metal environment.

## Prerequisites
- Basic understanding of C programming.
- Familiarity with embedded systems concepts.
- STM32 development board and necessary tools (e.g., compiler, debugger).

## Hardware Setup
1. **Development Board**: Ensure that the STM32 development board is powered and connected to your computer.
2. **LED Connection**: Identify the GPIO pin connected to the onboard LED. Refer to the board schematic for the exact pin number.

## Software Setup
1. **Toolchain Installation**: Make sure you have the ARM toolchain installed on your system. You can use tools like `gcc-arm-none-eabi`.
2. **Clone the Repository**: Clone the `stm32-baremetal-lab` repository to your local machine.
   ```
   git clone <repository-url>
   ```
3. **Navigate to the Lab Directory**:
   ```
   cd stm32-baremetal-lab/labs/01-blink
   ```

## Building the Project
1. **Compile the Code**: Use the provided Makefile to compile the project.
   ```
   make
   ```
2. **Check for Errors**: Ensure that there are no compilation errors. If there are, review the code and fix any issues.

## Flashing the Firmware
1. **Connect the Programmer**: Connect your ST-Link or any other programmer to the STM32 board.
2. **Flash the Firmware**: Use the provided `flash.sh` script to upload the compiled firmware to the microcontroller.
   ```
   ./flash.sh
   ```

## Running the Program
Once the firmware is flashed successfully, the LED on the development board should start blinking at a regular interval. If the LED does not blink, check the following:
- Ensure the correct GPIO pin is configured in the code.
- Verify the connections and power supply to the board.

## Code Explanation
The main.c file contains the following key components:
- **GPIO Initialization**: Configures the GPIO pin connected to the LED as an output.
- **Main Loop**: Toggles the LED state with a delay to create a blinking effect.

## Conclusion
In this lab, you have successfully created a simple LED blinking application using the STM32 microcontroller. This foundational exercise is crucial for understanding how to interact with hardware at a low level. In future labs, you will build upon this knowledge to explore more complex functionalities.

## Next Steps
- Review the code and try modifying the blink rate.
- Explore additional GPIO functionalities, such as reading input from buttons.

## References
- STM32 Reference Manual
- STM32 GPIO Documentation
- Embedded C Programming Resources

Feel free to reach out if you have any questions or need further assistance!