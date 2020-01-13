#include "svm.h"


float SVM::dist(Point pt){
    std::vector<float> coordinates = pt.getCoordinates();
    coordinates.push_back(1);
    float product = inner_product(weights.begin(), weights.end(), coordinates.begin(), 0.0);
    return product;
};

void SVM::set_weights(std::vector<float> w){
    weights = w;
};

bool SVM::train(std::vector<Point> points, float learning_rate=1, int iteration_limit=100){
    /*
     Takes a list of points and finds a hyperplane to divide them
     */
    
    //TODO
	for(std::vector<Point>::iterator ip_pt = points.begin(); it_pt != points.end(); it_pt++){
		Point pt = *it_pt;
		bool result = infer(pt);

	}
    
};
