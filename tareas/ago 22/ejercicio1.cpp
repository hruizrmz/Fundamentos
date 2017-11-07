//  Helena Ruiz Ramirez , A01282531
//  Martes 22 de agosto de 2017
//  Tarea 1: Ejercicio 1
//  El proposito de este programa sera leer una longitud en metros
//  y calcular su equivalente en pies.

//  Para hacer esto, primero debo incluir bibliotecas.

#include <iostream>
#include <cmath>
using namespace std;

//  Antes de correr el programa, voy a crear variables para la longitud
//  en metros, la longitud resultante en pies, y una constante
//  para el numero de metros que hay en una pies.

float metros; double longitud;
const double PIES = 3.28084;

// Ya que se establecieron los identificadores, sigue escribir los estatutos.

//  Primero se le pregunta al usuario cuantos metros desea convertir.
//  Si es un numero entero, podemos continuar a convertirlos a pies.
//  De no ser asi, debemos pedirle al usuario que lo redondee al numero
//  mas cercano, ya que queremos que la longitud en metros sea un
//  numero entero. Despues de la conversion, el paso final es leerle
//  al usuario su resultado.

int main()
{
    cout << "¿Cuantos metros deseas convertir?: ";
    cout << "" << endl;
    cin >> metros;
    if ( floor(metros)==ceil(metros))
            metros = metros;
    else
        {
            cout << "Por favor redondea al numero mas cercano: ";
            cin >> metros;
            cout << "" << endl;
        }
    cout << metros << " metros equivalen a... ";
    longitud=metros*PIES;
    cout << longitud << " pies." << endl;
    return 0;
}

//  Casos de Prueba:
//  Como usuario, voy a establecer que quiero convertir 25 metros.
//  El programa identificara 25 como un numero entero y lo guardara en "metros".
//  Multiplicara "metros" por la constante "PIES" y el resultado se guardara en "longitud".
//  El programa me leera que "25 metros equvalen a... 82.021".

//  Como usuario, voy a establecer que quiero convertir 25.2 metros.
//  El programa no identificara 25.2 como un numero entero y me pedira que cambie
//  mi cantidad al numero redondeado mas cercano antes de guardarlo en "metros".
//  Multiplicara "metros" por la constante "PIES" y el resultado se guardara en "longitud".
//  El programa me leera que "25.2 metros equvalen a... 82.6771".
