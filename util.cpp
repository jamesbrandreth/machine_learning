
#include "util.h"

std::vector< Point > util::loadPointsFromCSV(const char filename[]){
    
    std::cout << "LOADING " << filename << "\n";
    
    std::vector< Point > points;
    
    std::ifstream file;
    file.open(filename);
    std::string line;
    
    // Load string table
    while(std::getline(file, line)){
        std::vector<float> row;
        std::string cell;
        if(line != ""){
            std::cout << line;
            std::stringstream stream_line(line);
            while(std::getline(stream_line, cell, ',')){
                row.push_back(std::stof(cell));
            }
            points.push_back(Point(row));
        }
    }
    return points;
}

std::vector<ClassifiedPoint> util::loadClassifiedPointsFromCSV(const char filepath[], int class_column){


    std::cout << "LOADING " << filepath << "\n";

    std::vector< ClassifiedPoint > points;

    std::ifstream file;
    file.open(filepath);
    std::string line;

    // Load string table
    int column_counter;
    std::string point_class;
    while(std::getline(file, line)){
        std::cout << line << "\n";
        column_counter = 0;
        std::vector<float> row;
        std::string cell;
        if(line != ""){
            std::stringstream stream_line(line);
            while(std::getline(stream_line, cell, ',')){
                if (column_counter == class_column) {
                    point_class = cell;
                } else {
                    row.push_back(std::stof(cell));
                }
                column_counter++;
            }
            points.push_back(ClassifiedPoint(row, point_class));
        }
    }
    return points;
}
