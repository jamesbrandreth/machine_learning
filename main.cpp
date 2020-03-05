// Test place to run stuff
#include <iostream>
#include <vector>
#include <numeric>

#include "point.h"
#include "classified_point.h"
#include "binary_point.h"
#include "util.h"
#include "perceptron.h"


using namespace std;
using namespace util;


int main(int argc, const char * argv[]){
    
    cout << "START";
    
    cout << "TESTING loading" << "\n";
	
    vector<ClassifiedPoint> points;

    points = loadClassifiedPointsFromCSV(argv[1], stoi(argv[2]));
    
    for (vector<ClassifiedPoint>::iterator it = points.begin(); it != points.end(); it++){
        ClassifiedPoint point = *it;
        cout << "ROW: " << point.stringify() << "\n";
    }
    
    vector<BinaryPoint>binary_points;
    binary_points.push_back(BinaryPoint({0.0,0.0}, true));
    binary_points.push_back(BinaryPoint({1.0,0.0}, true));
    binary_points.push_back(BinaryPoint({2.0,0.0}, true));
    binary_points.push_back(BinaryPoint({0.0,1.0}, false));
    binary_points.push_back(BinaryPoint({1.0,1.0}, false));
    binary_points.push_back(BinaryPoint({2.0,1.0}, false));
    
    Perceptron perceptron;
    perceptron.set_weights({1.0,1.0,1.0});
    perceptron.train(binary_points);
    
    bool result = perceptron.infer(Point({1.0,2.0}));
    result = false;
    string res = result ? "TRUE" : "FALSE";
    cout << res << "\n";
    

	return 0;
}

