﻿#include "pch.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
class Complex{
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
	Complex& operator= (Complex& a) {
		this->Rez = a.Rez; 
		this->Im = a.Im;
		return *this;
	}
	Complex& operator++ () {
		this->Rez += 1;
		this->Im += 1;
		return *this;
	}
	Complex& operator-- () {
		this->Rez -= 1;
		this->Im -= 1;
		return *this;
	}
	friend bool operator==(const Complex& right, const Complex& left) {
		bool real = right.Rez == left.Rez;
		bool imaginary = right.Im == left.Im;
		return real && imaginary;
	}
	friend ostream& operator<<(ostream& out, const Complex& a) {
		out <<"Number is: "<< a.Rez << " + i * " << a.Im << endl;
		return out;
	}
	friend istream& operator>>(istream& in, const Complex& a) {
		in >> a.Rez >> a.Im;
		return in;
	}
	void module() {
		modul = sqrt(pow(Rez, 2) + pow(Im, 2));
	}
	void get_complex() {
		cout << "Rezal is " << Rez << endl;
		cout << "Imaginary is " << Im << "*i" << endl;
		cout << "Module is " << modul << endl;
		cout << endl;
	}
};
