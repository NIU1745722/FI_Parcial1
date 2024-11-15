/*
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4, comp = 0;
	cout << "Dame nums: ";
	cin >> num1 >> num2 >> num3 >> num4;
	comp = comp + 1;
	if (num1 > num2) {
		comp = comp + 1;
		if (num1 > num3) {
			comp = comp + 1;
			if (num1 > num4) {
				cout << "El numero mes gran de la serie es " << num1 << ". Comparacions: " << comp;
			}
			else {
				cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << comp;
			}
		}
		else {
			comp = comp + 1;
			if (num3 > num4) {
				cout << "El numero mes gran de la serie es " << num3 << ". Comparacions: " << comp;
			}
			else {
				cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << comp;
			}
		}
	}
	else {
		comp = comp + 1;
		if (num2 > num3) {
			comp = comp + 1;
			if (num2 > num4) {
				cout << "El numero mes gran de la serie es " << num2 << ". Comparacions: " << comp;
			}
			else {
				cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << comp;
			}
		}
		else {
			comp = comp + 1;
			if (num3 > num4) {
				cout << "El numero mes gran de la serie es " << num3 << ". Comparacions: " << comp;
			}
			else {
				cout << "El numero mes gran de la serie es " << num4 << ". Comparacions: " << comp;
			}
		}
	}
}
*/