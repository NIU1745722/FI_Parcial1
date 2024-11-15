/*
#include <iostream>
#include "string.h"

using namespace std;
#define LONG 100
int main() {
	char arrayCadena1[LONG], arrayCadena2[LONG], arrayCadena3[LONG];
	int comp1a2, comp1a3, comp2a3;

	cin >> arrayCadena1;
	cin >> arrayCadena2;
	cin >> arrayCadena3;

	cout << "Cadenes introduides: " << arrayCadena1 << " " << arrayCadena2 << " " << arrayCadena3 << endl;

	comp1a2 = strcmp(arrayCadena1, arrayCadena2);
	comp1a3 = strcmp(arrayCadena1, arrayCadena3);
	comp2a3 = strcmp(arrayCadena2, arrayCadena3);

	if (comp1a2 == 0 && comp1a3 == 0 && comp2a3 == 0) {
		cout << "Les tres cadenes son iguals";
	}
	else if(comp1a2 == 0) {
		cout << "Les cadenes 1 i 2 son iguals";
	}
	else if (comp1a3 == 0) {
		cout << "Les cadenes 1 i 3 son iguals";
	}
	else if (comp2a3 == 0) {
		cout << "Les cadenes 2 i 3 son iguals";
	}
	else {
		cout << "Les tres cadenes son diferents";
	}
}
*/