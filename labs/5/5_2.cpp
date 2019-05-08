#include "pch.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace  std;
class Vector {
private:
	double x;
	double y;
public:
	Vector() {}
	Vector(double a, double b) {
		this->x = a;
		this->y = b;
	}
	Vector& operator=(Vector& a) {
		this->x = a.x;
		this->y = a.y;
		return *this;
	}
	friend bool operator==(Vector& a, Vector& b) {
		bool x_axis = a.x == b.x;
		bool y_axis = a.y == b.y;
		return x_axis && y_axis;
	}
	friend ostream& operator<<(ostream& out, const Vector& a) {
		out << "( " << a.x << " , " << a.y << " )" << endl;
		return out;
	}
	friend istream& operator>> (istream& in, const Vector& a) {         
		in >> a.x >> a.y;
		return in;
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

