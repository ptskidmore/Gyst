CC=g++
CFLAGS=-c -Wall -std=c++11 -O3
INCLUDES=-Iinclude
PROGNAME=gyst

.PHONY: clean

all: test.o Task.o TaskCreator.o TaskStorage.o
	$(CC) $(INCLUDES) test.o Task.o TaskCreator.o TaskStorage.o -o $(PROGNAME).exe

test.o: test.cpp
	$(CC) $(CFLAGS) $(INCLUDES) test.cpp 

Task.o: Task.cpp
	$(CC) $(CFLAGS) $(INCLUDES) Task.cpp

TaskCreator.o: TaskCreator.cpp
	$(CC) $(CFLAGS) $(INCLUDES) TaskCreator.cpp

TaskStorage.o: TaskStorage.cpp
	$(CC) $(CFLAGS) $(INCLUDES) TaskStorage.cpp

CodeSnippet.o: CodeSnippet.cpp
	$(CC) $(CFLAGS) $(INCLUDES) CodeSnippet.cpp	
	
clean:
	rm -rf *.o
