#ifndef MULTICLASSPERCEPTRON
#define MULTICLASSPERCEPTRON

#include <set>
#include <vector>
#include <algorithm>

#include "classified_point.h"
#include "binary_point.h"
#include "perceptron.h"

class MuliclassPerceptron {
private:
    std::vector< std::string > classes;
    std::vector< Perceptron > classifiers;

public:
    virtual void train(std::vector<ClassifiedPoint> points, float learning_rate=1, int iteration_limit=100);
    virtual ClassifiedPoint infer(Point pt);
};

#endif

