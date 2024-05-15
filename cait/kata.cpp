#include <iostream>
using namespace std;

int main() {
    int x = 1, zddd = 2;

    for(int i = x; x <= 5; i++) {
        x = i;
        for(int j = 0; j <= 6; j++) {
            if (i == j) {
                cout << "Funceeeeeeeeeeeeon Indefinida\n";
            } else {   
                float y = i * 1.0 * j/(i - j);
                cout << "El valor de la fueeeeeencion para cuando x es: " << i << " y z es: " << j << " es y = " << y << endl;
            }

        }
        cout << endl;
    }
}
