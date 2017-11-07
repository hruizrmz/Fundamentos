
//  Helena Ruiz Ramirez
//  A01282531
//  18 de septiembre de 2017
//  Tarea 3

//  Casos de Prueba

//  Llamada    Minutos     Costo
//      1         2         2.32
//      2         4         4.64
//      3        10         11.6
//  Costo total:    18.56

//  Llamada    Minutos     Costo
//      1        2.5        2.32
//      2         8         9.28
//      3       23.3       26.68
//  Costo total:    38.28

#include <iostream>
#include <cmath>
using namespace std;

int llamadas, i;
double minutos, costo=0,recibo=0;

int main() {
    cout << "¿Cuantas llamadas ha hecho? ";
    cin >> llamadas;
    cout << endl;
    for (i=1; i<=llamadas; i++) {
        costo=0;
        cout << "¿Cuantos minutos duro la llamada " << i << "? ";
        cin >> minutos;
        if ( ceil(minutos) != floor(minutos) ) {
            cout << "Por favor redondea al minuto mas cercano: ";
            cin >> minutos;
            }
        costo=1.16*minutos;
        cout << "La llamada " << i << " costo " << costo << " pesos." << endl;
        recibo = costo+recibo;
        cout << endl;
        }
    cout << "Su total a pagar es de " << recibo << " pesos." << endl;
    cout << endl;
    return 0;
}
