/*
#include <iostream>

using namespace std;

int main()
{
	int dd, mm, yy;
	char sep;
	cout << "FECHA: ";
	cin >> dd >> sep >> mm >> sep >> yy;
	switch (mm)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (dd >= 1 && dd <= 31) {
			cout << "Data correcta";
		}
		else {
			cout << "Error: Dia incorrecte";
		}
		break;
	case 2:
		if (((yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0) && dd >= 1 && dd <= 29) || dd >= 1 && dd <= 28) {
			cout << "Data correcta";
		}
		else {
			cout << "Error: Dia incorrecte";
		}
		break;
	case 4: case 6: case 9: case 11:
		if (dd >= 1 && dd <= 30) {
			cout << "Data correcta";
		}
		else {
			cout << "Error: Dia incorrecte";
		}
		break;
	default:
		cout << "Error: Mes incorrecte";
	}
}
*/