#include "space.h"

void Space::loadFromCSV(const char filename[], int class_column){
    std::ifstream file;
    file.open(filename);
    std::string line;
//    std::vector<std::vector<std::string>>> table;
    
    while(std::getline(file, line)){
        std::vector<std::string> row;
        std::string cell;
        std::stringstream stream_line(line);
        while(std::getline(stream_line, cell, ',')){
            row.push_back(cell);
        }
        table.push_back(row);
    }
    
    // get all the classes
    std::vector<std::string> classes;
    for(int i=0; i<table.size(); i++){
        for(int j=0; j<classes.size(); j++){
            
        }
    }
}


std::string Space::stringifyTable(){
    std::string s = "";
    std::vector<std::string> row;
    for(int i=0; i<table.size(); i++){
        row = table[i];
        for(int j=0; j<row.size(); j++){
            s += row[j] + ", ";
        }
        s[s.size()-2] = ' ';
        s[s.size()-1] = '\n';
    }
    return s;
}

