.section .text
.global _start

_start:
    /* Initialize the stack pointer */
    LDR R0, =_estack
    MOV SP, R0

    /* Call the main function */
    BL main

    /* Infinite loop */
    b .

.section .bss
    .lcomm _estack, 0x400  /* Define the stack size (1KB) */

.section .data
    .lcomm _data_start, 0x100  /* Define the start of the data section */
    .lcomm _data_end, 0x100    /* Define the end of the data section */

.section .text
    .type Reset_Handler, %function
Reset_Handler:
    /* Call the SystemInit function to initialize the system */
    BL SystemInit

    /* Call the main function */
    BL main

    /* Infinite loop */
    b . 

.size Reset_Handler, .-Reset_Handler

.section .text
    .type NMI_Handler, %function
NMI_Handler:
    b .  /* Infinite loop for NMI */

.size NMI_Handler, .-NMI_Handler

.section .text
    .type HardFault_Handler, %function
HardFault_Handler:
    b .  /* Infinite loop for Hard Fault */

.size HardFault_Handler, .-HardFault_Handler

.section .text
    .type SVC_Handler, %function
SVC_Handler:
    b .  /* Infinite loop for SVC */

.size SVC_Handler, .-SVC_Handler

.section .text
    .type PendSV_Handler, %function
PendSV_Handler:
    b .  /* Infinite loop for PendSV */

.size PendSV_Handler, .-PendSV_Handler

.section .text
    .type SysTick_Handler, %function
SysTick_Handler:
    b .  /* Infinite loop for SysTick */

.size SysTick_Handler, .-SysTick_Handler

/* Define the vector table */
.section .vector_table, "a"
    .word _estack
    .word Reset_Handler
    .word NMI_Handler
    .word HardFault_Handler
    .word MemManage_Handler
    .word BusFault_Handler
    .word UsageFault_Handler
    .word 0
    .word 0
    .word 0
    .word 0
    .word SVC_Handler
    .word 0
    .word PendSV_Handler
    .word SysTick_Handler

    /* Add other interrupt handlers as needed */