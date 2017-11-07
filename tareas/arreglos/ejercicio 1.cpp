//  Helena Ruiz Ramirez
//  A01282531
//  3 de noviembre de 2017
//  Ejercicio 1

#include <iostream>
using namespace std;

void Sustituye (int Arreglo[], int x, int n) {
    for (int l = 0;l<x;l++) {
       if (Arreglo[l] % n != 0)
           Arreglo[l]=-1;
    }
}

int main() {
    int tamArr, N;
    cout << "Tamaño del arreglo: ";
    cin >> tamArr;
    cout << "Numero: ";
    cin >> N;
    cout << " " << endl;
    int Arr[tamArr];
    for (int i=0;i<tamArr;i++) {
        cout << "Dato " << (i+1) << ": ";
        cin >> Arr[i];
    }
    cout << " " << endl;
    cout << "Arreglo creado con los datos que usted escribio: " << endl;
    for (int j=0;j<tamArr;j++)
        cout << Arr[j] << " ";
    cout << " " << endl;
    cout << " " << endl;
    Sustituye(Arr,tamArr,N);
    cout << "Arreglo despues de sustituir los datos no divisibles por " << N << ": " << endl;
    for (int k=0;k<tamArr;k++)
        cout << Arr[k] << " ";
    cout << " " << endl;
    cout << " " << endl;
    return 0;
}
