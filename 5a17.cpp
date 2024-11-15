/*
#include <iostream>
using namespace std;
#define DIM 10
int main() {
	int i = 0;
	float arrayNums[DIM], num, sum = 0;
	bool sumCompl = false;

	for (int j = 0; j < DIM; j++) {
		cin >> num;
		arrayNums[j] = num;
	}

	while (i<DIM && !sumCompl) {
		sum += arrayNums[i];
		if (sum > 25) {
			sumCompl = true;
		}
		i++;
	}

	if (sumCompl) {
		cout << "A la posicio " << i << " la suma acumulada es superior a 25";
	}
	else {
		cout << "La suma acumulada de l'array es inferior o igual a 25";
	}
}
*/