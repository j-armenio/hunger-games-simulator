CXX = g++
CXXFLAGS = -Wall -Wextra -g
SRC = $(filter-out teste.cpp, $(wildcard *.cpp))
OBJ = $(SRC:.cpp=.o)
TARGET = main
TESTE_TARGET = teste
LIBS_DIR = libs
LIBS = $(LIBS_DIR)/utils.h

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(LIBS_DIR) -c $<

teste: $(TESTE_TARGET)

$(TESTE_TARGET): teste.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET) teste.o $(TESTE_TARGET)

.PHONY: all clean teste
