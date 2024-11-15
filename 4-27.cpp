/*
#include <iostream>
#include "Menu.h"
#include "Funcions.h"
using namespace std;

int main()
{
    int opc;
    float area = 0, costat, base, altura;
    bool fuera = false;
    do {
        area = 0;
        MenuSeleccio();
        cin >> opc;
        switch (opc) {
        case 1:
            cin >> costat;
            AreaQuadrat(costat, area);
            break;
        case 2:
            cin >> base >> altura;
            AreaRectangle(base, altura, area);
            break;
        case 3:
            cin >> base >> altura;
            AreaTriangle(base, altura, area);
            break;
        case 4:
            fuera = true;
            break;
        default:
            break;

        }
        if (area != 0 && !fuera) {
            cout << "Area: " << area << endl;
        }
        else if (area == 0 && !fuera) {
            cout << "Error: Dimensions incorrectes\n";
        }
    } while (opc != 4);
}
*/