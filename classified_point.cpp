#include "classified_point.h"

ClassifiedPoint::ClassifiedPoint(std::vector<float> coords, std::string point_class) :
Point(coords), point_class(point_class)
{
}

std::string ClassifiedPoint::getClass(){
    return point_class;
}

std::string ClassifiedPoint::stringify(){
    std::string s = "";
//    for(std::vector<float>::iterator it = coordinates.begin(); it != coordinates.end(); it++){
//        s += std::to_string(*it);
//        s += ", ";
//    }
//    s += point_class;
    return s;
}
