#include <iostream>
using namespace std;

int main() {
    char calificacion;

    cout << "Cuanto sacaste en el examen, A, B, C o D\n";
    cin >> calificacion;

    switch(calificacion) {
        case 'A':
        cout << "La calificacion numerica esta entre 9 y 10\n";
        break;

        case 'B':
        cout << "La calificacion numerica esta entre 8 y 8.9\n";
        break;

        case 'C':
        cout << "La calificacion numerica esta entre 7 y 7.9\n";
        break;

        case 'D':
        cout << " La calificacion numerica esta entre 5 y 6.9\n";
        break;

        default:
        cout << "Por supuesto que no tuve nada que ver con mi calificacion.\n";
        cout << "Debe ser culpa del profesor.\n";
    }
    return 0;
}