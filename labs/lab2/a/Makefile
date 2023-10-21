# Compiler and compiler flags
CC = g++
CFLAGS = -Wall -std=c++11

# Source files
SRCS = dictionaryList.cpp exBmain.cpp mystring_B.cpp

# Header files
HDRS = dictionaryList.h mystring_B.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Output binary
OUTPUT = myprogram

# Rule to build the program
$(OUTPUT): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(OUTPUT)

# Rule to compile C++ source files into object files
%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(OUTPUT)

# Phony target to run the program
run: $(OUTPUT)
	./$(OUTPUT)

# Default target
all: $(OUTPUT)

.PHONY: all clean run
