#include <iostream>
using namespace std;

int main() {
    string palabra;
    cout << "Introduzca su nombre" << endl;
    cin >> palabra;

    for(int i = palabra.length() - 1; i >= 0; i--) {
        cout << palabra[i]; //endl al final y se imprimiria letra por letra
    }
    
    return 0;
}

