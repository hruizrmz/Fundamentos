//  Proposito del Programa:
//	Cambiar un valor de millas a kilometros.
//
//	Nombre: Helena Ruiz Ramirez , Mariana De Abril Ayala Miranda
//  Matrícula: A01282531 , A00822265
//  Fecha: 15/08/17

#include <iostream>
using namespace std;

double millas;
//  Crea una variable para las millas que se van a convertir.

double km;
//  Crea una variable para guardar el convertimiento de millas a km.

int main ()
{
    cout<<"¿Cuantas millas deseas convertir a kilometros?"<<endl;
    //  Pregunta al usuario el numero de millas.
    
    cin>>millas;
    //  Guarda en "millas" el numero de millas del usuario.
    
    km=millas*1.60934;
    //  Mutliplica las millas por la equivalente a un km y la guarda en "km".
    
    cout<<"El total de kilometros es "<<km<<endl;
    //  Anuncia al usuario el resultado de la conversion.
    
    cout<<" "<<endl;
    // Espacio que indica el fin del programa.
}
