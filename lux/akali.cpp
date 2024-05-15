#include <iostream>
using namespace std;

int main() {
    char grado;
    float frio, celcius, farenheit;

    cout << "Por favor ingrese la temperatura\n";
    cin >> frio;
    cout << "Celcius (C) o Farenheit (F)\n";
    cin >> grado;

    switch(grado) {
        case 'C':
            celcius = (9.0 / 5.0) * frio + 32.0;
            cout << "Usted se encuentra a " << celcius << " grados farenheit.";
            break;

        case 'F':
            farenheit = (5.0 / 9.0) * (grado - 32.0);
            cout << "Usted se encuentra a " << farenheit << " grados celcius.";
            break;

        default:
            cout << "Datos incorrectos";
            return 0;
    }
}