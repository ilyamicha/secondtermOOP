#include "pch.h"
#include <iostream>
using namespace std;
struct Group_of_students {
	string group_id;
	int date_basis;
	int count_of_memberships;
	string members [100];
};
int main()
{
	Group_of_students group1={
		"INBO-03-18",
		2018,
		28,
		{
		  "August",
		  "Dimmon",
		  "Lekha",
		  "Puvel",
		  "Slavik",
		  "Tolik"
		}
	};
}

 