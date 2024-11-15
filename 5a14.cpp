/*
#include <iostream>
using namespace std;
#define DIM 12
int main() {
	int arrayTemp[DIM], num, max, min, suma = 0, mesMax, mesMin, infMed, supMed, eqMed;
	float media;
	for (int i = 0; i < DIM; i++) {
		cin >> num;
		arrayTemp[i] = num;
	}
	
	for (int i = 0; i < DIM ; i++) {
		if (i == 0) {
			min = arrayTemp[i];
			max = arrayTemp[i];
			mesMax = i + 1;
			mesMin = i + 1;
		}
		else if (arrayTemp[i] > max) {
			max = arrayTemp[i];
			mesMax = i + 1;
	}
		else if (arrayTemp[i] < min) {
			min = arrayTemp[i];
			mesMin = i + 1;
		}
		suma += arrayTemp[i];
	}

	media = float (suma) / float(DIM);
	cout << "Mes amb temperatura minima: " << mesMin << endl;
	cout << "Mes amb temperatura maxima: " << mesMax << endl;
	cout << "Temperatura mitjana: " << media << endl;

	for (int i = 0; i < DIM; i++) {
		if ( arrayTemp[i] > media) {
			cout << "El mes " << i + 1 << " ha tingut temperatura superior a la mitjana anual.\n";
		}

		else if (arrayTemp[i] == media) {
			cout << "El mes " << i + 1 << " ha tingut temperatura igual a la mitjana anual.\n";
		}

		else {
			cout << "El mes " << i + 1 << " ha tingut temperatura inferior a la mitjana anual.\n";
		}
	}
}
*/