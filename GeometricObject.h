#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(const string &color);
	void setColor(const string &color);
	string getColor() const;
	string toString() const;
private:
	string color;
};
#endif
