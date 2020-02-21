// Space
#ifndef SPACE
#define SPACE

#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <iostream>

#include "point.h"

class Space {
private:
//    std::string dimensions[];
    std::set<std::string> classes;
    std::vector<Point> data;
    std::vector<std::vector<std::string>> table;

public:

    void loadFromCSV(const char filename[], int class_column);
    std::string stringifyTable();
    std::string stringifyClassNames();
};

#endif

