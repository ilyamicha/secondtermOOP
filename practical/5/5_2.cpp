#include "pch.h"
#include <iostream>
using namespace std;
int startindex;
int currentindex;
int minindex;
void selectionsort(int* arr, int size);
void selectionsort(double* arr, int size);
int main()
{
	int size = 10;
	int array[10] = { 25,58,36,11,59,14,25,30,12,10 };
	double ar[10] = { 51.5,43.001,92,14.7,45.21,97.3,17.26,82.1,58.2,145.2};
	selectionsort(array, size);
	selectionsort(ar, size);
	for (int i = 0; i < size; i++) {
		cout << "integer array:" << array[i];
		cout << '\t';
		cout << "double array:" << ar[i] << endl;
	}
	cin.get(); cin.get();
	return 0;
}
void selectionsort(int* arr, int size) {
	for (startindex = 0; startindex < size - 1; startindex++) {
		minindex = startindex;
		for (currentindex = startindex + 1; currentindex < size; currentindex++) {
			if (arr[currentindex] < arr[minindex]) minindex = currentindex;
		}
		swap(arr[startindex], arr[minindex]);
	}
}
void selectionsort(double* arr, int size) {
	for (startindex = 0; startindex < size - 1; startindex++) {
		minindex = startindex;
		for (currentindex = startindex + 1; currentindex < size; currentindex++) {
			if (arr[currentindex] < arr[minindex]) minindex = currentindex;
		}
		swap(arr[startindex], arr[minindex]);
	}
}
