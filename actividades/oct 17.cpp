//  Helena Ruiz Ramirez
//  A01282531
//  17 de octubre de 2017
//  Ejercicio de parametros

#include <iostream>
using namespace std;

double sRec, s, m ,h;

void tiempo (double a, double &b, double &c, double &d) {
    int ent;
    double fracc;
    b=a/3600;
    ent = b;
    fracc = (b - ent);
    b = ent;
    c=fracc*60;
    ent = c;
    fracc = (c - ent);
    c = ent;
    d=fracc*60;
}

int main() {
    cout << "Segundos: ";
    cin >> sRec;
    tiempo (sRec, h, m, s);
    cout<<"El tiempo exacto es "<<h<<"h "<<m<<"m "<<s<<"s"<<endl;
    return 0;
}
