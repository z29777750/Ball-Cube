#include"GeometricObject.h"
#include"Ball.h"
#include"Cube.h"

int main()
{
	int a, b;
	string c1, c2;
	cin >> a >> c1 >> b >> c2;

	Ball Ball(a);
	Ball.setColor(c1);
	cout << fixed << setprecision(1);
	cout << Ball.toString() << endl
		<< "radius:" << Ball.getRadius()
		<< ",area:" << Ball.getArea()
		<< ",volume:" << Ball.getVolume()
		<< ",color:" << Ball.getColor() << endl;

	Cube Cube(b);
	Cube.setColor(c2);
	cout << Cube.toString() << endl
		<< "length:" << Cube.getLength()
		<< ",area:" << Cube.getArea()
		<< ",volume:" << Cube.getVolume()
		<< ",color:" << Cube.getColor() << endl;
	system("pause");

}
