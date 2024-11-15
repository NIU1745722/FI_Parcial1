/*
#include <iostream>
using namespace std;
#define DIM 10
int main() {
    int vec1[DIM] = { 0,1,2,3,4,5,6,7,8,9 };
    int vec2[DIM], vec3[DIM], vec4[DIM], num, i;

    for (int j = 0; j < DIM; j++) {
        vec2[j] = 2 * j;

        cout << "Dame numero " << j << ": ";
        cin >> num;
        vec3[j] = num;

        vec4[j] = vec1[j] + vec2[j] + vec3[j];
    }

    cout << "\nVector 1: ";

    for (int i = 0; i < DIM; i++) {
        cout << vec1[i] << " ";
    }

    cout << endl << "Vector 2: ";

    for (int i = 0; i < DIM; i++) {
        cout << vec2[i] << " ";
    }

    cout << endl << "Vector 3: ";

    for (int i = 0; i < DIM; i++) {
        cout << vec3[i] << " ";
    }

    cout << endl << "Vector 4: ";

    for (int i = 0; i < DIM; i++) {
        cout << vec4[i] << " ";
    }
}
*/