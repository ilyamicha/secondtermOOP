#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Book {
	string name;
	string author;
	int year;
	int num_of_pages;
	void display_book(){
		cout<<"Name:"<<name<<endl;
		cout<<"Author:"<<author<<endl;
	}
};
int main()
{
	Book book={"The snowman","Jo Nesbo",2007,460};
	book.display_book();
	system("pause");
	return 0;    
}

