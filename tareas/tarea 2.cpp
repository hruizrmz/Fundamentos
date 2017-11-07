//  Helena Ruiz Ramirez
//  A01282531
//  29 de agosto de 2017
//  Tarea 2, Ejercicio 1

//  Proposito del programa:
//  Despues de pedir al usuario los lados y la altura de un triangulo (en numeros enteros),
//  el programa le dira que tipo de triangulo es (equilatero, isosceles, escaleno).

//  Algoritmo:
//  Crear las variables float de: l1=lado 1, l2=lado 2, h=altura
//  Crear la variable string "tipo" para el tipo de triangulo.
//  Pedir al usuario el valor de cada una y guardarlos.
//  Si pone un numero decimal, pedirle al usuario de nuevo un numero entero.
//  Si l1 es igual a l2 y l1 es igual a h, mostrar que es un triangulo equilatero.
//  Si l1 es igual a l2 y l1 no es igual a h, o l1 es igual a h y l1 no es igual a l2,
//  mostrar que es un triangulo isosceles.
//  Si l1 no es igual a l2 y l1 no es igual a h, mostrar que es un triangulo escaleno.

//  Casos de Prueba:
//  l1  l2  h   tipo
//  15  15  16  Isosceles
//  47  12  47  Isosceles
//  36  25  25  Isosceles
//  20  20  20  Equilatero
//  24  08  10  Escaleno

#include <iostream>
#include <cmath>
using namespace std;

float l1;
float l2;
float h;
string tipo;

int main()
{
    cout << "A continuacion escribe las medidas de tu triangulo: " << endl;
    cout << "Lado 1: ";
    cin >> l1;
    if ( floor(l1)!=ceil(l1)) {
        cout << "Por favor redondea al numero mas cercano: ";
        cin >> l1;
    }
    cout << "" << endl;
    cout << "Lado 2: ";
    cin >> l2;
    if ( floor(l2)!=ceil(l2)) {
        cout << "Por favor redondea al numero mas cercano: ";
        cin >> l2;
    }
    cout << "" << endl;
    cout << "Altura: ";
    cin >> h;
    if ( floor(h)!=ceil(h)) {
        cout << "Por favor redondea al numero mas cercano: ";
        cin >> h;
    }
    cout << "" << endl;
    
    if (l1==l2 && l1==h)
        tipo = "equilatero";
    else if ((l1==l2 && l1!=h)or(l2==h && l2!=l1)or(h==l1 && h!=l2))
        tipo = "isosceles";
    else if (l1!=l2 && l1!=h)
        tipo = "escaleno";
    
    cout << "Este es un triangulo " << tipo << "." << endl;
    return 0;
}
