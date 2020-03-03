#include "binary_point.h"

BinaryPoint::BinaryPoint(std::vector<float> coords, bool point_class) :
Point(coords), point_class(point_class)
{
}

bool BinaryPoint::getClass(){
    return point_class;
}

std::string BinaryPoint::stringify(){
    std::string s = "";
    for(std::vector<float>::iterator it = coordinates.begin(); it != coordinates.end(); it++){
        s += std::to_string(*it);
        s += ", ";
    }
    s += point_class ? "TRUE" : "FALSE";
    return s;
}
