#pragma once
#include "Node.h"
class Edge 
{
private: 
public:	
	Edge(Node * a, Node * b);
	int mXA, mYA, mXB, mYB;
	int weight;
	virtual ~Edge();
};

