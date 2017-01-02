#pragma once
class Shape3D
{
public:
	Shape3D();
	~Shape3D();
	virtual void volumeCalc();
	virtual void surfaceAreaCalc();

};

