//#include <iostream>
//using namespace std;
//#define LONG 50
//
//char PrimerDiferent(char cadena1[], char cadena2[]) {
//	char lastChar;
//	int i = 0;
//	bool isDiferent = false;
//	while(!isDiferent && cadena1[i] != '\0') {
//		if (cadena1[i] != cadena2[i]) {
//			lastChar = cadena1[i];
//			isDiferent = true;
//		}
//		i++;
//	}
//	if (isDiferent) {
//		return lastChar;
//	}
//	return '\0';
//}
//
//int main() {
//	char cadena1[LONG], cadena2[LONG], lastChar;
//
//	cin >> cadena1 >> cadena2;
//	lastChar = PrimerDiferent(cadena1, cadena2);
//
//	if (lastChar == '\0') {
//		cout << "No hi ha cap caracter diferent";
//	}
//	else {
//		cout << "El primer caracter diferent es " << lastChar;
//	}
//}