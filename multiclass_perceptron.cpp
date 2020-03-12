#include "multiclass_perceptron.h"

void MuliclassPerceptron::train(std::vector<ClassifiedPoint> points, float learning_rate, int iteration_limit) {
    
    // Get the classes
    for (std::vector<ClassifiedPoint>::iterator it = points.begin(); it!=points.end(); it++) {
        ClassifiedPoint point = *it;
        std::string c = point.getClass();
        if (std::find(classes.begin(), classes.end(), c)!=classes.end()) {
        } else {
            classes.insert(c);
        }
    }
    
    // Make the perceptrons
    for (int i=0; i<classes.size(); i++) {
        classifiers.push_back(Perceptron());
    }
    
    for (std::set<std::string>::iterator it = classes.begin(); it!=classes.end(); it++) {
        std::cout << *it << "\n";
    }
    
    // Train the perceptrons
    
    
}
