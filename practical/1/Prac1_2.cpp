﻿#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
enum operations {
	add=1,
	substract,
	multiply,
	divide
};
int main()
{
	setlocale(0,"");
	float num1;
	float num2;
	int operation;
	cout << "Сумма: 1 \tВычитание: 2 \tУмножение: 3 \tДеление: 4" << endl;
	cout << "Введите первое число:" << endl;
	cin >> num1;
	cin.ignore();
	cout << "Введите второе число:" << endl;
	cin>>num2;
	cin.ignore();
	cout << "Введите номер операции:" << '\n';
	cin>>operation;
	cin.ignore();
	switch (operation) {
	case operations::add:
		cout<<"\tОтвет:"<<num1 + num2<<endl;
		break;
	case operations::substract:
		cout<<"\tОтвет:"<<num1 - num2<<endl;
		break;
	case operations::multiply:
		cout<<"\tОтвет:"<<num1 * num2<<endl;
		break;
	case operations::divide:
		if (num2 != 0) 
			cout<<"\tОтвет:"<<(float)num1/num2<<endl;
		
		else 
			cout<<"Делить на ноль нельзя!"<<endl;
		
		break;
	}
	system("pause");
	return 0;
}

