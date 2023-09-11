CXX = g++
CXXFLAGS = -pedantic -std=c++11 -Wall -Wextra
CFLAGS = -I./include 
SRC = ./src
INC = ./include

.PHONY: all

all: main clean

main: main.o Complex.o
	$(CXX) $^ -o $@

main.o: $(SRC)/main.cpp $(INC)/Complex.h
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@

Complex.o: $(SRC)/Complex.cpp $(INC)/Complex.h
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@

clean:
		rm -f *.o
