#pragma once
class Shape2D
{
public:
	Shape2D();
	~Shape2D();
	virtual void perimeterCalc();
	virtual void circumferenceCalc();
	virtual void areaCalc();
};

