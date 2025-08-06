#pragma once
#include <string>
using std::string;
struct Point
{
	int x;
	int y;
	void Shift(int x, int y);
	string title() const;//can add functions to a struct just like a class
	Point operator+(Point const& rhs) const;
};