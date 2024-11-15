/*
#include <iostream>
using namespace std;
#define DIM 6
int main() {
	int i = 0;
	float arrayNums1[DIM], arrayNums2[DIM], num;
	bool igual = true;

	for (int i = 0; i < DIM; i++) {
		cin >> num;
		arrayNums1[i] = num;
	}

	for (int i = 0; i < DIM; i++) {
		cin >> num;
		arrayNums2[i] = num;
	}

	while (i < DIM && igual) {
		if (arrayNums1[i] != arrayNums2[i]) {
			igual = false;
		}
		i++;
	}
	
	if (igual) {
		cout << "IGUALS";
	}
	else {
		cout << "DIFERENTS";
	}
}
*/