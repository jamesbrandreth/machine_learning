// perceptron class

#ifndef PERCEPTRON
#define PERCEPTRON

#include "binary_point.h"
#include "classified_point.h"
#include "binary_classifier.h"

#include <numeric>
#include <vector>

using namespace std;

class Perceptron: public BinaryClassifier {
private:

	std::vector<float> weights;
	float dist(Point pt);

public:

	void set_weights(vector<float> w);
	bool train(vector<BinaryPoint> points, float learning_rate=1, int iteration_limit=100);
	bool infer(Point pt);
	std::vector<float> getWeights();
};

#endif
