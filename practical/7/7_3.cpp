#include "pch.h"
#include <iostream>
using namespace std;
class Vehicle {
protected:
	int wheels;
	int max_speed;
	int amount_of_passanger;
public:
	virtual void name() = 0;
};
class Car : public Vehicle{
public:
	Car() {
		wheels=4;
	    max_speed=150;
		amount_of_passanger=6;
	}
	void name() {
		cout << "It's Car" << endl;
	}
};
class Bus : public Vehicle{
public:
	Bus() {
		wheels = 4;
		max_speed = 90;
		amount_of_passanger = 70;
	}
	void name() {
		cout << "It's Bus" << endl;
	}
};
class Bike : public Vehicle{
public:
	Bike() {
		wheels = 2;
		max_speed = 15;
		amount_of_passanger = 2;
	}
	void name() {
		cout << "It's Bike" << endl;
	}

};

