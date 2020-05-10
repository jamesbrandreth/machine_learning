// Test place to run stuff
#include <iostream>
#include <vector>
#include <numeric>

#include "point.h"
#include "classified_point.h"
#include "binary_point.h"
#include "util.h"
#include "perceptron.h"
#include "multiclass_perceptron.h"
#include "eval.h"
#include "test_result.cpp"
#include "svm.h"


using namespace std;
using namespace util;


int main(int argc, const char *argv[]) {

	cout << "START" << endl;

	// Dummy data
	vector<BinaryPoint> data;
	data.push_back({{1.0f, 7.0f}, true});
	data.push_back({{2.0f, 8.0f}, true});
	data.push_back({{3.0f, 8.0f}, true});
	data.push_back({{5.0f, 1.0f}, false});
	data.push_back({{6.0f, 1.0f}, false});
	data.push_back({{7.0f, 3.0f}, false});

	cout << "Training data:" << endl;
	for (auto &point : data) {
		cout << point.stringify() << endl;
	}

	Svm svm;

	svm.train(data);

	cout << "Initial weights: ";
	for (auto &x: svm.getWeights()) {
		cout << x << ", ";
	}
	cout << endl;

	cout << "Initial loss: " << svm.loss(data) << endl;

	cout << "END" << endl;

	return 0;
}

