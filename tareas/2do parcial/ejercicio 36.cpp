//  Helena Ruiz Ramirez
//  A01282531
//  9 de octubre de 2017
//  Tarea 2do parcial, estatutos de repeticion, ejercicio 36

#include <iostream>
using namespace std;

int n, sum=0;

int main() {
    cout << "Valor de n: ";
    cin >> n;
    cout << endl;
    for (int i=1; i<=n; i++) {
        sum=sum+i;
    }
    cout << "La suma triangular es: " << sum << endl;
    cout << endl;
    return 0;
}
