#include "pch.h"
#include <iostream>
using namespace std;
double* selection(int s);
double* fill(double *arr, int s);
void display(double *arr, int s);
double* destruction(double *arr);
int main()
{
	int size = 0;
	bool i=true;
	int q=0;
   	while (i) {
		cout << "input size of array" << endl;
		cin >> size;
		double *a;
		cout << "creating array" << endl;
		a = selection(size);
		cout << "filling the array" << endl;
		a = fill(a, size);
		cout << "demonstration of the array" << endl;
		display(a,size);
		cout << "deleting array" << endl;
		a = destruction(a);
		cout << "do u want to enter a new array? (0/1) " << endl;
		cin >> q;
		if (q == 1) i = true;
		else i = false;
		}
	return 0;
}
double* selection(int s){			//создание массива
	double* arr = new double[s];
	return arr;
}
double* fill(double* arr, int s){	//заполнение массива
	for (int i = 0; i < s; i++)
		arr[i] = i + 1;
	return arr;
}
void display(double *arr,int s){	//вывод массива на экран
	for (int i = 0; i < s; i++) 
		cout << "a[" << i << "]=" << arr[i] << endl;
}
double* destruction(double *arr){	//уничтожение массива
	delete[]arr;
	return arr;
}