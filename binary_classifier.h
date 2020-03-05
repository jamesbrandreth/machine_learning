#ifndef BINARYCLASSIFIER
#define BINARYCLASSIFIER

#include <vector>

#include "point.h"
#include "binary_point.h"

class BinaryClassifier {
    
public:
    virtual void train(std::vector<BinaryPoint> data);
    virtual bool infer(Point point);
};

#endif
