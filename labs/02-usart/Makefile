CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m3 -mthumb -Wall -Wextra -I../inc
LDFLAGS = -T ../linker/stm32_flash.ld -nostartfiles

SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = usart_lab

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

flash: all
	../tools/flash.sh $(TARGET)

.PHONY: all clean flash