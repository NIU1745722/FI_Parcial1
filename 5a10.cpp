/*
#include <iostream>
using namespace std;
#define DIM 15
int main(){
    const int NUM_NENS = 15;
    int edats[NUM_NENS], suma = 0;
    double mitjana;

    for (int i = 0; i < NUM_NENS; i++) {
        int edat;
        bool edatValida = false;

        while (!edatValida) {
            cout << "Introdueix els mesos que tenia el/la nen/a " << (i + 1) << " quan va caminar per primer cop: ";
            cin >> edat;

            if (edat >= 9 && edat <= 18) {
                edats[i] = edat;
                edatValida = true;
            }
            else {
                cout << "Error: Valor no valid" << endl;
            }
        }
        suma += edats[i];
    }

    mitjana = static_cast<double>(suma) / NUM_NENS;

    cout << "Mitjana d'edat en caminar: " << mitjana << " mesos" << endl;
}
*/