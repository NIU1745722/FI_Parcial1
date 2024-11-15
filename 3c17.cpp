/*
#include <iostream>
using namespace std;

int main() {
	int num, cont = 0, sum = 0;
	float mitjana;
	bool open = true;
	while (open) {
		cout << "Dame numeros: ";
		cin >> num;
		if (num == 0) {
			open = false;
		}
		else {
			sum = sum + num;
			cont = cont + 1;
		}
	};
	if (cont == 0) {
		cout << "Error: La sequencia es buida. No es pot calcular la mitjana.";
	}
	else {
		mitjana = (float)sum / (float)cont;
		cout << "Mitjana dels nombres de la sequencia: " << mitjana;
	}
}
*/