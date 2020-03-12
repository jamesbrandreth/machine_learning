
#ifndef MULTICLASSWRAPPERCLASSIFIER
#define MULTICLASSWRAPPERCLASSIFIER

#include "classified_point.h"

template <class T>
class MuliclassWrapperClassifier {

public:
    virtual void train(std::vector<BinaryPoint> points, float learning_rate=1, int iteration_limit=100);
    virtual ClassifiedPoint infer(Point pt);
};

#endif
