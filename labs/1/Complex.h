#include "pch.h"

#ifndef Complex_h
#define Complex_h

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class Complex {
public:
	double Rez;
	double Im;
};

Complex add(Complex a, Complex b); //сумма
Complex substract(Complex a, Complex b);// разность
Complex multiply(Complex a, Complex b);//умножение
Complex divide(Complex a, Complex b);// деление
double module(Complex a); //модуль
#endif
