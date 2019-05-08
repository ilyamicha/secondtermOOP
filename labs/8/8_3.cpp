#include"pch.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;
class Car {
public:
	string owner_name;
	int number;
	friend istream& operator>>(istream& in, Car& a) {
		in >> a.owner_name >> a.number;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Car& a) {
		out << "Owner is: " << a.owner_name << " Number of car is : " << a.number<<" Customer was served! "<< endl;
		return out;
	}
};
int main() {
	queue <Car> Car_wash;  
	Car owner;
	int k = 0;
	int h = 0;
	cout << "How long does the car wash work? " << endl;
	cin >> h;
	cout << "Car wash can serve up to 5 people per hour!!!" << endl;
	for (int l = 0; l < h; ++l) {
		cout << "How many cars arrived? " << endl;
		cin >> k;
		if (k > 0) {
			cout << "Input name of owner and number of car : " << endl;
			for (int j = 0; j < k; j++) {
				cin >> owner;
				Car_wash.push(owner);
			}
			for (int i = 0; i < Car_wash.size(); i++) {
				owner = Car_wash.front();
				cout << owner;
				Car_wash.pop();
			}
		}
		else {
			cout << "No customers!" << endl;
		}
	}
	return 0;
}