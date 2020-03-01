// Test place to run stuff
#include <iostream>
#include <vector>
#include <numeric>

#include "point.h"
#include "util.h"


using namespace std;
using namespace util;


int main(int argc, const char * argv[]){
	
    vector<Point> points;

    points = loadPointsFromCSV(argv[1]);
    
    for (vector<Point>::iterator it = points.begin(); it != points.end(); it++){
        Point point = *it;
        cout << point.stringify() << "\n";
    }

	return 0;
}

