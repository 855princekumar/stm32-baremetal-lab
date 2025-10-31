# Makefile for STM32 Bare Metal Lab

# Define the compiler and the flags
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -Wall -Wextra -g
LDFLAGS = -T firmware/linker/stm32_flash.ld

# Define the directories
SRC_DIR = firmware/src
INC_DIR = firmware/inc
LABS_DIR = labs
BUILD_DIR = build

# List of labs
LABS = 01-blink 02-usart 03-timers 04-adc-dac 05-i2c-spi 06-rtos-integration

# Default target
all: $(LABS)

# Build each lab
$(LABS):
	$(MAKE) -C $(LABS_DIR)/$@

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)/*.o $(BUILD_DIR)/*.elf $(BUILD_DIR)/*.bin $(BUILD_DIR)/*.hex

# Flash the firmware (requires OpenOCD and a configuration file)
flash:
	openocd -f tools/openocd.cfg -c "program $(BUILD_DIR)/$< verify reset exit"

.PHONY: all clean flash $(LABS)