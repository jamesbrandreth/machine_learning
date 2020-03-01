// Test place to run stuff
#include <iostream>
#include <vector>
#include <numeric>

#include "point.h"
#include "classified_point.h"
#include "util.h"


using namespace std;
using namespace util;


int main(int argc, const char * argv[]){
    
    cout << "START";
	
    vector<ClassifiedPoint> points;

    points = loadClassifiedPointsFromCSV(argv[1], stoi(argv[2]));
    
    for (vector<ClassifiedPoint>::iterator it = points.begin(); it != points.end(); it++){
        ClassifiedPoint point = *it;
        cout << "ROW: " << point.stringify() << "\n";
    }

	return 0;
}

