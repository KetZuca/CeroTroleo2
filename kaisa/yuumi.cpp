#include <iostream>
using namespace std;

int main() {
    int m[2][2] = {{10, 8}, {7, 3}};
    int m2[4];
    int num = 0;

    cout << "Matriz original\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
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
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            m[i][j] = m2[num];
            cout << m[i][j] << "\t";
            num++;
        }
        cout << endl;
    }

    return 0;
}