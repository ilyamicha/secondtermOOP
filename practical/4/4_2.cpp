#include "pch.h"
#include <iostream>
using namespace std;
int* swap(int *arr, int s);
void display(int *arr, int s);
int main()
{
	int size = 12;
	int*a = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = i + 1;
	}
	swap(a, size);
	display(a, size);
	delete[]a;
	return 0;
}

int* swap(int* arr, int s) {		//сортировка
	for (int i = 0; i < s - 1; i++) {
		if (i % 2 == 0) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}

	}
	return arr;
}
void display(int *arr, int s) {	//вывод массива на экран
	for (int i = 0; i < s; i++)
		cout << "a[" << i << "]=" << arr[i] << endl;
}