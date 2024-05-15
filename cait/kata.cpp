#include <iostream>
using namespace std;

int main() {
    int x = 1, z = 2;

    for(int i = x; x <= 5; i++) {
        x = i;
        for(int j = z; j <= 6; j++) {
            if (i == j) {
                cout << "Funcion Indefinida\n";
            } else {   
                float y = i * 1.0 * j/(i - j);
                cout << "El valor de la funcion para cuando x es: " << i << " y z es: " << j << " es y = " << y << endl;
            }

        }
        cout << endl;
    }
}
