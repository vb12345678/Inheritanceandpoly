#include "Point.h"
#include "Rectangle.h"
#include <format>//builds a dtring of charcters
using std::format;


void Point::Shift(int dx, int dy)
{
	x += dx;
	y += dy;
}
string Point::title()const
{
	return std::format("[{0},{1}]", x,y);
}
Point Point::operator+(Point const& rhs) const
{
	return Point(x + rhs.x, y + rhs.y);
}
