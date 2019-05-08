#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {}
	Human(string surname, string name, string midname, int age) {
		this->surname = surname; 
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	virtual void print() = 0;
	virtual ~Human();
};
class Student : public Human {
private:
	bool on_lesson;
public:
	Student() : Human() {
		on_lesson = true;
	}
	Student(string surname, string name, string midname, int age, bool on_lesson) : Human(surname, name, midname, age) {
		this->on_lesson = on_lesson;
	}
	void print() {
		cout << "Surname is : " << surname << endl << "Name is : " << name << endl
		<< "Midname is : " << midname << endl << "Age is : " << age << endl << "On lesson? " << on_lesson << endl;
	}
	~Student();
};
class Boss : public Human {
private:
	int number_of_workers;
protected:
	Boss() : Human() {
		number_of_workers = 0;
	}
	Boss(string surname, string name, string midname, int age, int number_of_workers) : Human(surname, name, midname, age) {
		this->number_of_workers = number_of_workers;
	}
	void print() {
		cout << "Surname is : " << surname << endl << "Name is : " << name << endl 
		<< "Midname is : " << midname << endl<< "Age is : " << age << "Number of workers is : " << number_of_workers << endl;
	}
	~Boss();
};
