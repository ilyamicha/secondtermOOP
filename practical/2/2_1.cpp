#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
    float a,b,n,m;
	a=4.8;
	b=-7.9;
	if (a >= b) 
		n = pow(a-b,1.0/3);
	else 
		n = a*a + (a-b)/sin(a*b);
	if (n<b)
		m = (n+a)/(-b) + sqrt(pow(sin(a),2)-cos(n));
	else if (n == b)
		m = b*b+tan(n*a);
	else 
		m = pow(b,3)+n*pow(a,2);
	cout << "a = "<< a <<'\n'<< "b = "<< b <<'\n'<< "n = "<< n <<'\n'<< "m = "<< m <<'\n';
    return 0;
}

