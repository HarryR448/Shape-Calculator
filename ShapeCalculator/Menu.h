#pragma once
class Menu
{
public:
	Menu();
	~Menu();
	void initialChoice();
private:
	float length;
	float length1;
	float length2;
	float height;
	float width;
	void shapeChoice();
	bool menuloop;
	void attributeChoice();
	void initialiseCalculations();
	int shapeselection;
	int attributeselection;
	void statsInput();
	void enterWidth();
	void enterHeight();
	void enterLength();
	void enterLength1();
	void enterLength2();
};

