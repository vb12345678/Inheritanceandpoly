#include "Point.h"//inheriting from the point header class we created
#include "Rectangle.h"
#include "Textrectangle.h"
#include <Print>
using std::println;

void display(Rectangle const& r)
{
	println("{0} has area {1}", r.title(), r.area());
}

int main()
{
	Point const origin{ 0,0 };
	Point const twotwo{ 2,2 };
	Rectangle twobytwo(origin, twotwo);
	auto a = twobytwo.area();
	twobytwo.Shift(1, 1);
	a = twobytwo.area();
	Textrectangle first(origin, twotwo, "2x2 square");
	Textrectangle second(Point{1,1},Point(2,2), "2x2 square");
	first.Shift(1, 1);
	auto a2 = second.area();
	first.replacetext("2x2 square");
	auto s = origin.title();
	s = twobytwo.title();
	s = first.title();

	display(twobytwo);
	display(first);
	auto psum = twotwo + twotwo;
	Rectangle bigger(Point{ 1,4 }, Point{ 4,7 });
	bool smaller = (twobytwo >= bigger);
}