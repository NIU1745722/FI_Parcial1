/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int calcDivi(int divident, int divisor, int &cociente, int &residuo) {
	bool negativo = false, divisorNeg = false;
	if (divisor == 0) {
		return 1;
	}

	if ((divident < 0 && divisor >= 0) || (divident >= 0 && divisor < 0)) {
		negativo = true;
	}
	if (divident < 0)
		divisorNeg = true;

	divident = abs(divident);
	divisor = abs(divisor);
	residuo = divident;
	while (residuo >= divisor) {
		residuo = residuo - divisor;
		cociente++;
	}

	if (negativo) {
		cociente = cociente * -1;
	}
	if (divisorNeg) {
		residuo *= -1;
	}
	return 0;
}
int main() {
	int divident, divisor, cociente = 0, residuo = 0;
	cin >> divident >> divisor;
	if (calcDivi(divident, divisor, cociente, residuo)) {
		cout << "Error: Divisio per zero";
	}
	else {
		cout << "Resultat - Quocient: " << cociente << " i Residu: " << residuo;
	}
}
*/