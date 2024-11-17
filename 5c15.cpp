//#include <iostream>
//using namespace std;
//#define COL 3
//#define M1_FIL 2
//#define M2_FIL 3
//
//void ProducteMatrius(float matriz1[][COL], float matriz2[][COL], float matrizRes[][COL], int fil, int col){
//	float prod;
//	for (int i = 0; i < fil; i++) {
//		for (int j = 0; j < col; j++) {
//			prod = 0;
//			for (int z = 0; z < col; z++) {
//				prod += matriz1[i][z] * matriz2[z][j];
//				/*if (j == col - 1) {
//					matrizRes[i][j] = prod;
//				}*/
//				matrizRes[i][j] = prod;
//			}
//		}
//	}
//}
//
//void LlegirMatriu(float matriz[][COL], int fil, int col) {
//	float num;
//	for (int i = 0; i < fil; i++) {
//		for (int j = 0; j < col; j++) {
//			cin >> num;
//			matriz[i][j] = num;
//		}
//	}
//}
//
//void EscriureMatriu(float matriz[][COL], int fil, int col) {
//	for (int i = 0; i < fil; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << matriz[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	float matriz1[M1_FIL][COL], matriz2[M2_FIL][COL], matrizRes[M1_FIL][COL];
//	LlegirMatriu(matriz1, M1_FIL ,COL);
//	LlegirMatriu(matriz2, M2_FIL ,COL);
//	ProducteMatrius(matriz1, matriz2, matrizRes, 2, 3);
//	EscriureMatriu(matrizRes, M1_FIL, COL);
//}