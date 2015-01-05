#pragma once
#include <vector>
#include "Node.h"
#include "Edge.h"
using namespace std;
class Graph
{
private:
	vector<Node *> mNodes;
	vector<Edge *> mEdges;
public:
	Graph();
	virtual ~Graph();
	Node * getNode(int index);
	int getGraphSize();

	void addEdge(Node * a, Node * b);
	int getEdgesSize();
	Edge * getEdge(int index);
	
};

