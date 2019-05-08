#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	string name;
	string surname;
	int age;
	string group;
	int course;
	Student(string name, string surname, int age, string group, int course) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->group = group;
		this->course = course;
	}
};
class Chief : public Student {
public:
	string phonenumber;
	int rate;
	Chief(string name, string surname, int age, string group, int course, string phonenumber, int rate) :Student(name, surname, age, group, course) {
		this->phonenumber = phonenumber;
		this->rate = rate;
	}
	void display() {
		cout << "Number of Chief is: " << phonenumber << endl;
	}
};
