CC=g++

all: main

main: main.o point.o binary_point.o classified_point.o util.o perceptron.o multiclass_perceptron.o
	$(CC) -std=c++11 main.o point.o binary_point.o classified_point.o util.o perceptron.o multiclass_perceptron.o -o main

main.o: main.cpp
	$(CC) -std=c++11 -c main.cpp

point.o: point.cpp
	$(CC) -std=c++11 -c point.cpp

binary_point.o: binary_point.cpp
	$(CC) -std=c++11 -c binary_point.cpp

classified_point.o: classified_point.cpp
	$(CC) -std=c++11 -c classified_point.cpp
		
util.o: util.cpp
	$(CC) -std=c++11 -c util.cpp
	
perceptron.o: perceptron.cpp
	$(CC) -std=c++11 -c perceptron.cpp

multiclass_perceptron.o: multiclass_perceptron.cpp
	$(CC) -std=c++11 -c multiclass_perceptron.cpp

clean:
	rm -rf *o main
