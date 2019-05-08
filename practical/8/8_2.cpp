#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	ofstream file("test.txt");
	string str;
	cout << "Input text: " << endl;
	getline(cin, str);
	file << str;
	file.close();
	return 0;
}

