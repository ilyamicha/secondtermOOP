#include "pch.h"
#include <iostream>
using namespace std;
class Property {
public:
	Property() {};
	virtual double tax() = 0;
protected:
	double worth;
};
class Appartment : public Property {
public:
	Appartment(double x) { worth = x; }
	double tax() {
		return worth/ 1000;
	}
};
class CountryHouse : public Property {
public:
	CountryHouse(double x) { worth = x; }
	double tax() {
		return worth / 500;
	}
};
class Car : public Property {
public:
	Car(double x) { worth = x; }
	double tax() {
		return worth / 200;
	}
};
int main()
{
	Property**array = new Property*[7];
	array[0] = new Appartment (15000000);
	array[1] = new Appartment (10000000);
	array[2] = new Appartment (250000000);
	array[3] = new Car(1000000);
    array[4] = new Car(250000);
	array[5] = new CountryHouse(11000000);
	array[6] = new CountryHouse(400000);
	for (int i = 0; i < 7; i++) {
		cout << "Tax is: " << array[i]->tax() <<"$"<< endl;
	}
	cin.get(); cin.get();
    return 0; 
}

