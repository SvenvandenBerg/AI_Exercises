#pragma once
#include "IGameObject.h"
class Cow :
	public IGameObject
{
private:
	int mX, mY;
	float mTime, mInterval;
public:
	Cow();
	virtual ~Cow();
	virtual void Update(float deltatime);
};

