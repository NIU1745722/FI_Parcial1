/*
#include <iostream>
using namespace std;
#define DIM 5

int BuscarPosicio(int vec[], int num, int dim) {
	int i = 0;
	bool isFind = false;
	while (i<dim && !isFind) {
		(num > vec[i]) ? isFind = true : i++;
	}

	if (!isFind) {
		return -1;
	}

	return i;
}

void LlegirVector(int vec[], int dim) {
	int num;
	for (int i = 0; i < dim; i++) {
		cin >> num;
		vec[i] = num;
	}
}

int OrdenatDecreixent(int vec[], int dim) {
	int i = 1;
	bool ordenat = true;
	while (i < dim && ordenat) {
		if (vec[i - 1] <= vec[i]) {
			ordenat = false;
		}
		i++;
	}
	return ordenat;
}

int main() {
	int nums[DIM], decreixent, num, index;
	LlegirVector(nums, DIM);

	decreixent = OrdenatDecreixent(nums, DIM);

	if (decreixent) {
		cin >> num;
		index = BuscarPosicio(nums, num, DIM);
		(index == -1) ? cout << "Tots els valors del vector son mes grans que " << num : cout << "El valor ha d'anar a la posicio " << index;
	}
	else {
		cout << "El vector no esta correctament ordenat";
	}
}
*/