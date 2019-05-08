#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Height: " << size_h << endl;
     	cout << "Width: " << size_w << endl;
		cout << "Price: " << price << endl;
		cout << endl;
	}
};
int main()
{
	Tiles t1, t2;
	t1.brand = "Glinomessi";
	t1.size_h = 200;
	t1.size_w = 300;
	t1.price = 2500;

	t2.brand = "Pedro Rossi";
	t2.size_h = 320;
    t2.size_w = 400;
	t2.price = 6000;
	
	t1.getData();
	t2.getData();
	return 0;
}

