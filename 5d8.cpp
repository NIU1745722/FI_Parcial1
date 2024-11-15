#include <iostream>
#include <string.h>
using namespace std;
#define LONG 50
#define N_EQUIPS 5

typedef struct {
	char nombre[LONG], ciudad[LONG];
	int puntos;
	float presupuesto;
} TEquip;

void InicialitzarClassificacio(TEquip arrayEquip[], int dim) {
	char arrayString[LONG];
	for (int i = 0; i < dim; i++) {
		strcpy_s(arrayEquip[i].nombre, "-----");
		strcpy_s(arrayEquip[i].ciudad, "-----");
		arrayEquip[i].puntos = 0;
		arrayEquip[i].presupuesto = 0.0;
	}
}

void MostrarClassificacio(TEquip arrayEquip[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << i+1 << ".-" << arrayEquip[i].nombre << " " << arrayEquip[i].puntos << endl;
	}
}

void OmplirDadesEquip(TEquip &equipo) {
	cout << "Nombre: ";
	cin >> equipo.nombre;
	cout << "Ciudad: ";
	cin >> equipo.ciudad;
	cout << "Puntos: ";
	cin >> equipo.puntos;
	cout << "Presupuesto: ";
	cin >> equipo.presupuesto;
	cout << endl;
}

void DesplacarClassificacio(TEquip arrayEquip[], int dim, int index) {
	TEquip temp;
	for (int i = dim-1; i > index; i--) {
		arrayEquip[i] = arrayEquip[i - 1];
	}

	OmplirDadesEquip(arrayEquip[index]);
}

int main() {
	int index = 0;
	char opc = 'S';
	TEquip arrayEquips[N_EQUIPS];
	InicialitzarClassificacio(arrayEquips, N_EQUIPS);
	do {
		MostrarClassificacio(arrayEquips, N_EQUIPS);
		cout << "Introducir posicion: ";
		cin >> index;
		DesplacarClassificacio(arrayEquips, N_EQUIPS, index-1);
		cout << "Insertar más? ('S'=SI, Qualsevol altre caràcter=NO)\n";
		cin >> opc;
	} while (opc == 'S');
	MostrarClassificacio(arrayEquips, N_EQUIPS);
}