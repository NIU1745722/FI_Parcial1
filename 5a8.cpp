/*
#include <iostream>
using namespace std;
#define DIM 12
int main() {
	int vector[DIM], num;

	for (int i = 0; i < DIM; i++ ) {
		cin >> num;
		vector[i] = num;
	}

	cout << "Entrada: ";

	for (int i : vector) {
		cout << i << " ";
	}
	cout << endl << "Sortida: ";
	for (int j = 0; j < DIM; j++) {
		if (vector[j] < 0) {
			vector[j] = 0;
		}
	}

	for (int i : vector) {
		cout << i << " ";
	}
}
*/