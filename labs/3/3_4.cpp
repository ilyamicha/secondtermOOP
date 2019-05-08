#include "pch.h"
#include <iostream>
using namespace  std;
class Vector {
private:
	double x;
	double y;
public:
	void set_vector(double a, double b) {
		this->x = a;
		this->y = b;
	}
	double get_module() {
		double modul = sqrt(pow(x, 2) + pow(y, 2));
		return modul;
	}
	void add(Vector v) {
		x += v.x;
		y += v.y;
	}
	void substract(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	void get_vector() {
		cout << "X is " << x << " Y is " << y << endl;
	}
};

int main()
{
	Vector vector1, vector2, vector3;
	vector1.set_vector(10,10);
	vector1.get_vector();
	cout << "vector1 module is " << vector1.get_module() << endl;
	vector2.set_vector(4,3);
	vector2.add(vector1);
	cout << "vector1 + vector2 : ";
	vector2.get_vector();
	vector3.set_vector(1,1);
	vector2.substract(vector3);
	cout << "vector1 - vector3 : ";
	vector2.get_vector();
	vector2.get_vector();
	cout << "vector2 module is " << vector2.get_module() << endl;
	return 0;
}