#include <iostream>
using namespace std;

int main() {
    int f, m;
    cout << "Ingrese el numero de filas de la matriz\n";
    cin >> f;
    cout << "ingrese el numero de columnas de la matriz\n";
    cin >> m;
    
    int matriz1[f][m], matriz2[f][m], matrizr[f][m];

    cout << "Que valores le quiere dar a la matriz 1\n";
    for(int f1 = 0; f1 < f; f1++) {
        for(int c1 = 0; c1 < m; c1++) {
            cin >> matriz1[f1][c1];
            cout << endl;
        }
    }

    cout << "Que valores le quiere dar a la matriz 2\n";
    for(int f2 = 0; f2 < f; f2++) {
        for(int c2 = 0; c2 < m; c2++) {
            cin >> matriz2[f2][c2];
            cout << endl;
        }   
    }

    for (int i = 0; i < f; i++) {
        for (int j = 0; j < m; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "La matriz 1\n";

    for(int f1 = 0; f1 < f; f1++) {
        for(int c1 = 0; c1 < m; c1++) {
            cout << matriz1[f1][c1] << "\t";
        }
        cout << endl;
    }

    cout << "La matriz 2\n";

    for(int f2 = 0; f2 < f; f2++) {
        for(int c2 = 0; c2 < m; c2++) {
            cout << matriz2[f2][c2] << "\t";
        }
        cout << endl;
    }
    
    cout << "El resultado de la suma de esas 2 matriz es:\n";
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrizr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
