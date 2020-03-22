#include "multiclass_perceptron.h"

void MuliclassPerceptron::train(std::vector<ClassifiedPoint> points, float learning_rate, int iteration_limit) {
    
    // Get the classes
    for (std::vector<ClassifiedPoint>::iterator it = points.begin(); it!=points.end(); it++) {
        ClassifiedPoint point = *it;
        std::string c = point.getClass();
        std::cout << "Checking class: (" << c << ")\n";
        if (std::find(classes.begin(), classes.end(), c)!=classes.end()) {
            std::cout << "Is in list\n";
        } else {
            std::cout << "Not in list\n";
            classes.push_back(c);
        }
    }
    
    // Generate and train the perceptrons
    for (std::vector<std::string>::iterator it_c = classes.begin(); it_c!=classes.end(); it_c++) {
        std::cout << "TRAINING FOR: " << *it_c << std::endl;
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
        
        std::cout << "POINTS:\n";
        for (std::vector<BinaryPoint>::iterator it = class_points.begin(); it != class_points.end(); it ++) {
            std::cout << it -> stringify() << "\n";
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
    
    std::cout << "TAGS: ";
    for (std::set<std::string>::iterator it = tags.begin(); it!=tags.end(); it++) {
        std::cout << *it;
        c = *it;
    }
    std::cout << std::endl;
    
    ClassifiedPoint cp(pt.getCoordinates(), c);
    return cp;
}

std::vector<Perceptron> MuliclassPerceptron::getClassifiers(){
    return classifiers;
}

std::vector<std::string> MuliclassPerceptron::getClasses(){
    return classes;
}
