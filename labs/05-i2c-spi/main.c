#include "board.h"
#include <stdint.h>
#include <stdbool.h>

void I2C_Init(void);
void SPI_Init(void);
void I2C_Transmit(uint8_t address, uint8_t *data, uint16_t size);
void SPI_Transmit(uint8_t *data, uint16_t size);

int main(void) {
    // Initialize the board
    Board_Init();

    // Initialize I2C and SPI peripherals
    I2C_Init();
    SPI_Init();

    // Example data to transmit
    uint8_t i2c_data[] = {0x01, 0x02, 0x03};
    uint8_t spi_data[] = {0xA5, 0x5A, 0xFF};

    // Transmit data over I2C
    I2C_Transmit(0x50, i2c_data, sizeof(i2c_data));

    // Transmit data over SPI
    SPI_Transmit(spi_data, sizeof(spi_data));

    while (1) {
        // Main loop
    }
}

void I2C_Init(void) {
    // Configure I2C peripheral settings
    // Set clock speed, addressing mode, etc.
}

void SPI_Init(void) {
    // Configure SPI peripheral settings
    // Set clock polarity, phase, data size, etc.
}

void I2C_Transmit(uint8_t address, uint8_t *data, uint16_t size) {
    // Start I2C transmission
    // Send address and data
}

void SPI_Transmit(uint8_t *data, uint16_t size) {
    // Start SPI transmission
    // Send data
}