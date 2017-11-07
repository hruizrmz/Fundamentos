//  Helena Ruiz Ramirez
//  A01282531
//  3 de noviembre de 2017
//  Ejercicio 2

#include <iostream>
using namespace std;

void Sumas (int Arreglo[], int x, int&s1, int&s2) {
    for (int i=0;i<x;i++) {
        if (i%2==0)
            s1=s1+Arreglo[i];
        else if (i%2!=0)
            s2=s2+Arreglo[i];
    }
}

int main() {
    int tamArr, par=0, imp=0;
    cout << "Tamaño del arreglo: ";
    cin >> tamArr;
    cout << " " << endl;
    int Arr[tamArr];
    for (int i=0;i<tamArr;i++) {
        cout << "Casilla " << i << ": ";
        cin >> Arr[i];
    }
    cout << " " << endl;
    cout << "Arreglo: ";
    for (int j=0;j<tamArr;j++)
        cout << Arr[j] << " ";
    cout << " " << endl;
    cout << " " << endl;
    Sumas(Arr,tamArr,par,imp);
    cout << "Suma de los datos en casillas pares: " << par << endl;
    cout << "Suma de los datos en casillas impares: " << imp << endl;
    cout << " " << endl;
    return 0;
}
