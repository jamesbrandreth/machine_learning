#ifndef MACHINE_LEARNING_DECISION_H
#define MACHINE_LEARNING_DECISION_H


class Decision {
private:
	bool leaf;
	bool label;
	int dimension;
	float threshold;
	Decision left;
	Decision right;

public:
	Decision(std::vector<binary_point> data, int depth);
	bool decide(std::vector<point> point);
};


#endif //MACHINE_LEARNING_DECISION_H
