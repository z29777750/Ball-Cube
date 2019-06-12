#ifndef CUBE_H
#define CUBE_H
#include"GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double length);
	Cube(double length, const string &color);
	void setLength(double);
	double getLength() const;
	double getArea() const;
	double getVolume() const;
	string toString() const;
private:
	double length;
};
#endif 
