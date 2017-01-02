#pragma once
#include "Shape2D.h"
class Circle :
	public Shape2D
{
public:
	Circle();
	~Circle();
	float radius;
private:
	void areaCalc();
	void circumferenceCalc();
	float answer;
	float pi;

};

