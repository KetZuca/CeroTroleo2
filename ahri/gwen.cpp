#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double poblacion, t = 5;
    int num = 2005;
    cout << "Año        Poblacion" << endl;

    for(int i = t; i <= 10; i++) {
        double euler = exp(0.02 * i);
        poblacion = 6.0 * euler;
        cout << num << "        " << poblacion << endl;
        num++;
    }
    return 0;
}