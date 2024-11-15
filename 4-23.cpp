/*
#include <iostream>
using namespace std;

int maxMin(int &min, int &max) {
	int cont = 1, num;
	do {
		cin >> num;
		if (cont == 1) {
			max = num;
			min = num;
		}
		if (cont == 1 && num == 0) {
			return 1;
		}
		if (cont > 9 || num == 0) {
			return 0;
		}
		if (num > max) {
			max = num;
		}
		else if (num < min) {
			min = num;
		}
		cont++;
	} while (true);
}

int main() {
	int min = 0, max = 0;
	if (maxMin(min, max)) {
		cout << "Error: sequencia buida";
	}
	else {
		cout << "El minim de la sequencia es " << min << " i el maxim es " << max;
	}
}
*/