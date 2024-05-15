//EJERCICIO 1 CONDICIONALES

#include <iostream>
using namespace std;

int main() {
    int angulo;

    cout << "Ingrese el angulo de la linea\n";
    cin >> angulo;

    if(angulo < 0 || angulo > 360) { //Para que evitar entradas que no son correctas
        cout << "El angulo no puede ser negativo o ser mayor de 360 grados.\n";
    } else if(angulo == 0 || angulo == 360) { //Como el angulo de 0 y 360 es lo mismo sucede la misma accion
        cout << "La linea se encuentra en el eje x positivo.\n";
    } else if(angulo < 90 && angulo > 0) {
        cout << "La linea se encuentra en el primer cuadrante.\n";
    } else if(angulo == 90) {
        cout << "La linea se encuentra en el eje y positivo.\n";
    } else if(angulo < 180 && angulo > 90) {
        cout << "La linea se encuentra en el segundo cuadrante.\n";
    } else if(angulo == 180) {
        cout << "La linea se encuentra en el eje x negativo.\n";
    } else if(angulo < 270 && angulo > 180) {
        cout << "La linea se encuentra en el tercer cuadrante.\n";
    } else if(angulo == 270) {
        cout << "La linea se encuentra en el eje y negativo.\n";
    } else if(angulo < 360 && angulo > 270) {
        cout << "La linea se encuentra en el cuarto cuadrante.\n";
    }
    return 0;
}