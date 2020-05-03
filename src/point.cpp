#include "point.h"

Point::Point(std::vector<float> coords){
	coordinates = coords;
}

std::vector<float> Point::getCoordinates(){
	return coordinates;
}

std::string Point::stringify(){
    std::string s = "";
    for(std::vector<float>::iterator it = coordinates.begin(); it != coordinates.end(); it++){
        s += std::to_string(*it);
        s += ", ";
    }
    return s;
}
