#include <iostream>
using namespace std;

int DivisioEnters(int dividend, int divisor, int &resultat) {
    if (divisor == 0) {
        return 0;
    }
    resultat = dividend / divisor;
    return 1;
}