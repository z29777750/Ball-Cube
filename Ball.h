#ifndef BALL_H
#define BALL_H
#include"GeometricObject.h"

class Ball :public GeometricObject
{
public:
	Ball();
	Ball(double radius);
	Ball(double radius, const string &color);
	void setRadius(double);
	double getRadius()const;
	double getArea() const;
	double getVolume() const;
	virtual string toString()const;
private:
	double radius;
};
#endif 
