#include "pch.h"
#include "Complex.h"
int main() {
	ifstream file;
	file.open("Complex.txt");
	if (file.is_open()) {
		int n = 0;
		file >> n;
		Complex* p = new Complex[n];
		for (int i = 0; i < n; i++) {
			file >> p[i].Rez;
			file >> p[i].Im;

		}
	    file.close();
		int maxindex = 0;
		double max = module(p[0]);
		for (int i = 0; i < n; i++) {
			if (max <= module(p[i])) {
				maxindex = i;
				max = module(p[i]);
			}
		}
		cout << "Maximum index is " << maxindex + 1 << endl;
		cout << "Maximum number is " << max << endl;
		delete[] p;
	}
	else cout << "Error" << endl;
	
	return 0;
}