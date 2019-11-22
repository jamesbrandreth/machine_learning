// perceptron class

#ifndef PERCEPTRON
#define PERCEPTRON

#include "../point.h"

using namespace std;

class Perceptron {
	private:

		vector<float> weights;

		float dist(Point pt){
            std::vector<float> coordinates = pt.getCoordinates();
			coordinates.push_back(1);
			float product = inner_product(weights.begin(), weights.end(), coordinates.begin(), 0.0);
			return product;
		}

	public:

		void set_weights(vector<float> w){
			weights = w;
		}

		bool train(vector<Point> points, float learning_rate=1, int iteration_limit=100){
			/*
			Takes a vector of points, and finds a set of weights
			*/
			bool converged = false;
			int i=0;
			while (i < iteration_limit && !converged){
                // Iterate until convergence or hitting the limit
                converged = true;
				for(vector<Point>::iterator it_pt = points.begin(); it_pt != points.end(); it_pt++){
                    // iterate through each point, evaluating the inferred class each time
                    Point pt = *it_pt;
					bool result = infer(pt);
                    if(result != pt.getClass()){
                        // If the point is missclassified, adjust the weights:
                        converged = false;
                        float sign = pt.getClass() ? 1.0 : -1.0;
                        
                        vector<float> coordinates = pt.getCoordinates();
                        vector<float>::iterator it_w = weights.begin();
                        vector<float>::iterator it_c = coordinates.begin();
                        while(it_w != weights.end()){
                            // For each weight, adjust with the current point's value
                            *it_w = *it_w + learning_rate*sign**it_c;
                            it_w++;
                            it_c++;
                        }
                    }
				}
				i++;
			}
			return false;
		}

		float infer(Point pt){
			if (dist(pt) < 0) {
				return false;
			} else {
				return true;
			}
		}
    
        std::vector<float> getWeights(){
            return weights;
        }
};

#endif
