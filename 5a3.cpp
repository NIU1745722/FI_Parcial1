/*
#include <iostream>
using namespace std;

int main() {
	int i, aprovados = 0;
	float num, listaNotes[20];
	for (i = 0; i < 20;i++ ) {
		cin >> num;
		while (num > 10 || num < 0) {
			cout << "Error: nota no valida\n";
			cin >> num;
		}
		listaNotes[i] = num;
	}

	for(float i: listaNotes){
		if (i >= 5) {
			aprovados++;
		}
	}
	cout << "El nombre d'aprovats es: " << aprovados;
}
*/