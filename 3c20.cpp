/*
#include <iostream>
using namespace std;

int main() {
	int max, min, num = 0, cont = 0;
	bool open = true, vacio = false;
	while (open) {
		cout << "Dame numeros: ";
		cin >> num;
		if (num < 0 || cont == 9) {
			open = false;
			if (cont == 0) {
				vacio = true;
			}
		}

		if (cont == 0) {
			max = num;
			min = num;
		}

		if (num > max) {
			max = num;
		}

		if (num < min && num >= 0) {
			min = num;
		}
		cont = cont + 1;
	}
	if (vacio)
		cout << "No hi ha nombres a la sequencia";
	else {
		cout << "Maxim: " << max << " - Minim: " << min;
	}
}
*/