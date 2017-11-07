//  Helena Ruiz Ramirez
//  A01282531
//  9 de octubre de 2017
//  Tarea 2do parcial, ciclos anidados, ejercicio 9

#include <iostream>
using namespace std;

int n,j;
char num;

int main() {
    cout << "Valor de n: ";
    cin >> n;
    cout << endl;
    for (int i=1; i<=n; i++) {
        if (i%2==0)
            num='p';
        else if (i%2!=0)
            num='i';
        j=n;
        switch (num) {
            case 'i':
                while (j>0) {
                    cout << '*';
                    j--;
                    if (j>=1)
                        cout << '#';
                    j--;
                }
                cout << endl;
                break;
            case 'p':
                while (j>0) {
                    cout << '#';
                    j--;
                    if (j>=1)
                        cout << '*';
                    j--;
                }
                cout << endl;
                break;
        }
    }
    cout << endl;
    return 0;
}
