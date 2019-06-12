#include"GeometricObject.h"

GeometricObject::GeometricObject()
{
	color = "White";
}
GeometricObject::GeometricObject(const string&color)
{
	this->color = color;
}
void GeometricObject::setColor(const string &color)
{
	this->color = color;
}
string GeometricObject::getColor() const
{
	return color;
}
string GeometricObject::toString() const
{
	return "Geometric Object";
}
