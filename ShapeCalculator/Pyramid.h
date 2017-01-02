#pragma once
#include "Shape3D.h"
class Pyramid :
	public Shape3D
{
public:
	Pyramid();
	~Pyramid();
	float length;
	float height;
private:
	void volumeCalc();
	float answer;
};

