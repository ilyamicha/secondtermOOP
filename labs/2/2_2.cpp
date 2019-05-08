#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;
int * reverse(int * a, int size);
int * increase(int * a, int size);
int * decrease(int * a, int size);
int* (*universal_function(int* a, int size))(int*, int);

int main() {
	srand(time(0));
	int * (*function)(int*, int)=NULL;
	int size = 0;
	cout << "Enter size of array : ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
		cout << array[i] << ' ';
	}
	cout << '\n';
	function = universal_function(array, size);
	array = function(array, size);
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << '\n';
	function = 0;
	delete[] array;
	return 0;
};
int * reverse(int * a, int size) {
	for (int i = 0; i < size / 2; i++) {
		swap(a[i], a[size - 1 - i]);
	}
	return a;
}

int * increase(int * a, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
    return a;
}

int * decrease(int * a, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}

int* (*universal_function(int* a, int size))(int*, int) {
	int sum = 0;
	for (int i = 1; i < size; i++) {
		sum += a[i];
	}
	if (sum == a[0]) {
		return reverse;
	}
	else if (sum > a[0]) {
		return increase;
	}
	else {
		return decrease;
	}
}
