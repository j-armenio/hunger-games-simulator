# Directories
SRCDIR := src
INCDIR := include
OBJDIR := obj
BINDIR := bin

# Compiler and flags
CXX := g++
CXXFLAGS := -I$(INCDIR) -Wall -Wextra -std=c++17

# Sources and objects
SRCFILES := $(wildcard $(SRCDIR)/*.cpp)
OBJFILES := $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCFILES))
TARGET := $(BINDIR)/simulator

# Default target
all: $(TARGET)

# Link the final executable
$(TARGET): $(OBJFILES) $(OBJDIR)/simulator.o
	@mkdir -p $(BINDIR)
	$(CXX) $^ -o $@

# Compile simulator.cpp separately since it's in a different directory
$(OBJDIR)/simulator.o: app/simulator.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile other source files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(INCDIR)/%.hpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY: all clean
