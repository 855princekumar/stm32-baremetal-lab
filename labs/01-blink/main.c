#include "board.h"

void delay(volatile uint32_t count) {
    while (count--) {
        __asm("nop");
    }
}

int main(void) {
    // Initialize the GPIO for the LED
    GPIOA->MODER |= (1 << (LED_PIN * 2)); // Set LED_PIN as output

    while (1) {
        // Toggle the LED
        GPIOA->ODR ^= (1 << LED_PIN); // Toggle the LED state
        delay(1000000); // Delay for a while
    }
}