/*
#include <iostream>
using namespace std;

int main() {
	int opc;
	float num1, num2, res;
	bool fin1 = false, fin2 = false;
	char again;

	do {
		cout << "\nDame dos numeros reales: ";
		cin >> num1 >> num2;
		do {
			fin2 = false;
			cout << "\nMENU\n" << "1.-SUMA\n" << "2.-RESTA\n" << "3.-PRODUCTE\n" << "4.-DIVISIO\n" << "5.-SORTIR\n" << "Selecciona una de les opcions: ";
			cin >> opc;
			switch (opc) {
			case 1:
				res = num1 + num2;
				cout << num1 << " + " << num2 << " = " << res;
				break;
			case 2:
				res = num1 - num2;
				cout << num1 << " - " << num2 << " = " << res;
				break;
			case 3:
				res = num1 * num2;
				cout << num1 << " x " << num2 << " = " << res;
				break;
			case 4:
				if (num2 == float(0)) {
					cout << "Error: Divisio per zero";
				}
				else {
					res = num1 / num2;
					cout << num1 << " : " << num2 << " = " << res;
				}
				break;
			case 5:

				cout << "Vols operar amb uns altres operands? (S/-)";
				cin >> again;
				fin2 = true;
				if (again != 'S' && again != 's') {
					fin1 = true;
				}
				break;
			default:
				cout << "Error: Opcio no valida";
				break;
			}

		} while (fin2 == false);

	} while (fin1 == false);
}
*/