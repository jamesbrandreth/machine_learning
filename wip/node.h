// Decision Tree Node

#ifndef DTNODE
#define DTNODE

class DTNode{
private:
	DTNode parent;
	DTNode left_child;
	DTNode right_child;
	int dimension;
	float split;
	int class;

public:
	DTNode();
	DTNode(DTNode pnt);

}

#endif
