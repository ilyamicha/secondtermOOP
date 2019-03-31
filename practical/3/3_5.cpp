#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Book {
	string author;
	string name;
	int date;
	int pages;
};
struct Biblio {
	string name;
	int year;
	int assortment;
	Book books[10];
};
int main()
{
	setlocale(0, "");
	Biblio library;
	cout << "Введите название библиотеки" << endl;
	getline(cin, library.name);
	cout << "Введите год основания" << endl;
	cin >> library.year;
	cout << "Введите количество книг<10\n"; 
	cin >> library.assortment;
	for (int i = 0; i < library.assortment; i++) {
		cout << "Введите имя автора" << endl;
		cin.get();
		getline(cin, library.books[i].author);
		cout << "Введите название книги" << endl;
		getline(cin, library.books[i].name);
		cout << "Введите год издания" << endl;
		cin >> library.books[i].date;
		cout << "Введите количество страниц в книге" << endl;
		cin >> library.books[i].pages;
		cout << library.books[i].author << '\n' << library.books[i].name << '\n' << library.books[i].date << '\n' << library.books[i].pages << endl;
	}
	system("pause");
	return 0;
	}

