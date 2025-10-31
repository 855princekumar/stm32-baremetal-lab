#ifndef BOARD_H
#define BOARD_H

// Include necessary headers
#include <stdint.h>

// Define board-specific constants
#define LED_PIN         5       // Pin number for the onboard LED
#define BUTTON_PIN      13      // Pin number for the onboard button

// Define peripheral base addresses
#define GPIOA_BASE      (0x48000000UL) // Base address for GPIOA
#define GPIOB_BASE      (0x48000400UL) // Base address for GPIOB

// Define GPIO registers structure
typedef struct {
    volatile uint32_t MODER;    // Mode register
    volatile uint32_t OTYPER;   // Output type register
    volatile uint32_t OSPEEDR;  // Output speed register
    volatile uint32_t PUPDR;    // Pull-up/pull-down register
    volatile uint32_t IDR;      // Input data register
    volatile uint32_t ODR;      // Output data register
    volatile uint32_t BSRR;     // Bit set/reset register
    volatile uint32_t LCKR;     // Configuration lock register
    volatile uint32_t AFR[2];   // Alternate function registers
} GPIO_TypeDef;

// Define pointers to GPIOA and GPIOB
#define GPIOA           ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB           ((GPIO_TypeDef *) GPIOB_BASE)

// Function prototypes
void board_init(void);
void led_on(void);
void led_off(void);
uint8_t button_read(void);

#endif // BOARD_H