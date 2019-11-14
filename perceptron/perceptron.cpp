// Perceptron

#include <vector>
#include <numeric>

#include "perceptron.h"

using namespace std;

void Perceptron::set_weights(vector<int> w){
	weights = w;
}

int Perceptron::infer(vector<int> point){
	point.push_back(1);
	int product = inner_product(weights.begin(), weights.end(), point.begin(), 0);
	return product;
}
	
