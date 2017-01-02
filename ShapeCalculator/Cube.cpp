#include "stdafx.h"
#include "Cube.h"
#include "Menu.h"


Cube::Cube()
{
	answer = 0.0f;								//variables storing the shapes length and the result of calculations
	length = 0.0f;
}


Cube::~Cube()
{
}

void Cube::surfaceAreaCalc()
{
	answer = length * 6 * length;				//calculates surface area
	cout << "Your cubes surface area is " << answer << endl
	<<endl;
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();					//loads menu by initializing the class called menu and its method initialchoice
}


void Cube::volumeCalc()
{
	answer = length * length;					//calculates volume
	answer = answer * length;
	cout << "Your cubes volume is " << answer << endl
	<<endl; 
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();					//loads menu by initializing the class called menu and its method initialchoice
}


