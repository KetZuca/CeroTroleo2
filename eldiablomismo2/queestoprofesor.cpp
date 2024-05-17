#include <iostream>
#include <cmath> //Para el uso de funciones matematicas avanzadas
using namespace std;

int main() {
    const double pi = 3.14159265358979323846;
   
    double xgrados = 30.0;
    double xradianes = xgrados * pi / 180.0; // Conversion a radianes
    double aproximacion = 0.0;
    double t = xradianes; // Primer termino
    int n = 1; //Numero de terminos utilizados

    while (abs(t) > 0.000001) { //Valor absoluto para evitar numeros negativos
        aproximacion += t;
        t *= -xradianes * xradianes / ((2 * n) * (2 * n + 1));
        n++;
    }

    cout << "Aproximacion del sen(" << xgrados << "): " << aproximacion << endl;
    cout << "Numero de terminos utilizados: " << n << endl;

    return 0;
}
