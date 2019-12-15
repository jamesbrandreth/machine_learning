// Point
#ifndef POINT
#define POINT

#include <vector>

class Point {

private:
    std::vector<float> coordinates;
    bool point_class;

public:
    Point(std::vector<float> coords, bool pc);
    std::vector<float> getCoordinates();
    bool getClass();
	
};

#endif
