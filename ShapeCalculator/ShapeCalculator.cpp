// ShapeCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"				//precompiled header that contains helpful libraries such as iostream
#include "Menu.h"				//menu included so that it can be initialised

int main()
{
	Menu MenuObj;				//menu class initialised as a class
	MenuObj.initialChoice();	//menus initialchoice method is initialised on program startup
    return 0;					
}

