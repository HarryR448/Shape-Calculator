#pragma once
#include "Shape3D.h"
class Cuboid :
	public Shape3D
{
public:
	Cuboid();
	~Cuboid();
	float length;
	float width;
	float height;
private:
	void volumeCalc();
	void surfaceAreaCalc();
	float answer;
};

