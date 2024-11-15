/*
#include <iostream>
#include <windows.h>
using namespace std;

int alerta(int num){
	if (num == 0) {
		cout << "Alerta: S’ha acabat el temps\n";
	}
	else {
		cout << "Alerta: Queden " << num << " segons\n";
	}
	return 0;
}

int main() {
	int num;
	cin >> num;
	for (int i = num; i >= 0; i--) {
		alerta(i);
		Sleep(1000);
	}
}
*/