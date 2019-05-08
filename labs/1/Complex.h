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

Complex add(Complex a, Complex b); //�����
Complex substract(Complex a, Complex b);// ��������
Complex multiply(Complex a, Complex b);//���������
Complex divide(Complex a, Complex b);// �������
double module(Complex a); //������
#endif
