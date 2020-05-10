#include "svm.h"


float Svm::dist(Point pt) {
	std::vector<float> coordinates = pt.getCoordinates();
	coordinates.push_back(1);
	float product = inner_product(weights.begin(), weights.end(), coordinates.begin(), 0.0);
	return product;
};

void Svm::train(std::vector<BinaryPoint> data) {
	if (!data.empty()) {
		weights = std::vector<float>(data[0].getCoordinates().size(), 0);
	}
}

BinaryPoint Svm::infer(Point point) {;
	return BinaryPoint(point.getCoordinates(), (dist(point) > 1));
}

std::vector<float> Svm::getWeights() {
	return weights;
}

float Svm::loss(std::vector<BinaryPoint> X) {
	float l = 0.0f;
	for (BinaryPoint &x : X) {
		float distance = 1 - ((float) (x.getClass())) * (dist(x));
		l += distance > 0 ? distance : 0;
	}
	return l / X.size();
}

std::vector<float> Svm::loss_gradient() {
	return std::vector<float>();
}

