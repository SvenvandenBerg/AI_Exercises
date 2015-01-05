#include "Edge.h"

Edge::Edge(Node * a, Node * b)
{
	mXA = a->mX;
	mYA = a->mY;
	mXB = b->mX;
	mYB = b->mY;
}


Edge::~Edge()
{
}
