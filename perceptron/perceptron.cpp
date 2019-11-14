// Perceptron

#include <vector>
#include <numeric>

#include "perceptron.h"

using namespace std;


class Perceptron{
	private:
	vector<int> weights;


	public:
	
	/*
	void train(vector<vector<int>> points, vector<bool> classes[], float learning_rate = 0.3, int iteration_limit = 100){
		bool converged = FALSE;
		weights.assign(points[1].size(), 0);
		i = 0;
		while(i<iteration_limit){
			
		}


	}
	*/

	void set_weights(vector<int> w){
		weights = w;
	}

	int infer(vector<int> point){

		point.insert(1)
		int product = inner_product(weights.begin(); weights.end(), point.begin(), 0);
		return product;
	}
	
}

