/*
#include <iostream>
using namespace std;

int factorial(int num) {
	int res = 1;
	for (int i = 1; i <= num; i++)
	{
		res = res * i;
	}
	return res;
}

int main() {
	int num1, num2, res, restaFac;
	cin >> num1 >> num2;
	restaFac = factorial(num1 - num2);
	num1 = factorial(num1);
	num2 = factorial(num2);
	res = num1 / (num2 * restaFac);
	cout << num1 << " " << num2 << " " << restaFac << " " << endl;
	cout << "El nombre d'equips que es poden formar es: " << res;
}
*/