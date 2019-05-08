#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student {
public:
	string name;
	string surname;
	string group;
	int age;
	int course;
	Student(string name, string surname, int age, string group, int course) {
		this->name = name;
		this->surname = surname;
		this->group = group;
		this->age = age;
		this->course = course;
	}
};
int main()
{
	vector<Student> vec1;
	int num;
	cout << "Number of students is : ";
	cin >> num;
	for (int i = 0; i < num; i++) {
		Student* student;
		cout << "Input name, surname, age, group, course : ";
		cin >> student->name >> student->surname >> student->group ;
		cin >> student->age >> student->course;
		vec1.push_back(*student);
	};
	return 0;
}

