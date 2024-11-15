/*
#include <iostream>
#include <math.h>
using namespace std;
int calcDivi(int divident, int divisor) {
	int cociente = 0, res;
	bool negativo = false;
	if ((divident < 0 && divisor >= 0) || (divident >= 0 && divisor < 0)) {
		negativo = true;
	}
	divident = abs(divident);
	divisor = abs(divisor);
	res = divident;
	while (res >= divisor) {
		res = res - divisor;
		cociente++;
	}

	if (negativo) {
		cociente = cociente * -1;
	}
	return cociente;
}
int main() {
	int divident, divisor, cociente;
	cin >> divident >> divisor;
	if (divisor == 0) {
		cout << "Error: Divisio per zero";
	}
	else {
		cociente = calcDivi(divident, divisor);
		cout << divident << " : " << divisor << " = " << cociente;
	}
}
*/