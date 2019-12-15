// Test place to run stuff
#include <iostream>
#include <vector>
#include <numeric>

#include "perceptron.h"
#include "point.h"

using namespace std;


int main(){
	
    vector<Point> points;
    
    points.push_back(Point({0.0,0.0}, false));
    points.push_back(Point({1.0,0.0}, false));
    points.push_back(Point({2.0,0.0}, false));
    points.push_back(Point({0.0,2.0}, true));
    points.push_back(Point({1.0,2.0}, true));
    points.push_back(Point({2.0,2.0}, true));

	Perceptron p;
	p.set_weights({0.0,0.0,0.0});

    p.train(points, 1);

	vector<float> weights = p.getWeights();
	
    cout << "Weights:\n";
	for(vector<float>::iterator it = weights.begin(); it != weights.end(); it++){
		cout << *it << "\n";
	}
    
    cout << "Point classes:\n";
    for(int i=0; i!=6; i++){
        cout << p.infer(points[i]) << "\n";
    }
    
	return 0;
}

