#include <iostream>

using namespace std;

double arr [20], n, sum, prom;

int main() {
    int i=1;
    cout << "¿Cuantos arreglos necesita? ";
    cin >> n;
    do {
        if (n>20) {
            cout << "Valor invalido. Por favor escriba un numero menor a 20: ";
            cin >> n;
        }
    } while (n>20);
    cout << endl;
    for (int x=0;x<=(n-1);x++) {
        cout << "Numero "<<i<< ": ";
        cin >> arr[x];
        i++;
    }
    cout << endl;
    for (int j=0;j<=(n-1);j++) {
        cout << arr[j];
        if (j<=(n-2))
            cout << " , ";
        sum+=arr[j];
    }
    cout << endl;
    cout << endl;
    prom=sum/n;
    cout << "El promedio es " << prom;
    cout << endl;
    cout << endl;
    return 0;
}
