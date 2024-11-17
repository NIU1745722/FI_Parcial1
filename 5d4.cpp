//#include <iostream>
//using namespace std;
//#define LONG 50
//
//typedef struct {
//	char nombre[LONG], ciudad[LONG];
//	int puntos;
//	float presupuesto;
//} TEquip;
//
//void OmplirDadesEquip(TEquip &equipo) {
//	cout << "Nombre: ";
//	cin >> equipo.nombre;
//	cout << "Ciudad: ";
//	cin >> equipo.ciudad;
//	cout << "Puntos: ";
//	cin >> equipo.puntos;
//	cout << "Presupuesto: ";
//	cin >> equipo.presupuesto;
//}
//
//void MostrarDadesEquip(TEquip &equipo) {
//	cout << equipo.nombre << " " << equipo.ciudad << " " << equipo.puntos << " " << equipo.presupuesto << endl;
//}
//
//int CompararEquips(TEquip& equipo1, TEquip& equipo2) {
//	if (equipo1.puntos == equipo2.puntos) {
//		return 0;
//	}
//	else if (equipo2.puntos > equipo1.puntos) {
//		return -1;
//	}
//	return 1;
//}
//
//int main() {
//	TEquip equipo1, equipo2;
//	int comp;
//	char textComp[50];
//	OmplirDadesEquip(equipo1);
//	OmplirDadesEquip(equipo2);
//	MostrarDadesEquip(equipo1);
//	MostrarDadesEquip(equipo2);
//	comp = CompararEquips(equipo1, equipo2);
//	if (comp == 1) {
//		cout << equipo1.nombre << " te mes punts a la lliga que " << equipo2.nombre;
//	}
//	else if (comp == -1) {
//		cout << equipo1.nombre << " te menys punts a la lliga que " << equipo2.nombre;
//	}
//	else {
//		cout << equipo1.nombre << " te els mateixos punts a la lliga que " << equipo2.nombre;
//	}
//}