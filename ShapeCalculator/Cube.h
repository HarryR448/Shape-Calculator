#pragma once
#include "Shape3D.h"
class Cube :
	public Shape3D
{
public:
	Cube();
	~Cube();
	float length;
private:
	void surfaceAreaCalc();
	void volumeCalc();
	float answer;
};

