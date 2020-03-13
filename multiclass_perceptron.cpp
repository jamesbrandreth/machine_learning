#include "multiclass_perceptron.h"

void MuliclassPerceptron::train(std::vector<ClassifiedPoint> points, float learning_rate, int iteration_limit) {
    
    // Get the classes
    for (std::vector<ClassifiedPoint>::iterator it = points.begin(); it!=points.end(); it++) {
        ClassifiedPoint point = *it;
        std::string c = point.getClass();
        if (std::find(classes.begin(), classes.end(), c)!=classes.end()) {
        } else {
            classes.push_back(c);
        }
    }
    
    // Generate and train the perceptrons
    for (std::vector<std::string>::iterator it_c = classes.begin(); it_c!=classes.end(); it_c++) {
        std::cout << "TRAINING FOR: " << *it_c << "\n";
        std::vector<BinaryPoint> class_points;
        for (std::vector<ClassifiedPoint>::iterator it_p=points.begin(); it_p!=points.end(); it_p++) {
            bool c;
            if (it_p -> getClass() == *it_c) {
                c = true;
            } else {
                c = false;
            }
            class_points.push_back(BinaryPoint(it_p -> getCoordinates(), c));
        }
        Perceptron p;
        p.train(class_points);
        classifiers.push_back(p);
    }
    
    // List the perceptrons
    for (std::vector<Perceptron>::iterator it = classifiers.begin(); it!=classifiers.end(); it++ ){
        std::cout << "PERCEPTRON: \n";
    }
    
}

ClassifiedPoint MuliclassPerceptron::infer(Point pt) {;
    
    std::string c = "NONE";
    std::set<std::string> tags = {};
    
    for (int i = 0; i<classes.size(); i++){
        if (classifiers[i].infer(pt)) {
            tags.insert(classes[i]);
        }
    }
    
    for (std::set<std::string>::iterator it = tags.begin(); it!=tags.end(); it++) {
        std::cout << *it << "\n";
        c = *it;
    }
    
    ClassifiedPoint cp(pt.getCoordinates(), c);
    return cp;
}
