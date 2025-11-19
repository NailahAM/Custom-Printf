CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11 -Iinclude

SRC = src/custom_printf.c src/format_handlers.c src/main.c
OBJ = obj/custom_printf.o obj/format_handlers.o obj/main.o
TARGET = bin/custom_printf

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj/*.o bin/custom_printf
