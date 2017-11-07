//
//  Helena Ruiz Ramirez
//  A01282531
//  25 de Agosto de 2017
//
//  Proposito del programa:
//  Despues de preguntarle al usuario que tipo de cliente es y el tipo
//  y cantidad de azulejo que va a comprar, calcular y mostrar:
//  - El precio antes del descuento
//  - La cantidad de dinero que otorga el descuento
//  - El total a pagar
//

#include <iostream>

//  Constantes:
int LUJO = 6;
int ESTANDAR = 4;
int SEGUNDA = 2;

//  Variables:
float precio_o;
float precio_f;
char tipo;
char cliente;
int cantidad;
float descuento;

int main()
{
    std::cout << "¿Que tipo de azulejo desea comprar?" << std::endl;
    std::cout << "De Lujo=L , Estandar=E, De Segunda=S" << std::endl;
    std::cin >> tipo;
    std::cout << "¿Cuantos azulejos desea comprar? (Solo numeros enteros)" << std::endl;
    std::cin >> cantidad;
    
    if ( tipo=='L' )
        precio_o=LUJO*cantidad;
    else if ( tipo=='E' )
        precio_o=ESTANDAR*cantidad;
    else if ( tipo=='S' )
        precio_o=SEGUNDA*cantidad;
        
    if ( precio_o>=2000 )
        {
        if (precio_o<5000)
            {
            {std::cout << "¿Usted es un cliente frecuente? (Y / N)" << std::endl;
            std::cin >> cliente;}
            if ( cliente=='Y' )
                {precio_f=precio_o-(precio_o*0.3);
                descuento=30;}
            if ( cliente=='N' )
                {precio_f=precio_o-(precio_o*0.1);
                descuento=10;}
            }
        else if ( precio_o>=5000)
            {
                {std::cout << "¿Usted es un cliente frecuente? (Y / N)" << std::endl;
                std::cin >> cliente;}
                if ( cliente=='Y' )
                    {precio_f=precio_o-(precio_o*0.45);
                    descuento=45;}
                else if ( cliente=='N' )
                    {precio_f=precio_o-(precio_o*0.15);
                    descuento=15;}
            }
        }
    else if ( precio_o<2000 )
        {
        {std::cout << "¿Usted es un cliente frecuente? (Y / N)" << std::endl;
        std::cin >> cliente;}
        if ( cliente == 'Y' )
            {precio_f=precio_o-(precio_o*0.2);
            descuento=20;}
        }
    
    std::cout << " " << std::endl;
    
    std::cout << "Su total original era de " << precio_o << " pesos. Y recibio un descuento del " << descuento << "%." << std::endl;
    std::cout << "Su total ahora a pagar son " << precio_f << " pesos." << std::endl;
}

//  Casos de Prueba:

//  Cliente normal, quiere 50 azulejos de lujo.
//  El precio sin descuento es de 300 pesos.
//  No se aplican descuentos.
//  El precio se queda igual.

//  Cliente normal, quiere 500 azulejos estandar.
//  El precio sin descuento es de 2,000 pesos.
//  Se aplica un descuento de 10 porciento.
//  El precio final es de 1,800 pesos.

//  Cliente frecuente, quiere 3,000 azulejos de segunda.
//  El precio sin descuento es de 6,000 pesos.
//  Se aplica un descuento de 45 porciento.
//  El precio final es de 3,300 pesos.
