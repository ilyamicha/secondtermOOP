#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Screen {
protected:
	int pixel_density;
	int diagonal;
	string type_of_matrix;
public:
	virtual void new_technology() = 0;
};
class Keyboard {
protected:
	string kyboard_layout;
	string type_of_keyboad;
public:
	virtual void switch_type() = 0;
};
class Notebook : public Screen, Keyboard {
public:
	Notebook(int a, string b, string c, string d) {
		diagonal = a;
		type_of_matrix = b;
		kyboard_layout = c;
		type_of_keyboad = d;
	}
	void new_technology() {
		cout << "There is fingerprint scanner!!!" << endl;
	}
	void switch_type() {
		cout << "There is island type membrane keyboard!!!";
	}
};
class Phone : public Screen, Keyboard {
public:
	Phone(int a,int b, string c, string d) {
		diagonal = a;
		pixel_density = b;
		type_of_matrix = c;
		kyboard_layout = d;
	}
	void new_technology() {
		cout << "It's revolution, Johnny!" << endl;
	}
};
class Computer : public Screen, Keyboard {
public:
	Computer(string a, string b, string c) {
		type_of_matrix = a;
		kyboard_layout = b;
		type_of_keyboad = c;
	}
	void new_technology() {
		cout << "The fastest processor!!!" << endl;
	}
	void switch_type() {
		cout << "There is  mechanical keyboard!!!";
	}
};
int main() {};