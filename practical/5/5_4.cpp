#include "pch.h"
#include <iostream>
using namespace std;
int add(int a, int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
int substract(int a, int b) {
	return a - b;
}
double substract(double a, double b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
double multiply(double a, double b) {
	return a * b;
}
int divide(int a, int b) {
	if (!b) return NULL;
	else return float(a) / b;
}
double divide(double a, double b) {
		if (!b) return NULL;
		else return a / b;
}
int main()
{
	int a, b;
	double c, d;
	cin >> a >> b >> c >> d;
	cout << "Summa:" << endl;
	cout<<add(a, b)<<endl<<add(c,d)<<endl;
	cout << "Vichitanie:" << endl;
	cout << substract(a, b) << endl << substract(c, d) << endl;
	cout << "Proisvedenie:" << endl;
	cout << multiply(a, b) << endl << multiply(c, d) << endl;
	cout << "Delenie:" << endl;
	cout << divide(a, b) << endl << divide(c, d) << endl;
	cin.get(); cin.get();
	return 0;
}


