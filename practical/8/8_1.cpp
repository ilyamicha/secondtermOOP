#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream file;
	file.open("test.txt");
    if (file.is_open()) {
		string str;
		while (!file.eof()) {
			file >> str;
			cout << str << endl;
		}
		file.close();
	}
	else 
		cout << "Error opening!" << endl;
	system("pause");
	return 0;
}

   

