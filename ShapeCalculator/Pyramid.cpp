#include "stdafx.h"
#include "Pyramid.h"
#include "Menu.h"


Pyramid::Pyramid()
{			
	answer = 0.0f;												//a variable to store calculation results
	length = 0.0f;
	height = 0.0f;
}


Pyramid::~Pyramid()
{
}


void Pyramid::volumeCalc()
{
	answer = ((length * length) * height) / 3;					// calculation for pyramids volume
	cout << "Your pyramids volume is " << answer << endl		// pyramids volume is displayed
	<<endl;														//empty row of space`to increase program readability
	system("pause");
	Menu MenuObj;
	MenuObj.initialChoice();									//loads menu by initializing the class called menu and its method initialchoice
}



