#ifndef BINARYCLASSIFIER
#define BINARYCLASSIFIER

#include <vector>

#include "point.h"

class BinaryClassifier {
    
public:
    virtual void train(std::vector<Point> data);
    virtual bool infer(Point point);
};

#endif
