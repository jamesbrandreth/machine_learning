// SVM Class

#ifndef SVM
#define SVM

#include "binary_point.h"
#include "binary_classifier.h"

#include <numeric>
#include <vector>

class SVM: public binary_classifier {
private:
    std::vector<float> weights;
    float dist(Point pt);
    
public:
    void set_weights(std::vector<float> w);
    bool train(std::vector<BinaryPoint> data, float learning_rate=1, int iteration_limit=100);
    float infer(Point pt);
    std::vector<float> getWeights();
};

#endif
