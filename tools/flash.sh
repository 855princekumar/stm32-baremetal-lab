#!/bin/bash

# This script is used to flash the compiled firmware onto the STM32 microcontroller.

# Check if the required arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <path_to_firmware> <target_device>"
    exit 1
fi

FIRMWARE_PATH=$1
TARGET_DEVICE=$2

# Check if the firmware file exists
if [ ! -f "$FIRMWARE_PATH" ]; then
    echo "Error: Firmware file '$FIRMWARE_PATH' not found!"
    exit 1
fi

# Flash the firmware using OpenOCD
openocd -f openocd.cfg -c "program $FIRMWARE_PATH verify reset exit" -c "init" -c "reset run"

if [ $? -eq 0 ]; then
    echo "Firmware flashed successfully to $TARGET_DEVICE."
else
    echo "Error: Failed to flash firmware to $TARGET_DEVICE."
    exit 1
fi