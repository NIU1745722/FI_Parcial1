/*
#include <iostream>
using namespace std;

int fabonacci(int num) {
	int a, b;
	a = 1;
	b = 1;
	if (num == 0) {
		return 0;
	}
	for (int i = 3; i <= num ; i++)
	{
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main() {
	int num, res;
	bool open = true;
	while (open) {
		cin >> num;
		if (num < 0) {
			cout << "Error: El nombre no pot ser negatiu\n";
		}
		else {
			res = fabonacci(num);
			open = false;
		}
	}
	cout << "El terme " << num << " de la serie de Fibonacci es " << res;

}
*/