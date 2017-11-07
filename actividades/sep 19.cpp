//  Helena Ruiz Ramirez
//  A01282531
//  20 de septiembre de 2017
// ------------------------------------------------------------------
//  Casos de Prueba:

//  Precio del Articulo     Cantidad Comprada       Costo del Articulo
//          50                      4                      200
//          34                      3                      102
//          13                     10                      130
//  Articulos Comprados: 3                  Total a Pagar: 432

//  Precio del Articulo     Cantidad Comprada       Costo del Articulo
//         22.3                     7                     156.1
//         63.05                    2                     126.1
//  Articulos Comprados: 2                 Total a Pagar: 282.2
// ------------------------------------------------------------------

#include <iostream>
using namespace std;

int cantidad, comprados;
double precio, articulo=0, total=0;
char answer;

int main() {
    do {
        cout << "¿Cuanto cuesta el articulo? ";
        cin >> precio;
        cout << endl;
        cout << "¿Cuantos articulos desea comprar? ";
        cin >> cantidad;
        articulo = cantidad*precio;
        total = total+articulo;
        comprados = comprados+1;
        cout << endl;
        cout << "El total de este articulo es de " << articulo << " pesos.";
        cout << " ¿Desea comprar algo mas? (S/N) ";
        cin >> answer;
        answer = toupper(answer);
        cout << "-------" << endl;
    } while ( answer == 'S' );
    cout << "Usted compro " << comprados << " articulos.";
    cout << " Su total a pagar es de " << total << " pesos.";
    cout << endl;
    return 0;
}
