#include <iostream>
using namespace std;

int main() {
    //Definimos los parametros por los cuales se quiere empezar
    int x = 1, z = 2;

    //Ciclo anidado para controlar los valores de x y los valores de z
    for(int i = x; i <= 5; i++) {
        for(int j = z; j <= 6; j++) {
            if (i == j) { //Si los 2 son diferentes muestra "Funcion indefinida"
                cout << "Funcion Indefinida\n";
            } else {   
                float y = i * 1.0 * j/(i - j); //Formula para calcular el valor de Y, el 1.0 esta para que se puedan mostrar decimales
                cout << "El valor de la funcion para cuando x es: " << i << " y z es: " << j << " es y = " << y << endl;
            }

        }
        cout << endl;
    }
    return 0;
}
