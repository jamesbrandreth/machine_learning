CC=g++

all: main

main: main.o point.o classified_point.o util.o
	$(CC) -std=c++11 main.o point.o classified_point.o util.o -o main

main.o: main.cpp
	$(CC) -std=c++11 -c main.cpp

point.o: point.cpp
	$(CC) -std=c++11 -c point.cpp

classified_point.o: classified_point.cpp
	$(CC) -std=c++11 -c classified_point.cpp
	
util.o: util.cpp
	$(CC) -std=c++11 -c util.cpp

clean:
	rm -rf *o main
