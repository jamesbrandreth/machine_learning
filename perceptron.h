// perceptron class

#ifndef PERCEPTRON
#define PERCEPTRON

#include "point.h"
#include "binary_point.h"
#include "classified_point.h"

#include <numeric>
#include <vector>
#include <iostream>


class Perceptron{
private:
	std::vector<float> weights;
	float dist(Point pt);

public:
	void set_weights(std::vector<float> w);
	bool train(std::vector<BinaryPoint> points, float learning_rate=1, int iteration_limit=100);
	bool infer(Point pt);
	std::vector<float> getWeights();
};

#endif
