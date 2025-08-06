#pragma once
#include "Point.h"
class Rectangle
{
private:
	Point lowerleft;
	Point upperright;
public:
	Rectangle(Point ll, Point ur);
	void Shift(int dx, int dy);//just the declarations of the functions the actul declartions are in the cpp files 
	int area() const;//tis is const because it doesnt change the member variables of rectangle
	virtual string title() const;//virtual is the keyword for a virtual function
	auto operator<=>(Rectangle const& rhs)const//using these operators <=> here provides access to the operators further on in the program
	{                                          // operator overloading
		return area() <=> rhs.area();//
	}
};

