// Point
#ifndef CLASSIFIEDPOINT
#define CLASSIFIEDPOINT

#include <vector>
#include <string>

#include "point.h"

class ClassifiedPoint: public Point {

protected:
    std::string point_class;

public:
    ClassifiedPoint(std::vector<float> coords, std::string point_class);
    std::string getClass();
    std::string stringify();
};

#endif
