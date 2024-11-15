/*
#include <iostream>
using namespace std;

int main() {
	float notaDec;
	int nota, sus = 0, suf = 0, ntb = 0, exc = 0, hon = 0;
	bool open = true;
	while (open) {
		cout << "DAME NOTAS: ";
		cin >> notaDec;
		nota = static_cast<int>(notaDec);
		switch (nota)
		{
		case 0: case 1: case 2: case 3: case 4:
			sus = sus + 1;
			break;
		case 5: case 6:
			suf = suf + 1;
			break;
		case 7: case 8:
			ntb = ntb + 1;
			break;
		case 9:
			exc = exc + 1;
			break;
		case 10:
			hon = hon + 1;
			break;
		default:
			open = false;
			break;
		}
	}
	cout << "S: " << sus << " - A: " << suf << " - N: " << ntb << " - E: " << exc << " - MH: " << hon;
}
*/