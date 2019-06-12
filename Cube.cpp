#include"Cube.h"

Cube::Cube()
{
	length = 1;
}
Cube::Cube(double length)
{
	setLength(length);
}
Cube::Cube(double length, const string &color)
{
	setLength(length);
	setColor(color);
}
void Cube::setLength(double length)
{
	this->length = (length >= 0) ? length : 0;
}
double Cube::getLength()const
{
	return length;
}
double Cube::getArea()const
{
	return 6 * length*length;
}
double Cube::getVolume()const
{
	return length * length*length;
}
string Cube::toString()const
{
	return "Cube";
}
