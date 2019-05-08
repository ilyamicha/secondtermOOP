#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Child {
private:
	string name;
	string surname;
	int age;
public:
	void input(string a,string b,int c){
		name = a;
		surname = b;
		age = c;
	}
	void display() {
		cout << "Name is " << name << endl;
		cout << "Surname is " << surname << endl;
		cout << "Age is " << age << endl;
	}
};
int main()
{
	Child first, second;
	first.input("Alex", "Smile", 28);
	second.input("Lora", "Stark", 23);
	first.display();
	second.display();
	return 0;
}

