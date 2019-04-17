#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Animals {
protected:
	string name;
	int age;
	int weigth;
public:
	virtual void sound() = 0;
	virtual void area() = 0;

};
class Cat : public Animals{
	Cat(string n,int a,int w){
		name = n;
		age = a;
		weigth = w;
	};
	void sound() { cout << "Meoooooooow" << endl; }
	void area() { cout << "Land" << endl; }
};
class Dog : public Animals {
	Dog(string n, int a, int w) {
		name = n;
		age = a;
		weigth = w;
	};
	void sound() { cout << "Gaaaaaav" << endl; }
	void area() { cout << "Land" << endl; }

};
class Parrot : public Animals {
	Parrot(string n, int a, int w) {
		name = n;
		age = a;
		weigth = w;
	};
	void sound() { cout << "Chirik" << endl; }
	void area() { cout << "Land and air " << endl; }

};


