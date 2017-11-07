//
//  Helena Ruiz Ramirez
//  A01282531
//  22 de septiembre de 2017
//  Tarea 4
//

#include <iostream>
using namespace std;

int b,a,i;

int main() {
    cout << "Escriba el numero mayor: ";
    cin >> b;
    cout << "Escriba el numero menor: ";
    cin >> a;
    cout << endl;
    for (i=b;i>=a;i--)
        cout << i << " ";
    cout << endl;
    return 0;
}
