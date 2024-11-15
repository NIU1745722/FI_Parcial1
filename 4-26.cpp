#include <iostream>
#include <math.h>
using namespace std;

int equacio(int a, int b, int c, float &sol1, float &sol2) {
	int part;
	part = (b * b) - 4 * a * c;
	if (part > 0 || part == 0) {
		sol1 = (-b + sqrt(part)) / (2 * a);
		sol2 = (-b - sqrt(part)) / (2 * a);
		if (part > 0) {
			return 2;
		}
		else {
			return 1;
		}
	}
	else {
		return 0;
	}
}

/*
int main() {
	float sol1 = 0, sol2 = 0;
	equacio(3, 6, 3, sol1, sol2);
	cout << "Sol1 : " << sol1 << endl;
	cout << "Sol2 : " << sol2;
}
*/