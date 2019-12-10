// SVM Class

#ifndef SVM
#define SVM

#include "../point.h"

class SVM {
private:
    std::vector<float> weights;
    
    float dist(Point pt){
        std::vector<float> coordinates = pt.getCoordinates();
        coordinates.push_back(1);
        float product = inner_product(weights.begin(), weights.end(), coordinates.begin(), 0.0);
        return product;
    }
    
public:
    
    void set_weights(std::vector<float> w){
        weights = w;
    }
    
    bool train(std::vector<Point> points, float learning_rate=1, int iteration_limit=100){
        /*
         Takes a list of points and finds a hyperplane to divide them
         */
        
        //TODO
        
    }
    
}

#endif
