CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -Wall -Wextra -I../firmware/inc -I../firmware/cmsis -DSTM32F4
LDFLAGS = -T ../firmware/linker/stm32_flash.ld -Wl,--gc-sections
OBJ = main.o
TARGET = rtos_integration

.PHONY: all clean flash

all: $(TARGET).elf

$(TARGET).elf: $(OBJ)
	$(CC) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET).elf

flash: $(TARGET).elf
	./../../tools/flash.sh $(TARGET).elf