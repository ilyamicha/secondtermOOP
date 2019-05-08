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
	void set_real_complex(double real) {
		Rez = real;
	}
	void set_im_complex(double im) {
		Im = im;
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
	Complex number1, number2;
	number1.set_real_complex(4);
	number1.set_im_complex(3);
	number1.module();
	number1.get_complex();
	
	number2.set_real_complex(8.0);
	number2.set_im_complex(6.0);
	number2.module();
	number2.get_complex();
	return 0;
}

