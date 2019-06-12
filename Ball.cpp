#include"Ball.h"

Ball::Ball()
{
	radius = 1;
}
Ball::Ball(double radius)
{
	setRadius(radius);
}
Ball::Ball(double radius, const string &color)
{
	this->radius = radius;
}
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}
double Ball::getRadius()const
{
	return radius;
}
double Ball::getArea()const
{
	return radius * radius*3.14159 * 4;
}
double Ball::getVolume()const
{
	return radius * radius*radius * 4 / 3 * 3.14159;
}
string Ball::toString() const
{
	return "Ball";
}
