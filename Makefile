# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Target executables
TARGETS = task1 task2

# Default target: builds all executables
all: $(TARGETS)

# Rule to compile task1
task1: task1.c
	$(CC) $(CFLAGS) -o task1 task1.c

# Rule to compile task2
task2: task2.c
	$(CC) $(CFLAGS) -o task2 task2.c

# Clean target: removes compiled executables
clean:
	rm -f $(TARGETS)

# Declare non-file targets
.PHONY: all clean