// perceptron class

#ifndef PERCEPTRON
#define PERCEPTRON

#include "point.h"

using namespace std;

class Perceptron {
private:

    vector<float> weights;

    float dist(Point pt);

public:

    void set_weights(vector<float> w);
    bool train(vector<Point> points, float learning_rate=1, int iteration_limit=100);
    float infer(Point pt);
    std::vector<float> getWeights();
};

#endif
