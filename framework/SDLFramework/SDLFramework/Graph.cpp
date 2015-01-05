#include "Graph.h"


Graph::Graph()
{ 
	mNodes.push_back(new Node(100, 100));
	mNodes.push_back(new Node(200, 150));
	mNodes.push_back(new Node(50, 300));
	mNodes.push_back(new Node(250, 300));
	mNodes.push_back(new Node(550, 150));
	mNodes.push_back(new Node(650, 300));
	mNodes.push_back(new Node(550, 350));

	addEdge(mNodes[0], mNodes[1]);
	addEdge(mNodes[0], mNodes[2]);
	addEdge(mNodes[2], mNodes[3]);
	addEdge(mNodes[1], mNodes[3]);
	addEdge(mNodes[3], mNodes[4]);
	addEdge(mNodes[3], mNodes[6]);
	addEdge(mNodes[4], mNodes[5]);
	addEdge(mNodes[6], mNodes[5]);
	addEdge(mNodes[1], mNodes[2]);
	addEdge(mNodes[4], mNodes[6]);
}


Graph::~Graph()
{
}

Node * Graph::getNode(int i){
	return mNodes[i];
}

int Graph::getGraphSize(){
	return mNodes.size();
}

void Graph::addEdge(Node * a, Node * b){
	Edge * edge = new Edge(a, b);
	mEdges.push_back(edge);
	a->addEdge(edge);
	b->addEdge(edge);
}

Edge * Graph::getEdge(int i){
	return mEdges[i];
}

int Graph::getEdgesSize(){
	return mEdges.size();
}