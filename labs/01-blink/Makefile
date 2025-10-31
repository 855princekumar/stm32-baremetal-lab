CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m3 -mthumb -Wall -Wextra -I../firmware/inc
LDFLAGS = -T ../firmware/linker/stm32_flash.ld

SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = blink.elf

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

flash: $(TARGET)
	../tools/flash.sh $(TARGET)

.PHONY: all clean flash