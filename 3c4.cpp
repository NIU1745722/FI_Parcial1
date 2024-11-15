/*
#include <iostream>
using namespace std;

int main() {
	int i = 1, sum = 0, num = 0;
	bool open = true;
	while (open) {
		cout << "Dame un num: ";
		cin >> num;
		if (num <= 0) {
			cout << "Error: el valor ha de ser mes gran que zero\n";
		}
		else {
			while (i <= num) {
				sum = sum + i;
				i = i + 1;
			}
			open = false;
		}
	}
	cout << "El sumatori de " << num << " es: " << sum;
}
*/