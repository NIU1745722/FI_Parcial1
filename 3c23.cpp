/*
#include <iostream>
using namespace std;

int main() {
	int num, i = 3;
	bool primo = true;
	cout << "Introdueix nombre: ";
	cin >> num;

    if (num <= 1) primo = false;
    if (num == 2) primo = true;
    if (num % 2 == 0) primo = false;

    while (i * i <= num) {
        if (num % i == 0) {
            primo = false;
        }
        i += 2;
    }
    if (primo) {
        cout << "PRIMER";
    }
    else {
        cout << "NO PRIMER";
    }
}
*/