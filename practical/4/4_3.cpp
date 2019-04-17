#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;
int** fill(int **arr, int lines, int columns);
void display(int **arr, int lines, int columns);
int main()
{
	srand(time(0));
	int lines;
	int columns;
	cout << "Введите кол-во строк и столбцов" << endl;
	cin >> lines >> columns;
	int** a = new int*[lines];
	for (int i = 0; i < lines; i++) {
		a[i] = new int[columns];
	}
	a = fill(a, lines, columns);
	display(a, lines, columns);
	cin.get(); cin.get();
	return 0;
}
int** fill(int **arr, int lines, int columns) {
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = rand() % 40 + 10;
		}
	}
	return arr;
}
void display(int**arr, int lines, int columns) {
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			cout << "a[" << i << "][" << j << "]=" << arr[i][j] << endl;
		}
	}
}