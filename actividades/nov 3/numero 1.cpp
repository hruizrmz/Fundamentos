//  Helena Ruiz Ramirez
//  A01282531
//  3 de noviembre de 2017
//  Numero 1

#include <iostream>
using namespace std;

int main() {
    int orden, l=0;
    int Matriz[15][15];
    cout << "Orden de la matriz: ";
    cin >> orden;
    while (orden>15) {
        cout << "Por favor escribe un numero menor a 15: ";
        cin >> orden;
    }
    cout << endl;
    for (int i=0;i<orden;i++) {
        cout << "Renglon " << i+1 << endl;
        for (int j=0;j<orden;j++) {
            cout << "Columna " << j+1 << ": ";
            cin >> Matriz[i][j];
        }
        cout << endl;
    }
    cout << "Diagonal principal:" << endl;
    for (int k=0;k<orden;k++) {
        cout << Matriz[k][l] << " ";
        l++;
    }
    cout << endl;
    cout << endl;
    return 0;
}
