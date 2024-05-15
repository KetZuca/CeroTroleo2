#include <iostream>
using namespace std;

int main() {
    int lucas = 28000;
    int lostlucas = 4000, lostlucas2 = 4000;

    cout << "Año        Depreciacion        Valor al final de año       Depreciacion acumulada\n";
    for(int i = 1; i <= 7; i++) {
        lucas -= 4000;
        if(lucas < 10000 && lucas > 0) {
        cout << i << "              " << lostlucas << "                     " << lucas << "                         " << lostlucas2 << endl;
        } else if (lucas == 0) {
        cout << i << "              " << lostlucas << "                     " << lucas << "                            " << lostlucas2 << endl;
        } else {
        cout << i << "              " << lostlucas << "                     " << lucas << "                        " << lostlucas2 << endl;
        }
        lostlucas2 += 4000;

    }    
    return 0;
}