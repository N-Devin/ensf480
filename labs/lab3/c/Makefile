# Makefile for your C++ project

# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Source files
SRC = customer.cpp mainLab3ExC.cpp mystring_B.cpp
HEADERS = customer.h lookupTable.h mystring_B.h

# Object files
OBJ = $(SRC:.cpp=.out)

# Target binary
TARGET = myapp

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)
