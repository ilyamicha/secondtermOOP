#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Alive {
protected:
	int age;
	int size;
	string habital;
	string food;
public:
	Alive(int age, int size, string habital, string food) {
		this->age = age;
		this->size = size;
		this->habital = habital;
		this->food = food;
	}
	virtual void move() = 0;
};
class Bird : public Alive {
private:
	bool egs;
public:
	Bird(int age, int size, string habital, string food, bool egs) : Alive(age, size, habital, food) {
		this->egs = egs;
	}
	void move() {
		cout << "Fly or walk" << endl;
	}
};
class Fish : public Alive {
protected:
	int cost;
public:
	Fish(int age, int size, string habital, string food, int cost) : Alive(age, size, habital, food) {
		this->cost = cost;
	};
	void move() {
		cout << "Swim or walk" << endl;
	}
};
class Animal : public Alive {
protected:
	bool mammal;
public:
	Animal(int age, int size, string habital, string food, bool mammal) : Alive(age, size, habital, food) {
		this->mammal = mammal;
	}
	void move() {
		cout << "All types of movement" << endl;
	}
};