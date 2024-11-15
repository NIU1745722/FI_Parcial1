/*
#include <iostream>
#include "string.h"
using namespace std;
#define LONG 50
int main() {
	char cadena1[LONG] = "Bon dia ", cadena2[LONG], cadena3[LONG];
	int i = 0, j = 0, sizeCadena1, sizeCadenaT;// = strlen(cadena1);
	cin >> cadena2;
	sizeCadena1 = strlen(cadena1);
	sizeCadenaT = strlen(cadena2) + sizeCadena1;

	while (i <= sizeCadenaT) {
		if (cadena1[i] != '\0' && i < sizeCadena1) {
			cadena3[i] = cadena1[i];
		}
		else {
			cadena3[i] = cadena2[j];
			j++;
		}
		i++;
		cout << "PRINT: " << i << endl;
	}
	cout << cadena3;
}
*/