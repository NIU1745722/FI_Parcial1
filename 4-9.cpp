/*
#include <iostream>
using namespace std;

float potencia(double base, int exponent)
{
    double res = 1;
    int i;

    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    for (i = 1; i <= exponent; i++) {
        res = res * base;
    }
    return res;
}

int main() {
    double base, res;
    int expo;
    cout << "Base i exponent : ";
    cin >> base >> expo;
    res = potencia(base, expo);
    cout << "El resultat d'elevar " << base << " a la potencia " << expo << " es "<< res << endl;
}
*/