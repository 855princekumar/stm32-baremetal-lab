MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 128K  /* Adjust length as per your STM32 variant */
    RAM (xrw)   : ORIGIN = 0x20000000, LENGTH = 20K   /* Adjust length as per your STM32 variant */
}

SECTIONS
{
    .text :
    {
        KEEP(*(.isr_vector))  /* Interrupt vector table */
        *(.text*)             /* All .text sections */
        *(.rodata*)           /* Read-only data */
        . = ALIGN(4);
    } > FLASH

    .data : AT (ADDR(.text) + SIZEOF(.text))
    {
        *(.data*)             /* All .data sections */
        . = ALIGN(4);
    } > RAM

    .bss :
    {
        *(.bss*)              /* All .bss sections */
        . = ALIGN(4);
    } > RAM

    _estack = ORIGIN(RAM) + LENGTH(RAM); /* End of stack */
    _sdata = .;                          /* Start of .data section */
    _edata = . + SIZEOF(.data);         /* End of .data section */
    _sbss = .;                           /* Start of .bss section */
    _ebss = . + SIZEOF(.bss);            /* End of .bss section */
}