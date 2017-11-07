//  Helena Ruiz Ramirez
//  A01282531
//  20 de octubre de 2017
//  Parametros por referencia

#include <iostream>
using namespace std;

void Intercambia (double &a, double &b) {
    double x;
    x=a;
    a=b;
    b=x;
}

void AreaPer (double l, double w, double &area, double &per) {
    area= l*w;
    per= (l*2)+(w*2);
}

int main() {
    double x, y, la, an, ar, pe;
    cout << "Valor de x: ";
    cin >> x;
    cout << "Valor de y: ";
    cin >> y;
    Intercambia(x,y);
    cout << "Ahora, x=" << x << " y y=" << y << endl;
    cout << endl;
    cout << "Largo del rectangulo: ";
    cin >> la;
    cout << "Ancho del rectangulo: ";
    cin >> an;
    AreaPer (la, an, ar, pe);
    cout << "El area es " << ar << " y el perimetro es " << pe << endl;
    cout << " " << endl;
    return 0;
}
