// Binary Point
#ifndef BINARYPOINT
#define BINARYPOINT

#include <vector>

#include "point.h"

class BinaryPoint: public Point {
    
protected:
    bool point_class;
    
public:
    BinaryPoint(std::vector<float> coords, bool point_class);
    bool getClass();
    std::string stringify();
    
};

#endif
