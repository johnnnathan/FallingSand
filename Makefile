
# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Iinclude

# Directories
SRC_DIR := src
INC_DIR := include
BUILD_DIR := build

# Files
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))
TARGET := $(BUILD_DIR)/app

# Default target
all: $(BUILD_DIR) $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

# Compile .c to .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Convenience: run the program
run: all
	./$(TARGET)

.PHONY: all clean run
