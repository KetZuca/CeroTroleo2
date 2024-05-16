#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.14159265358979323846;
   
    double xgrados = 30.0; // Ángulo en grados
    double xradianes = xgrados * pi / 180.0; // Conversión a radianes
    double aproximacion = 0.0;
    double t = xradianes; // Primer término
    int n = 1;
    
    while (abs(t) > 0.000001) {
        aproximacion += t;
        t *= -xradianes * xradianes / ((2 * n) * (2 * n + 1));
        n++;
    }

    cout << "Aproximacion del sen(" << xgrados << "): " << aproximacion << endl;
    cout << "Numero de terminos utilizados: " << n << endl;

    return 0;
}
