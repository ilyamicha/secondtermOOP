#include "pch.h"
#include "Complex.h"
Complex add(Complex a, Complex b) {
	Complex result;
	result.Rez = a.Rez + b.Rez;
	result.Im = a.Im + b.Im;
	return result;
};
Complex substract(Complex a, Complex b) {
	Complex result;
	result.Rez = a.Rez - b.Rez;
	result.Im = a.Im - b.Im;
	return result;
};
Complex multiply(Complex a, Complex b) {
	Complex result;
	result.Rez = a.Rez*b.Rez - a.Im*b.Im;
	result.Im = a.Rez*b.Im + a.Im*b.Rez;
	return result;
};
Complex divide(Complex a, Complex b) {
	Complex result;
	result.Rez = (a.Rez*b.Rez + a.Im*b.Im) / (pow(b.Rez, 2) + (pow(b.Im, 2)));
	result.Im = (b.Rez*a.Im - a.Rez*b.Im) / (pow(b.Rez, 2) + (pow(b.Im, 2)));
	return result;
};
double module(Complex a) {
	double result;
	result = sqrt(pow(a.Rez, 2) + pow(a.Im, 2));
	return result;
};