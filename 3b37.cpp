/*
#include <iostream>

using namespace std;

int main()
{
	int opc;
	float ope1, ope2, res;
	cout << "MENU"<< endl << "1.-Suma" << endl << "2.-Resta" << endl << "3.-Producte" << endl << "4.-Divisio" << endl << "5.-Sortir" << endl << "Selecciona una de les opcions: ";
	cin >> opc;
	switch (opc)
	{
	case 1:
		cin >> ope1 >> ope2;
		res = ope1 + ope2;
		cout << ope1 << " + " << ope2 << " = " << res;
		break;
	case 2:
		cin >> ope1 >> ope2;
		res = ope1 - ope2;
		cout << ope1 << " - " << ope2 << " = " << res;
		break;
	case 3:
		cin >> ope1 >> ope2;
		res = ope1 * ope2;
		cout << ope1 << " x " << ope2 << " = " << res;
		break;
	case 4:
		cin >> ope1 >> ope2;
		if (ope2 == 0) {
			cout << "Error: Divisio per zero";
			break;
		}
		else {
			res = ope1 / ope2;
			cout << ope1 << " / " << ope2 << " = " << res;
			break;
		}
	case 5:
		cout << "Sortint de la calculadora...";
		break;
	default:
		cout << "Error: Opcio no valida";
		break;
	}
}
*/