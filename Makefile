CXX=g++
CXXFLAGS=-std=c++11 -Wall

all: hw05
hw05: main.cpp Student.cpp
	$(CXX) -o hw05 Student.cpp main.cpp $(CXXFLAGS)
  
