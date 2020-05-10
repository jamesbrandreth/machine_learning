// SVM Class

#ifndef SVM
#define SVM

#include "point.h"
#include "binary_point.h"
#include "classified_point.h"

#include <numeric>
#include <vector>
#include <iostream>

class Svm{
private:
	std::vector<float> weights;
	float dist(Point pt);

public:
	void train(std::vector<BinaryPoint> data);
	BinaryPoint infer(Point);
	std::vector<float> getWeights();
	float loss(std::vector<BinaryPoint> x);
	std::vector<float> loss_gradient();
};

#endif
