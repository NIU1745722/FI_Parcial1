//#include <iostream>
//using namespace std;
//#define COL 3
//#define FIL 3
//
//int SimetricaMatriu(float matriz[][COL], int fil, int col) {
//	bool isSimetric = true;
//	int i = 0, j = 0;
//
//	while (i < fil && isSimetric == true) {
//		j = 0;
//		while (j < col && isSimetric == true) {
//			if (matriz[i][j] != matriz[j][i]) {
//				isSimetric = false;
//			}
//			j++;
//		}
//		i++;
//	}
//	return isSimetric;
//}
//
//int main() {
//	bool isSimetric;
//	float matriz[FIL][COL];
//	for (int i = 0; i < FIL; i++) {
//		for (int j = 0; j < COL; j++) {
//			cin >> matriz[i][j];
//		}
//	}
//
//	for (int i = 0; i < FIL; i++) {
//		for (int j = 0; j < COL; j++) {
//			cout << matriz[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	isSimetric = SimetricaMatriu(matriz, FIL, COL);
//	(isSimetric) ? cout << "MATRIU SIMETRICA" : cout << "MATRIU NO SIMETRICA";
//}