//#include <iostream>
//#include <cmath>
//using namespace std;
//
//typedef struct {
//	double x, y;
//}TPunt;
//
//typedef struct {
//	int numCostats;
//    TPunt vertexs[30];
//}TPoligon;
//
//void LlegirVertexsPoligon(TPoligon& poligon) {
//    cin >> poligon.numCostats;
//
//    for (int i = 0; i < poligon.numCostats; ++i) {
//        cout << "Vèrtex " << i + 1 << " - x: ";
//        cin >> poligon.vertexs[i].x;
//        cout << "Vèrtex " << i + 1 << " - y: ";
//        cin >> poligon.vertexs[i].y;
//    }
//}
//
//double PerimetrePoligon(const TPoligon& poligon) {
//    double perimetre = 0.0;
//
//    for (int i = 0; i < poligon.numCostats; ++i) {
//        TPunt actual = poligon.vertexs[i];
//        TPunt seguent = poligon.vertexs[(i + 1) % poligon.numCostats];
//
//        double distancia = sqrt(pow(seguent.x - actual.x, 2) + pow(seguent.y - actual.y, 2));
//        perimetre += distancia;
//    }
//
//    return perimetre;
//}
//
//int main() {
//    TPoligon poligon;
//
//    LlegirVertexsPoligon(poligon);
//
//    if (poligon.numCostats >= 3 && poligon.numCostats <= 30) {
//        double perimetre = PerimetrePoligon(poligon);
//
//        cout << "Perimetre del poligon: " << perimetre << endl;
//    }
//
//    return 0;
//}