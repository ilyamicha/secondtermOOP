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
	Tiles(string a, int b, int c, int d) {
		brand = a;
		size_h = b;
		size_w = c;
		price = d;
	}
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
	Tiles t1 ("Glinomessi",200,300,2500);
	Tiles t2 ("Pedro Rossi", 320, 400, 6000);
	t1.getData();
	t2.getData();
	return 0;
}

