CC=g++
CFLAGS=-c -Wall -std=c++11 -O3
INCLUDES=-Iinclude
PROGNAME=gyst

.PHONY: clean

all: test.o
	$(CC) $(INCLUDES) test.o -o $(PROGNAME).exe

test.o: test.cpp
	$(CC) $(CFLAGS) $(INCLUDES) test.cpp 

clean:
	rm -rf *.o
