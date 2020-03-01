#ifndef UTIL
#define UTIL

#include <fstream>
#include <sstream>
#include <set>
#include <iostream>
#include <vector>

#include "point.h"
//#include "classified_point.h"

namespace util {
    std::vector<Point> loadPointsFromCSV(const char filepath[]);
//    std::vector<ClassifiedPoint> loadClassifiedPointsFromCSV(const char filepath[], int class_column);
}

#endif
