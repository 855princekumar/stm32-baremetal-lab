# STM32 Bare Metal Lab Guide

Welcome to the STM32 Bare Metal Lab Guide! This repository is designed to provide students with a comprehensive hands-on experience in embedded systems programming using STM32 microcontrollers. The labs cover a range of topics from basic GPIO manipulation to advanced real-time operating system (RTOS) integration.

<img width="250" height="250" alt="image" src="https://github.com/user-attachments/assets/5d753ccf-4845-474e-9b20-a830c16e5da9" />

## Table of Contents

- [Overview](#overview)
- [Getting Started](#getting-started)
- [Lab Sessions](#lab-sessions)
- [Documentation](#documentation)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project aims to equip students with the necessary skills to develop embedded applications using STM32 microcontrollers. Each lab session is structured to build upon the previous one, gradually introducing more complex concepts and techniques.

## Getting Started

To get started with this lab guide, follow these steps:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/855princekumar/stm32-baremetal-lab.git
   cd stm32-baremetal-lab
   ```

2. **Install Required Tools**:
   Ensure you have the following tools installed:
   - ARM GCC Toolchain
   - OpenOCD for programming and debugging
   - Make utility for building the projects

3. **Build the Project**:
   Navigate to the desired lab directory and run:
   ```bash
   make
   ```

4. **Flash the Firmware**:
   Use the provided `flash.sh` script to flash the compiled firmware onto the STM32 microcontroller:
   ```bash
   ./tools/flash.sh
   ```

## Lab Sessions

The lab sessions are organized as follows:

1. **Lab 01: Blink** - Introduction to GPIO and LED blinking.
2. **Lab 02: USART** - Implementing serial communication using USART.
3. **Lab 03: Timers** - Exploring timer functionalities.
4. **Lab 04: ADC/DAC** - Working with analog-to-digital and digital-to-analog converters.
5. **Lab 05: I2C/SPI** - Communication protocols for interfacing with peripherals.
6. **Lab 06: RTOS Integration** - Integrating a real-time operating system into the application.

Each lab has its own directory containing source code, a Makefile, and a README file with detailed instructions and objectives.

## Documentation

Additional documentation can be found in the `docs` directory, including:

- **Syllabus**: Overview of topics covered in the lab sessions.
- **Lab Schedule**: Timeline for each lab session.
- **Reference Materials**: Datasheets and application notes relevant to STM32.

## Contributing

Contributions are welcome! Please refer to the `CONTRIBUTING.md` file for guidelines on how to contribute to this project.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

---

We hope you find this lab guide helpful and engaging as you explore the world of embedded systems with STM32 microcontrollers! Happy coding!
