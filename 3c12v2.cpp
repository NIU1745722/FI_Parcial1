/*
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	int ss, mm, hh, cont = 0;
	char sep;
	bool fin = 0;
	cout << "Dame una hora: ";
	cin >> hh >> sep >> mm >> sep >> ss;
	do {
		ss = ss + 1;
		if (ss >= 60) {
			mm = mm + 1;
			ss = 0;
		}
		if (mm >= 60) {
			hh = hh + 1;
			mm = 0;
		}
		if (hh >= 24) {
			hh = 0;
		}

		if (hh < 10) {
			cout << "0";
		}
		cout << hh << ":";
		if (mm < 10) {
			cout << "0";
		}
		cout << mm << ":";
		if (ss < 10) {
			cout << "0";
		}
		cout << ss << endl;

		sleep(1);

		cont = cont + 1;

		if (cont >= 5) {
			fin = 1;
		}
	} while (fin == 0);
}
*/