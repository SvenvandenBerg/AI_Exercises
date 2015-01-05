#pragma once
#include "IGameObject.h"
#include "Edge.h"
#include <vector>

using namespace std;
class Node : public IGameObject
{
private:
	vector<Edge *> mEdges;
public:
	int mX, mY;
	Node(int x, int y);
	void addEdge(Edge * edge);
	Edge * getEdge(int index);
	virtual ~Node();
	virtual void Update(float deltatime);
};

