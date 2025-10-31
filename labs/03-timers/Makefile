CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -Wall -Wextra -I../firmware/inc
LDFLAGS = -T ../firmware/linker/stm32_flash.ld

SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = timers

all: $(TARGET).elf

$(TARGET).elf: $(OBJ)
	$(CC) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET).elf

flash: $(TARGET).elf
	./../tools/flash.sh $(TARGET).elf

.PHONY: all clean flash