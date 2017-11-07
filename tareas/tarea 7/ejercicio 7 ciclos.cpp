//  Helena Ruiz Ramirez
//  A01282531
//  6 de octubre de 2017

#include <iostream>
using namespace std;

int n,j;

int main() {
    cout << "Numero de renglones: ";
    cin >> n;
    cout << endl;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
