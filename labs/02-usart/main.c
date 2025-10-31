#include "stm32f4xx.h"  // Adjust the header file according to your STM32 series

void USART2_Init(void) {
    // Enable the clock for GPIOA and USART2
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // Enable GPIOA clock
    RCC->APB1ENR |= RCC_APB1ENR_USART2EN; // Enable USART2 clock

    // Configure PA2 as USART2 TX
    GPIOA->MODER |= (2 << (2 * 2)); // Set PA2 to alternate function mode
    GPIOA->AFR[0] |= (7 << (2 * 4)); // Set PA2 to AF7 (USART2)

    // Configure USART2
    USART2->BRR = 0x0683; // Set baud rate to 9600 (assuming 16 MHz clock)
    USART2->CR1 |= USART_CR1_TE; // Enable transmitter
    USART2->CR1 |= USART_CR1_UE; // Enable USART
}

void USART2_SendChar(char c) {
    while (!(USART2->SR & USART_SR_TXE)); // Wait until transmit data register is empty
    USART2->DR = c; // Send the character
}

void USART2_SendString(char *str) {
    while (*str) {
        USART2_SendChar(*str++);
    }
}

int main(void) {
    USART2_Init(); // Initialize USART2

    while (1) {
        USART2_SendString("Hello, STM32!\r\n"); // Send a string over USART
        for (volatile int i = 0; i < 1000000; i++); // Simple delay
    }
}