// Point
#ifndef POINT
#define POINT

#include <vector>
#include <string>

class Point {

protected:
    std::vector<float> coordinates;

public:
    Point(std::vector<float> coords);
    std::vector<float> getCoordinates();
    std::string stringify();
};

#endif
