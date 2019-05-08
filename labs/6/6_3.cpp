#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
	int age;
	string nickname;
	string food;
public:
	Animal(int age, string nickname, string food) {
		this->food = food;
		this->age = age;
		this->nickname = nickname;
	}
	virtual void devotion() = 0;
};
class Dog : public Animal {
private:
	string use_in;
public:
	Dog(int age, string nickname, string food, string use_in) : Animal(age, nickname, food) {
		this->use_in = use_in;
	}
	void devotion() {
		cout << "Devotion of the owner" << endl;
	}
};
class Cat : public Animal {
private:
	string pedigree;
public:
	Cat(int age, string nickname, string food, string pedigree) : Animal(age, nickname, food) {
		this->pedigree = pedigree;
	}
	void devotion() {
		cout << "Affections for home" << endl;
	}
};