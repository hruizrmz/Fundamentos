//
//  Helena Ruiz Ramirez
//  A01282531
//  3 de octubre de 2017
//

#include <iostream>
using namespace std;

int i=1, n, j=1, dias=0;
double ventas, total=0, totalFinal=0, promedio;
char resp;

int main() {
    do {
        cout << "Dia " << i << ": ";
        cout << "¿Cuantas ventas tuvo? ";
        cin >> n;
        do {
            cout << "Venta " << j << ": ";
            cin >> ventas;
            total = total + ventas;
            j++;
        } while (j<=n);
        j=1;
        cout << "Total de ventas del dia " << i << ": " << total << endl;
        totalFinal = totalFinal+total;
        total=0;
        i++;
        dias=dias+1;
        cout << "¿Desea agregar otro dia? (S/N) ";
        cin >> resp;
        resp=toupper(resp);
        cout << endl;
    } while (resp=='S');
    promedio = totalFinal / dias;
    cout << "Promedio de ventas: " << promedio << endl;
    return 0;
}
