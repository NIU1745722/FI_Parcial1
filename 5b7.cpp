/*
include <iostream>
using namespace std;
#define LONG 100

int TrobarCaracter(char cadena[], char letra) {
	int i = 0;
	bool isFind = false;
	while (cadena[i] != '\0' && isFind == false) {
		if (cadena[i] == letra) {
			isFind = true;
		}
		i++;
	}

	if (isFind) {
		return 1;
	}
	return 0;
}

int main() {
	char cadena[LONG], letra;
	int valor;
	cin >> cadena >> letra;
	valor = TrobarCaracter(cadena, letra);
	cout << valor;
}
*/