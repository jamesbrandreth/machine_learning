#ifndef UTIL
#define UTIL

#include <iostream>
#include <fstream>

#include "point.h"
#include "classified_point.h"

#define LOG(message) std::cout << message << std::endl

namespace util {
    std::vector<Point> loadPointsFromCSV(const char filepath[]);
    std::vector<ClassifiedPoint> loadClassifiedPointsFromCSV(const char filepath[], int class_column);
}

#endif
