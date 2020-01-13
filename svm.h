// SVM Class

#ifndef SVM
#define SVM

#include "point.h"

#include <numeric>
#include <vector>

class Svm {
private:
    std::vector<float> weights;
    float dist(Point pt);
    
public:
    void set_weights(std::vector<float> w);
    bool train(std::vector<Point> points, float learning_rate=1, int iteration_limit=100);
    float infer(Point pt);
    std::vector<float> getWeights();
};

#endif
