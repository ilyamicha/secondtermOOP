#include "pch.h"
#include <iostream>
using namespace std;
struct Car {
	string brand;
	string model;
	int year;
	float sec_to_100;
	int max_speed;
};
int main()
{
	Car car1{
		"Volvo",
		"XC90",
		2002,
		5.9,
		220
	};
	Car car2{
		"Daewoo",
		"Nexia",
		1994,
		12.5,
		160
	};
    return(0);
}

