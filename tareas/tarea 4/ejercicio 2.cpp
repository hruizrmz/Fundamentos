//
//  Helena Ruiz Ramirez
//  A01282531
//  22 de septiembre de 2017
//  Tarea 4
//

#include <iostream>
using namespace std;

int total=0;
char clave, answer;

int main() {
    do {
        cout << "Escriba la clave del articulo que va a comprar: ";
        cin >> clave;
        clave=toupper(clave);
        switch (clave) {
            case 'A':
                total=total+70;
                cout << "Tiene un precio de 70 pesos. ";
                break;
            case 'B':
                total=total+120;
                cout << "Tiene un precio de 120 pesos. ";
                break;
            case 'C':
                total=total+200;
                cout << "Tiene un precio de 200 pesos. ";
                break;
            case 'D':
                total=total+260;
                cout << "Tiene un precio de 260 pesos. ";
                break;
            case 'E':
                total=total+300;
                cout << "Tiene un precio de 300 pesos. ";
                break;
        }
        cout << "¿Va a comprar algo mas? (S/N): ";
        cin >> answer;
        answer=toupper(answer);
        cout << endl;
    } while (answer=='S');
    cout << "El total de su compra es de " << total << " pesos.";
    cout << endl;
    return 0;
}
