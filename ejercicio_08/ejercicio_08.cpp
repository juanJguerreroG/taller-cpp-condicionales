#include <iostream>
using namespace std;

int main() {
    double saldo = 1000;
    int opcion;
    int transacciones = 0;

    cout << "1. Depositar\n2. Retirar\n3. Consultar\n";
    cin >> opcion;

    if (opcion == 1) {
        double monto;
        cin >> monto;
        saldo += monto;
        transacciones++;
    } 
    else if (opcion == 2) {
        double monto;
        cin >> monto;
        if (monto <= saldo) {
            saldo -= monto;
            transacciones++;
        } else {
            cout << "Saldo insuficiente\n";
        }
    } 
    else if (opcion == 3) {
        cout << "Saldo actual: " << saldo << endl;
    }

    cout << "Transacciones: " << transacciones;

    return 0;
}
