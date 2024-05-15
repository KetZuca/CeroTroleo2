//EJERCICIO 1 OPERACIONES

#include <iostream>
#include <cmath> //Libreria de matematicas para el uso de funciones de calculo de raices y exponentes.
using namespace std;


int main() {
    //Variables de tipo double para el uso de funciones matematicas avanzadas.
    double sigma, mu, equis, opcompleta;
    const float pi = 3.14159265358979323846;

    cout << "Para calcular una curva normal en forma de campana porfavor introduzca los siguientes datos.\n";
    cout << "Introduzca el valor de X\n";
    cin >> equis;
    cout << "Introduzca el valor de Mu\n";
    cin >> mu;
    cout << "Introduzca el valor de Sigma\n";
    cin >> sigma;

    opcompleta = exp(-0.5 * pow((equis - mu) / sigma, 2)) / (sigma * sqrt(2 * pi));

    cout << "El resultado de la ecuacion es:\ny = " << opcompleta << endl;
    return 0;
}