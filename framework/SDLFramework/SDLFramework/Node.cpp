#include "Node.h"


Node::Node(int x, int y)
{
	mX = x, mY = y;
	this->SetTexture(mApplication->LoadTexture("cat.bmp"));
	this->SetSize(50, 50);
	this->SetOffset(mX, mY);
}


Node::~Node()
{
}

void Node::Update(float deltatime){

}

void Node::addEdge(Edge * edge){
	mEdges.push_back(edge);
}

Edge * Node::getEdge(int i){
	return mEdges[i];
}