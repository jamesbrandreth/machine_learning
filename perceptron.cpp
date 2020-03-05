#include "perceptron.h"

float Perceptron::dist(Point pt){
    std::vector<float> coordinates = pt.getCoordinates();
    coordinates.push_back(1);
    float product = inner_product(weights.begin(), weights.end(), coordinates.begin(), 0.0);
    return product;

};

void Perceptron::set_weights(std::vector<float> w){
    weights = w;
};

bool Perceptron::train(std::vector<BinaryPoint> points, float learning_rate, int iteration_limit){
    /*
    Takes a vector of points, and finds a set of weights
    */
    bool converged = false;
    int i=0;
    while (i < iteration_limit && !converged){
        // Iterate until convergence or hitting the limit
        converged = true;
        for(std::vector<BinaryPoint>::iterator it_pt = points.begin(); it_pt != points.end(); it_pt++){
            // iterate through each point, evaluating the inferred class each time
            BinaryPoint pt = *it_pt;
            bool result = infer(pt);
            if(result != pt.getClass()){
                // If the point is missclassified, adjust the weights:
                converged = false;
                float sign = pt.getClass() ? 1.0 : -1.0;
                
                std::vector<float> coordinates = pt.getCoordinates();
                std::vector<float>::iterator it_w = weights.begin();
                std::vector<float>::iterator it_c = coordinates.begin();
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
};

bool Perceptron::infer(Point pt){
     if (dist(pt) < 0) {
         return false;
     } else {
         return true;
     }
};


std::vector<float> Perceptron::getWeights(){
    return weights;
};
