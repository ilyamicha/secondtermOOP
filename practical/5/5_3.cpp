#include "pch.h"
#include <iostream>
int location;
using namespace std;
void insertsort(int*, int );
void insertsort(double* , int );
int main()
{
	int size = 10;
	int array[10] = { 56,145,14,15,18,75,89,35,14,36 };
	double arr[10] = { 15.2,59,48,145.962,58,69.25,69.1,27.6,45.2,54.3 };
	insertsort(array, size);
	insertsort(arr, size);
	for (int i = 0; i < size; i++) {
		cout << "integer array:" << array[i];
		cout << '\t';
		cout << "double array:" << arr[i] << endl;
	}
	cin.get(); cin.get();
	return 0;
  }
void insertsort(int* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		int newElement = arr[i];
		location = i - 1;
		while (location >= 0 && arr[location] > newElement)
		{
			arr[location + 1] = arr[location];
			location = location - 1;
		}
		arr[location + 1] = newElement;
	}
}
void insertsort(double* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		double newElement = arr[i];
		location = i - 1;
		while (location >= 0 && arr[location] > newElement)
		{
			arr[location + 1] = arr[location];
			location = location - 1;
		}
		arr[location + 1] = newElement;
	}
}
