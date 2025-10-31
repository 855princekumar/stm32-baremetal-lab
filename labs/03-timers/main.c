#include "stm32f4xx.h"  // Adjust the header file according to your STM32 series

void Timer_Config(void);
void Delay(uint32_t delay);

int main(void) {
    // Configure the timer
    Timer_Config();

    // Main loop
    while (1) {
        // Toggle an LED or perform an action
        GPIOA->ODR ^= (1 << 5); // Assuming LED is connected to PA5
        Delay(1000); // Delay for 1000 ms
    }
}

void Timer_Config(void) {
    // Enable clock for GPIOA
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // Set PA5 as output
    GPIOA->MODER |= (1 << (5 * 2)); // Set mode to output (01)
}

void Delay(uint32_t delay) {
    // Simple delay function using a timer
    for (uint32_t i = 0; i < delay * 1000; i++) {
        __NOP(); // No operation, just wait
    }
}