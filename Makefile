#Makefile file for Polar HW 
#By: Ari Sherman
#Class: CS5201 HW #2
#Date: 2.12.18


.PHONY: all clean

CXX = /usr/bin/g++
CXXFLAGS = -g -Wpedantic -Wall -Wextra -Wfloat-conversion -Werror -std=c++11

# The following 2 lines only work with gnu make.
# It's much nicer than having to list them out,
# and less error prone.
SOURCES = $(wildcard *.cpp)
HEADERS = $(wildcard *.h)

OBJECTS = $(SOURCES:%.cpp=%.o)

default: driver

%.o: %.cpp
	@echo "Compiling $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

driver: $(OBJECTS)
	@echo "Building $@"
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@
	@echo ""
	@echo "Everything worked :) "
	@echo ""

clean:
	-@rm -f core
	-@rm -f driver
	-@rm -f depend
	-@rm -f $(OBJECTS)

# Automatically generate dependencies and include them in Makefile
depend: $(SOURCES) $(HEADERS)
	@echo "Generating dependencies"
	@$(CXX) -MM *.cpp > $@

