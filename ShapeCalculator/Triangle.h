#pragma once
#include "Shape2D.h"
class Triangle :
	public Shape2D
{
public:
	Triangle();
	~Triangle();
	float baselength;
	float height;
	float length1;
	float length2;
private:
	void areaCalc();
	void perimeterCalc();
	float answer;
};


