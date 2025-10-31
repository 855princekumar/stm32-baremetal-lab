#include "FreeRTOS.h"
#include "task.h"
#include "board.h"

// Task handles
TaskHandle_t task1Handle = NULL;
TaskHandle_t task2Handle = NULL;

// Function prototypes
void vTask1(void *pvParameters);
void vTask2(void *pvParameters);

int main(void) {
    // Hardware initialization
    Board_Init();

    // Create tasks
    xTaskCreate(vTask1, "Task 1", configMINIMAL_STACK_SIZE, NULL, 1, &task1Handle);
    xTaskCreate(vTask2, "Task 2", configMINIMAL_STACK_SIZE, NULL, 1, &task2Handle);

    // Start the scheduler
    vTaskStartScheduler();

    // Should never reach here
    for(;;);
}

void vTask1(void *pvParameters) {
    for(;;) {
        // Task 1 code
        Board_ToggleLED(); // Example function to toggle an LED
        vTaskDelay(pdMS_TO_TICKS(500)); // Delay for 500 ms
    }
}

void vTask2(void *pvParameters) {
    for(;;) {
        // Task 2 code
        Board_SendData(); // Example function to send data via USART
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1000 ms
    }
}