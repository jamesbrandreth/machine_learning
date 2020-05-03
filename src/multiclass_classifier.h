#ifndef MULTICLASSCLASSIFIER
#define MULTICLASSCLASSIFIER

#include "classified_point.h"

template <class T>
class MuliclassClassifier {

public:
    virtual void train(std::vector<BinaryPoint> points, float learning_rate=1, int iteration_limit=100);
    virtual ClassifiedPoint infer(Point pt);
};

#endif
