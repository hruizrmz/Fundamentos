//  Helena Ruiz Ramirez , A01282531
//  Martes 22 de agosto de 2017
//  Tarea 1: Ejercicio 2
//  El proposito de este programa sera calcular el volumen y el area de un cilindro.

//  Para hacer esto, primero debo incluir bibliotecas.

#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

//  Antes de correr el programa, voy a crear variables para el radio
//  y la altura, el area y el volumen del cilindro. Tambien creare una
//  constante para el valor de pi.

double radio; double altura;
float area; float volumen;
const double PI = 3.1416;

// Ya que se establecieron los identificadores, sigue escribir los estatutos.

//  Primero se le pregunta al usuario las medidas del cilindro que se van a
//  usar para ser calculadas. Las medidas ahora se guardan en sus respectivas
//  variables. En la variable "area" se guarda el valor de la operacion
//  "2*PI*radio*(radio+altura)", y en la variable "volumen" se guarda el valor
//  de la operacion "PI*(radio*radio)*altura". Finalmente, se leen al usuario
//  los resultados de las dos operaciones.

int main()
{
    cout << "¿Cual es la altura del cilindro?: ";
    cin >> altura;
    cout << "¿Cual es el radio del cilindro?: ";
    cin >> radio;
    cout << "" << endl;
    area=2*PI*radio*(radio+altura);
    volumen=PI*(radio*radio)*altura;
    cout << "El area del cilindro es " << area << "." << endl;
    cout << "El volumen del cilindro es " << volumen << "." << endl;
    return 0;
}

//  Casos de Prueba:
//  Como usuario, voy a establecer que el cilindro tiene 15cm de altura y 5cm de radio.
//  El programa va a guardar esas medidas en sus respectivas variables.
//  El programa va a ejecutar las operaciones para calcular area y volumen.
//  El programa me leera que "El area del cilindro es 628.32 " y despues "El volumen del
//  cilindro es 1178.1."

//  Como usuario, voy a establecer que el cilindro tiene 17.24cm de altura y 4.8cm de radio.
//  El programa va a guardar esas medidas en sus respectivas variables.
//  El programa va a ejecutar las operaciones para calcular area y volumen.
//  El programa me leera que "El area del cilindro es 664.712." y despues "El volumen del
//  cilindro es 1247.87".
