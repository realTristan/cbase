CC = gcc

CFLAGS = -Wall -std=c99

DEPS = src/decimal_to_base.c src/base_to_decimal.c src/base_16_to_decimal.c src/base_to_base.c src/base_addition.c src/base_product.c src/base_subtraction.c
UTILS = src/utils/math.c src/utils/hex.c src/utils/strings.c

# make command: make
all: make_build output run

# make command: make testing
testing:
	$(CC) $(CFLAGS) -o build/test.out src/testing.c $(DEPS) $(UTILS) -D TESTING
	./build/test.out

# Make the build directory if it doesn't exist
make_build:
	mkdir -p build

# Compile the main.c file into the build directory
output:
	$(CC) $(CFLAGS) -o build/main.out src/main.c $(DEPS) $(UTILS)

# Run the main output file from the build directory
run:
	./build/main.out