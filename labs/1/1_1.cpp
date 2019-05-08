#include "pch.h"
#include "Complex.h"

int main()
{
	Complex a,b,result;
	bool exit = false;
	int q;
	while (!exit) {
		cout << "1-add \t 2-substract \t 3-multiply \t 4-divide \t 5-exit" << endl;
		cin >>q;
		switch (q) {
			case 1:
			cout << "Real and Imaginary part of the first number :  ";
			cin >> a.Rez >> a.Im;
			cout << "Real and Imaginary part of the second number : ";
			cin >> b.Rez >> b.Im;
			result = add (a, b);
			cout << "Result is " << result.Rez << "+i*" << result.Im << endl;
		    break;
		case 2:
			cout << "Real and Imaginary part of the first number :  ";
			cin >> a.Rez >> a.Im;
			cout << "Real and Imaginary part of the second number : ";
			cin >> b.Rez >> b.Im;
			result = substract(a, b);
			cout << "Result is " << result.Rez << "+i*" << result.Im << endl;
			break;
		case 3:
			cout << "Real and Imaginary part of the first number :  ";
			cin >> a.Rez >> a.Im;
			cout << "Real and Imaginary part of the second number : ";
			cin >> b.Rez >> b.Im;
			result = multiply(a, b);
			cout << "Result is " << result.Rez << "+i*" << result.Im << endl;
			break;
		case 4:
			cout << "Real and Imaginary part of the first number :  ";
			cin >> a.Rez >> a.Im;
			cout << "Real and Imaginary part of the second number : ";
			cin >> b.Rez >> b.Im;
			result = divide(a, b);
			cout << "Result is " << result.Rez << "+i*" << result.Im << endl;
			break;
		case 5:
			cout << "exit";
			exit = true;
			break;
		}
	}
	return 0;
}