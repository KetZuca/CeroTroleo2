#include <iostream>
#include <iomanip> //Libreria para que la salida en el cout se vea mejor
using namespace std;

int main() {
    //Definimos las variables que se van a utilizar en la formula
    const double coeficiente = 11.7e-6; 
    const int largo = 7365;
    const int tf = 40;
    const int to = 0;

    cout << left << setw(15) << "Temperatura(C)" << setw(25) << "Aumento de Longitud(m)" << endl;
    cout << setfill('-') << setw(40) << "" << setfill(' ') << endl;

    for(int temp = to; temp <= tf; temp += 5) {
        double aumento = coeficiente * largo * (temp - to); //Formula del aumento de longitud
        cout << left << setw(15) << temp << setw(25) << fixed << setprecision(5) << aumento << endl;
    }

    return 0;
}
