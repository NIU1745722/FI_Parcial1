/*
#include <iostream>

using namespace std;

int main()
{
	int cont = 0, sum = 0, num;
	float mitjana;
	do
	{
		cout << "Introdueix un nombre: ";
		cin >> num;
		if (num != 0) {
			sum = sum + num;
			cont = cont + 1;
		}
		
	} while (num != 0);
	if (cont == 0) {
		cout << "Error: La sequencia es buida. No es pot calcular la mitjana.";
	}
	else {
		mitjana = (float)sum / (float)cont;
		cout << "Mitjana dels nombres de la sequencia: " << mitjana;
	}
}
*/