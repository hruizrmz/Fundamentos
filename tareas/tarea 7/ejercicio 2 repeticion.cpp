//  Helena Ruiz Ramirez
//  A01282531
//  6 de octubre de 2017


#include <iostream>
using namespace std;

int N, n, numPar=0, numImp=0, i;

int main() {
    cout << "¿Cuantos numeros enteros quiere checar? ";
    cin >> N;
    cout << endl;
    for (int i=1; i<=N; i++) {
        cout << "Numero " << i << ": ";
        cin >> n;
        if (n%2==0) {
            cout << "Es par" << endl;
            numPar = numPar + 1;
        }
        else if (n%2!=0) {
            cout << "Es impar" << endl;
            numImp = numImp + 1;
        }
    }
    cout << endl;
    cout << "Hubo un total de " << numPar << " numeros pares y " << numImp << " numeros impares." << endl;
    return 0;
}
