#include "pch.h"
#include <iostream>
using namespace std;
struct Coordinate {
	double x;
	double y;
	double z;
};
struct Vector {
	Coordinate v1;
	Coordinate v2;
};

int main()
{
	Vector vector1 = { {1,2,3},{3,4,5} };
	return 0;
}

 