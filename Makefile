CC = gcc

CFLAGS = -Wall -std=c99

MAIN_FILES = src/main.c src/decimal_to_base.c src/base_to_decimal.c
UTILS = src/utils/math.c src/utils/hex.c src/utils/strings.c

all: make_build output run

# Make the build directory if it doesn't exist
make_build:
	mkdir -p build

# Compile the main.c file into the build directory
output:
	$(CC) $(CFLAGS) -o build/main.out $(MAIN_FILES) $(UTILS)

# Run the main output file from the build directory
run:
	./build/main.out