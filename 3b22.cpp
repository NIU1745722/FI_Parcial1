/*
#include <iostream>

using namespace std;

int main()
{
	int vendidas;
	float precio, precioIVA, precioT = 0;
	cout << "UNIDADES VENDIDAS Y PRECIO: ";
	cin >> vendidas >> precio;
	precioIVA = (precio * vendidas) + ((precio * vendidas) *  0.07);
	if (precioIVA > 500) {
		precioT = precioIVA - (precioIVA * 0.05);
		cout << "L'import final de la compra son " << precioT << " euros.";
	}
	else if (precioIVA > 1000) {
		precioT = precioIVA - (precioIVA * 0.1);
		cout << "L'import final de la compra son " << precioT << " euros.";
	}
	else {
		cout << "L'import final de la compra son " << precioIVA << " euros.";
	}
}
*/