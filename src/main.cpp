// Test place to run stuff
#include <iostream>
#include <vector>
#include <numeric>

#include "point.h"
#include "classified_point.h"
#include "binary_point.h"
#include "util.h"
#include "perceptron.h"
#include "multiclass_perceptron.h"
#include "eval.h"
#include "test_result.cpp"


using namespace std;
using namespace util;


int main(int argc, const char * argv[]){
    
    cout << "START" << endl;


    vector<TestResult> results;
	results.push_back({true, true});
	results.push_back({true, false});
	results.push_back({true, false});
	results.push_back({false, true});
	results.push_back({false, false});
	results.push_back({true, false});
	results.push_back({true, true});

	eval::confusion(results);

    
//    cout << "TESTING loading" << endl;
//
//    vector<ClassifiedPoint> points;
//
//    points = loadClassifiedPointsFromCSV(argv[1], stoi(argv[2]));
//
//    for (vector<ClassifiedPoint>::iterator it = points.begin(); it != points.end(); it++){
//        ClassifiedPoint point = *it;
//        cout << "ROW: " << point.stringify() << "\n";
//    }
//
//    vector<BinaryPoint>binary_points;
//    binary_points.push_back(BinaryPoint({0.0,0.0}, true));
//    binary_points.push_back(BinaryPoint({1.0,0.0}, true));
//    binary_points.push_back(BinaryPoint({2.0,0.0}, true));
//    binary_points.push_back(BinaryPoint({0.0,1.0}, false));
//    binary_points.push_back(BinaryPoint({1.0,1.0}, false));
//    binary_points.push_back(BinaryPoint({2.0,1.0}, false));
//
//    Perceptron perceptron;
//    perceptron.set_weights({1.0,1.0,1.0});
//    perceptron.train(binary_points);
//
//    bool result = perceptron.infer(Point({1.0,2.0}));
//    result = false;
//    string res = result ? "TRUE" : "FALSE";
//    cout << res << endl;
    
//    MuliclassPerceptron mp;
//    mp.train(points, 1, 100);
//
//    vector<Point> test_points = {};
//    for (vector<ClassifiedPoint>::iterator it = points.begin(); it!=points.end();it++) {
//        test_points.push_back(Point(it->getCoordinates()));
//    }
//
//    for (vector<Point>::iterator it = test_points.begin(); it!=test_points.end();it++) {
//        Point pt = *it;
//        ClassifiedPoint cp = mp.infer(pt);
//        cout << pt.stringify() << " is " << cp.getClass() <<"\n";
//    }
//
//    vector<string> classes = mp.getClasses();
//    vector<Perceptron> perceptrons = mp.getClassifiers();
//
//    for (int i=0; i<classes.size();i++){
//        vector<float> weights = perceptrons[i].getWeights();
//        cout << classes[i] << "\t";
//        for (vector<float>::iterator it = weights.begin(); it != weights.end(); it++){
//            float n = *it;
//            cout << n << " ";
//        }
//        cout << endl;
//    }
    

	return 0;
}

