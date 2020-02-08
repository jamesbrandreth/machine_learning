CC=g++

all: main

main: main.o perceptron.o point.o space.o
	$(CC) -std=c++11 main.o perceptron.o point.o space.o -o main

main.o: main.cpp
	$(CC) -std=c++11 -c main.cpp

perceptron.o: perceptron.cpp point.o
	$(CC) -std=c++11 -c perceptron.cpp
	
svm.o: svm.cpp point.o
	$(CC) -std=c++11 -c svm.cpp

decision_tree.o: decision_tree.cpp point.o
	$(CC) -std=c++11 -c decision_tree.cpp

space.o: space.cpp point.cpp
	$(CC) -std=c++11 -c space.cpp

point.o: point.cpp
	$(CC) -std=c++11 -c point.cpp

clean:
	rm -rf *o main
