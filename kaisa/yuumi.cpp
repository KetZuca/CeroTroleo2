#include <iostream>
using namespace std;

int main() {
    int f, c;
    cout << "Ingrese el numero de filas de la matriz\n";
    cin >> f;
    cout << "ingrese el numero de columnas de la matriz\n";
    cin >> c;
    
    int m[f][c];
    int m2[f * c];
    int num = 0, valor1 = 0;
    

    cout << "Que valores le quiere dar a la matriz\n";
    for(int f1 = 0; f1 < f; f1++) {
        for(int c1 = 0; c1 < m; c1++) {
            valor1++;
            cout << "Valor " << valor1 << ": ";
            cin >> m[f1][c1];
            cout << endl;
        }
    }

    
    cout << "Matriz original\n";
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            m2[num] = m[i][j];
            cout << m[i][j] << "\t";
            num++;
        }
        cout << endl;
    } 
    

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num-1; j++) {
            if(m2[j] > m2[j+1]) {
                int temp = m2[j];
                m2[j] = m2[j+1];
                m2[j+1] = temp;
            }
        }
    }
    

    cout << "Matriz ordenada\n";
    num = 0;
    for(int i = 0; i < f; i++) {
        for(int j = 0; j < c; j++) {
            m[i][j] = m2[num];
            cout << m[i][j] << "\t";
            num++;
        }
        cout << endl;
    }

    return 0;
}