/*
#include <iostream>
#define DIM 5
using namespace std;

void InicialitzarVector(int vec[], int ini, int dim) {
    for (int i = 0; i < dim; i++) {
        vec[i] = ini;
    }
}

void LlegirVector(int vec[], int dim) {
    int num;
    for (int i = 0; i < dim; i++) {
        cin >> num;
        vec[i] = num;
    }
}

void EscriureVector(int vec[], int dim) {
    for (int i = 0; i < dim; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

float MitjanaVector(int vec[], int dim) {
    int sum = 0;
    float mitjana;
    for (int i = 0; i < dim; i++) {
        sum = sum + vec[i];
    }
    mitjana = (float)sum / dim;
    return mitjana;
}

int MaximVector(int vec[], int dim) {
    int indexMax, max;
    for (int i = 0; i < dim; i++) {
        if (i == 0) {
            max = vec[i];
            indexMax = i;
        }
        if (vec[i] > max) {
            max = vec[i];
            indexMax = i;
        }
    }
    return indexMax;

}

int MinimVector(int vec[], int dim) {
    int indexMin, min;
    for (int i = 0; i < dim; i++) {
        if ((i == 0) || (vec[i] < min)) {
            min = vec[i];
            indexMin = i;
        }
    }
    return indexMin;
}

int MinimVectorNoZero(int vec[], int dim) {
    int indexMin, min;
    bool isZero = true;
    for (int i = 0; i < dim; i++) {
        if (i == 0 && vec[i] != 0) {
            min = vec[i];
            indexMin = i;
            isZero = false;

        }
        if (vec[i] < min && vec[i] != 0) {
            min = vec[i];
            indexMin = i;
            isZero = false;
        }
    }

    if (isZero) {
        return -1;
    }
    return indexMin;
}

int main() {
    int tempMax[DIM], tempRep[DIM], rep, maxVec, minVec;
    bool isTempRep;
    LlegirVector(tempMax, DIM);
    //InicialitzarVector(tempRep, DIM, 50);

    for (int i = 0; i < DIM; i++) {
        rep = 0;
        for (int j = 0; j < DIM; j++) {
            if ( tempMax[j] == tempMax[i]) {
                rep++;
            }
        }
        tempRep[i] = rep;
    }

    maxVec = MaximVector(tempRep, DIM);
    minVec = MinimVector(tempRep, DIM);
    cout << "Temperatura mes repetida: " << tempMax[maxVec] << " - Temperatura menys repetida: " << tempMax[minVec];
}
*/