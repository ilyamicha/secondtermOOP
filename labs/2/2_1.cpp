#include "pch.h"
#include <iostream>
using namespace std;
double add(double a, double b) {
	return a+b;
}
double substract(double a, double b) {
	return a-b;
}
double multiply(double a, double b) {
	return a*b;
}
int main()
{
	int answer;
	double a, b, result;
	double(*function)(double, double)=NULL;
	cout << "1-add \t 2-substract \t 3-multiply" << endl;
	cin >> answer;
	switch (answer) {
	case 1:
		function = add;
		break;
	case 2:
		function = substract;
		break;
	case 3:
		function = multiply;
		break;
	}
	cin >> a >> b;
	result = function(a, b);
	cout << "Result is " << result << endl;
	return 0;
}


