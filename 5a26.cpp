/*
#include <iostream>
using namespace std;
#define DIM 5

int OrdenatDecreixent(int vec[], int dim) {
	int i = 1;
	bool ordenat = true;
	while (i < dim && ordenat) {
		if (vec[i-1] <= vec[i]) {
			ordenat = false;
		}
		i++;
	}
	return ordenat;
}

void LlegirVector(int vec[], int dim) {
	int num;
	for (int i = 0; i < dim; i++) {
		cin >> num;
		vec[i] = num;
	}
}

int main() {
	int nums[DIM], decreixent;
	LlegirVector(nums, DIM);
	cout << OrdenatDecreixent(nums, DIM);
}
*/