CC=g++

all: main

main: main.o perceptron.o point.o
	$(CC) -std=c++11 main.o perceptron.o point.o -o main

main.o: main.cpp
	$(CC) -std=c++11 -c main.cpp

perceptron.o: perceptron.cpp point.o
	$(CC) -std=c++11 -c perceptron.cpp

point.o: point.cpp
	$(CC) -std=c++11 -c point.cpp

clean:
	rm -rf *o main
