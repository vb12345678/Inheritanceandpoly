#pragma once
#include "Rectangle.h"//the base class is rectangle that we are inheriting from
#include <string>
using std::string;
class Textrectangle : public Rectangle
{
	string text;
public:
	Textrectangle(Point ll, Point ur, string t);//this is a constructor
	void replacetext(string newtext);//function declaration
	virtual string title() const override;//overide has the same functionality as a virtual function
};

