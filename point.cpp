#include "point.h"

Point::Point(std::vector<float> coords, bool pc){
    coordinates = coords;
    point_class = pc;
}

std::vector<float> Point::getCoordinates(){
    return coordinates;
}

bool Point::getClass(){
    return point_class;
}
