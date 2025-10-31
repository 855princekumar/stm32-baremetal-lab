CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -Wall -Wextra -I../firmware/inc
LDFLAGS = -T ../firmware/linker/stm32_flash.ld -Wl,--gc-sections

SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = adc_dac_lab

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