#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
class Complex {
private:
	double Rez;
	double Im;
	double modul;
public:
	Complex() {}
	Complex(double r, double i) {
		Rez = r;
		Im = i;
	}
	void module() {
		modul = sqrt(pow(Rez, 2) + pow(Im, 2));
	}
	void get_complex() {
		cout << "Real is " << Rez << endl;
		cout << "Imaginary is " << Im << "*i" << endl;
		cout << "Module is " << modul << endl;
		cout << endl;
	}
};
int main()
{
	Complex number1(4, 3);
	number1.module();
	number1.get_complex();
	Complex number2(8.0, 6.0);
	number2.module();
	number2.get_complex();
	return 0;
}