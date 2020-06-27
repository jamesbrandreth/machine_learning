#include "decision.h"

Decision::Decision(std::vector<binary_point> data, int depth = 10) {

	// Check for max_depth exceed
	if (depth == 0) {
		leaf = true;

		// Find the majority class
		std::map<bool, int> label_counts;
		for (auto &point :  data) {
			if (label_counts.find(point.point_class) == label_counts.end()) {
				label_counts.insert(point.point_class);
			} else {
				label_counts[point.point_class] += 1;
			}
		}
		int max = 0;
		for (auto & l : label_counts) {
			if (l.second > max) {
				max = l.second;
				label = l.first;
			}
		}

	}
}

	// Check whether it is an end node
	std::set<bool> labels;
	for (auto & point : data){
		labels.add(point.point_class);
	}
	if (labels.size() == 1) {
		leaf = true;
		label = labels[0];
		return
	}



}

bool Decision::decide(std::vector<point> point) {
	if (leaf) {
		return label;
	} else {
		return point.coordinates[dimension] > threshold ? left.decide(point) : right.decide(point);
	}

