#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{   
	string name;
	cout<<"Введите свое имя:"<<endl;
    cin>>name; //ввод через поток ввода
    cout << "Приветствую тебя,"<<name<<'\n';//вывод через поток вывода
	return 0;
}

