#include <iostream>
using namespace std;

int main() {
    int galon = 10;
    float litros;
    cout << "Galones        Litros\n"; 

    for(int i = galon; i <= 20; i++) {
        litros = i * 3.785;
        cout << i << "              " << litros << endl;
    }
    return 0;
}