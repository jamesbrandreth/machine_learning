#include "space.h"

void Space::loadFromCSV(const char filename[], int class_column){
    std::ifstream file;
    file.open(filename);
    std::string line;
//    std::vector<std::vector<std::string>>> table;
    
    while(std::getline(file, line)){
        std::vector<std::string> row;
        std::string cell;
        if (line != ""){
            std::stringstream stream_line(line);
            while(std::getline(stream_line, cell, ',')){
                row.push_back(cell);
            }
            table.push_back(row);
        }
    }
    
    // get all the classes
    for(int i=0; i<table.size(); i++){
        classes.insert(table[i][class_column]);
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

std::string Space::stringifyClassNames(){
    std::string s = "";
    for(std::set<std::string>::iterator it = classes.begin(); it != classes.end(); it++){
        s += *it;
        s += ", ";
    }
    return s;
}

