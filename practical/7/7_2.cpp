#include "pch.h"
#include <iostream>
using namespace std;
class Figure {
protected:
	int number_of_points;
public:
	virtual void name() = 0;
 };
class Quadrangle :public Figure {
public:
	Quadrangle() { number_of_points = 4;}
};
class Rhombus : public Quadrangle {
public:
	int diag1;
	int diag2;
	Rhombus(int v, int b) { diag1 = v, diag2 = b; }
	void name() { cout << "it is rhombus!" << endl; }
};
class Rectangle : public Quadrangle {
public:
	int a;
	int b;
	Rectangle(int v, int c) { a = v; b = c; }
	void name() { cout << "it is rectangle!" << endl; }
};


