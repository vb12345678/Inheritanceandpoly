#include "Rectangle.h"
#include "Point.h"
#include <format>
using std::format;


Rectangle::Rectangle(Point ll, Point ur) : lowerleft(ll), upperright(ur)
{
}
void Rectangle::Shift(int dx, int dy)//pulling in shift from rectangle headder
{
	lowerleft.Shift(dx, dy);
	upperright.Shift(dx, dy);
}
int Rectangle::area() const//pulling in area from rectangle headder file
{
	return (upperright.x - lowerleft.x) * (upperright.y - lowerleft.y);
}
string Rectangle::title()const
{
	return format("{0} to {1}", lowerleft.title(), upperright.title());
}