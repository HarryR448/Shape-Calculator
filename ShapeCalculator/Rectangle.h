#pragma once
#include "Shape2D.h"

class Rectangle:
		public Shape2D
{
public:
	Rectangle();
	~Rectangle();
	float length;
	float width;
private:
	void areaCalc();
	void perimeterCalc();
	float answer;

};

