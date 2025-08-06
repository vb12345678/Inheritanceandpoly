#include "Textrectangle.h"
#include <format>
using std::format;
Textrectangle::Textrectangle(Point ll, Point ur, string t) : Rectangle(ll, ur), text(t)//this last protion is a constructor
{

}
void Textrectangle::replacetext(string newtext)//syntax for using an inherited function from a header file
{
	text = newtext;
}
string Textrectangle::title() const
{
	return format("{0} - '{1}' ", Rectangle::title(), text);
}