# Makefile for writing tests with cxxtest (see cxxtest.com)
CC = g++-4.8
INCLUDE = /usr/local/pkg/cxxtest
CCFLAGS = -Wall -std=c++11 -I $(INCLUDE) 
TESTGEN = /usr/local/pkg/cxxtest/bin/cxxtestgen

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = tests.h

all :  runner main

main.o: main.cpp
main : main.o
	$(CC) $(CCFLAGS) -o $@ $<

runner.cpp : threes_puzzle.h tests.h
	$(TESTGEN) --error-printer -o $@ tests.h threes_puzzle.h

runner.o : runner.cpp

runner : runner.o $(OBJS)
	$(CC) $(CCFLAGS) -o $@ $^
check : runner
	./$<

%.o : %.cpp
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	rm -f runner runner.o runner.cpp
	rm -f main
	rm -f *.o
	rm -f *~
