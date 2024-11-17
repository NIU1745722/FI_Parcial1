//#include <iostream>
//using namespace std;
//#define FILA 2
//#define COL 3
//
//void LlegirMatriu(int matriu[][COL], int fila, int col) {
//	int num;
//	for (int i = 0; i < fila; i++) {
//		for (int j = 0; j < col; j++) {
//			cin >> num;
//			matriu[i][j] = num;
//		}
//	}
//}
//
//void EscriuMatriu(int matriu[][COL], int fila, int col) {
//	for (int i = 0; i < fila; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << matriu[i][j];
//		}
//	}
//}
//
//void SumaMatriu(int matriuSum1[][COL], int matriuSum2[][COL], int matriuRes[][COL], int fila, int col) {
//	int num;
//	for (int i = 0; i < fila; i++) {
//		for (int j = 0; j < col; j++) {
//			matriuRes[i][j] = matriuSum1[i][j] + matriuSum2[i][j];
//		}
//	}
//}
//
//int main() {
//	int matriuSum1[FILA][COL], matriuSum2[FILA][COL], matriuRes[FILA][COL];
//
//	cout << "MATRIZ 1: ";
//	LlegirMatriu(matriuSum1, FILA, COL);
//	cout << "MATRIZ 2: ";
//	LlegirMatriu(matriuSum2, FILA, COL);
//
//	SumaMatriu(matriuSum1, matriuSum2, matriuRes, FILA, COL);
//
//	EscriuMatriu(matriuRes, FILA, COL);
//}