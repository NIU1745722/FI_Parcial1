/*
#include <iostream>
using namespace std;
#define DIM 10
int main() {
	int arrayNum[DIM], num, max=0, indice = 0;

	for (int i = 0; i < DIM; i++) {
		cin >> num;
		arrayNum[i] = num;
		if (i == 0) {
			max = arrayNum[i];
			indice = i;
		}
		else if (arrayNum[i] > max) {
			max = arrayNum[i];
			indice = i;
		}
	}

	cout << "El maxim del vector es " << max << " i es troba a l'índex " << indice;
}
*/