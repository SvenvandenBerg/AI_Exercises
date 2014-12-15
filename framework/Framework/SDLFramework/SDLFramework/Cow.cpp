#include "Cow.h"
#include <iostream>

using namespace std;
Cow::Cow()
{
	mX = 100;
	mY = 100;
	mInterval = 2;
	this->SetTexture(mApplication->LoadTexture("cow-2.png"));
	this->SetSize(48, 48);
	this->SetOffset(mX, mY);

}


Cow::~Cow()
{
}

void Cow::Update(float deltatime){
	mTime += deltatime;
	if (mTime > mInterval){
		mTime = 0;
		mX += 1;
		mY += 1;
		this->SetOffset(mX, mY);
	}
	
}