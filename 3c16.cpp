/*
#include <time.h>
#include <iostream>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	int num, randNum, tries = 1;
	char opc = 'S';
	bool win, fin;
	do {
		if (tries == 1) {
			fin = false;
			win = false;
			randNum = (rand() % 10) + 1;
		}

		cout << "Introdueix un numero del 1 al 10: \n";
		cin >> num;

		if (num > 10 || num < 1) {
			cout << "Error: Valor fora del rang 1-10\n";
		}
		else if (num > randNum) {
			cout << "El numero a endevinar es mes petit\n";
			tries += 1;
		}
		else if (num < randNum) {
			cout << "El numero a endevinar es mes gran\n";
			tries += 1;
		}
		else {
			fin = true;
			win = true;
		}

		if (tries > 5) {
			fin = true;
			win = false;
		}

		if (fin) {
			if (win) {
				cout << "Has guanyat!!! Has encertat en " << tries << " intents\n";
			}
			else {
				cout << "Has perdut: El numero secret era " << randNum << endl;
			}
			cout << "Vols tornar a jugar? \n";
			cin >> opc;
			if (opc == 'S') {
				tries = 1;
			}
		}
	} while (opc == 'S');
}
*/