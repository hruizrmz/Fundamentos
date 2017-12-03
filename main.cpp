//  Helena Ruiz Ramirez
//  A01282531
//  4 de diciembre de 2017
//  Proyecto Integrador: Memorama

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void Inicio(int arr[4][4], bool tapada[4][4]) {
    int i,j,cont,carta;
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            arr[i][j]=0;
            tapada[i][j]=true;
        }
    }
    srand((unsigned int)time(0));
    for (cont=1, carta=1; cont<=8;) {
        i = rand()%4;
        j = rand()%4;
        if (arr[i][j] == 0) {
            arr[i][j] = cont;
            if (carta == 1)
                carta = 2;
            else {
                cont++;
                carta = 1;
            }
        }
    }
}

void MuestraTabla(int tablero[4][4],bool tapada[4][4]) {
    for (int r=0; r<4; r++) {
        for (int c=0; c<4; c++) {
            if (tapada[r][c]==1)
                cout << "[X]"<< "\t";
            else
                cout <<" "<<tablero[r][c]<< "\t";
        }
        cout << endl;
    }
}

int main(){
    cout<<"JUEGO DE MEMORAMA";
    cout<<endl;
    
    string jugador1, jugador2;
    cout<<"Jugador 1: ";
    getline(cin,jugador1);
    cout<<"Jugador 2: ";
    getline(cin,jugador2);
    cout<<endl;
    
    int tablero[4][4];
    bool reverso[4][4];
    Inicio(tablero,reverso);
    
    int turno=1, ren1, col1, ren2, col2, score1=0, score2=0;
    char resp;
    do {
        if (turno%2==0)
            cout<<"Turno de "<<jugador2<<endl;
        else
            cout<<"Turno de "<<jugador1<<endl;
        MuestraTabla(tablero,reverso);
        cout<<endl;
        
        cout<<"Primera Casilla: "<<endl;
        cout<<"Renglon = ";
        cin>>ren1;
        while (ren1>4) {
            cout<<"Debe estar entre 1 y 4: ";
            cin>>ren1;
        }
        cout<<"Columna = ";
        cin>>col1;
        while (col1>4) {
            cout<<"Debe estar entre 1 y 4: ";
            cin>>col1;
        }
        cout<<endl;
        while (reverso[(ren1-1)][(col1-1)]==false) {
            cout<<"Tiene que ser una casilla sin destapar"<<endl;
            cout<<"Renglon = ";
            cin>>ren1;
            while (ren1>4) {
                cout<<"Debe estar entre 1 y 4: ";
                cin>>ren1;
            }
            cout<<"Columna = ";
            cin>>col1;
            while (col1>4) {
                cout<<"Debe estar entre 1 y 4: ";
                cin>>col1;
            }
            cout<<endl;
        }
        reverso[(ren1-1)][(col1-1)]=false;
        
        cout<<"Segunda Casilla: "<<endl;
        cout<<"Renglon = ";
        cin>>ren2;
        while (ren2>4) {
            cout<<"Debe estar entre 1 y 4: ";
            cin>>ren2;
        }
        cout<<"Columna = ";
        cin>>col2;
        while (col2>4) {
            cout<<"Debe estar entre 1 y 4: ";
            cin>>col2;
        }
        while ((ren2==ren1)&&(col2==col1)) {
            cout<<"Escoge otra casilla"<<endl;
            cout<<"Renglon = ";
            cin>>ren2;
            while (ren2>4) {
                cout<<"Debe estar entre 1 y 4: ";
                cin>>ren2;
            }
            cout<<"Columna = ";
            cin>>col2;
            while (col2>4) {
                cout<<"Debe estar entre 1 y 4: ";
                cin>>col2;
            }
            cout<<endl;
        }
                cout<<endl;
        while (reverso[(ren2-1)][(col2-1)]==false) {
            cout<<"Tiene que ser una casilla sin destapar"<<endl;
            cout<<"Renglon = ";
            cin>>ren2;
            while (ren2>4) {
                cout<<"Debe estar entre 1 y 4: ";
                cin>>ren2;
            }
            cout<<"Columna = ";
            cin>>col2;
            while (col2>4) {
                cout<<"Debe estar entre 1 y 4: ";
                cin>>col2;
            }
            while ((ren2==ren1)&&(col2==col1)) {
                cout<<"Escoge otra casilla"<<endl;
                cout<<"Renglon = ";
                cin>>ren2;
                while (ren2>4) {
                    cout<<"Debe estar entre 1 y 4: ";
                    cin>>ren2;
                }
                cout<<"Columna = ";
                cin>>col2;
                while (col2>4) {
                    cout<<"Debe estar entre 1 y 4: ";
                    cin>>col2;
                cout<<endl;
                }
            }
            cout<<endl;
        }
        reverso[(ren2-1)][(col2-1)]=false;
        
        MuestraTabla(tablero,reverso);
        reverso[(ren1-1)][(col1-1)]=true;
        reverso[(ren2-1)][(col2-1)]=true;
        cout<<endl;
        if (tablero[(ren1-1)][(col1-1)] == tablero[(ren2-1)][(col2-1)] ) {
            if (turno%2==0) {
                score2++;
                cout<<"¡"<<jugador2<<" le atino a un par!"<<endl;
            }
            else {
                score1++;
                cout<<"¡"<<jugador1<<" le atino a un par!"<<endl;
            }
            reverso[(ren1-1)][(col1-1)]=false;
            reverso[(ren2-1)][(col2-1)]=false;
        }
        
        if (score1+score2<=7) {
            cout<<"¿Quieres seguir jugando?(S/N) ";
            cin>>resp;
            resp=toupper(resp);
        }
        turno++;
        cout<<"-------------------------------"<<endl;
        if (score1+score2==8) {
            if (score1>score2) {
                cout<<"Termino el juego. El ganador es "<<jugador1<<" con "<<score1<<" pares. "<<jugador2<<" junto "<<score2<<" pares."<<endl;
                cout<<endl;
                return 0;
            }
            else if (score2>score1) {
                cout<<"Termino el juego. El ganador es "<<jugador2<<" con "<<score2<<" pares. "<<jugador1<<" junto "<<score1<<" pares."<<endl;
                cout<<endl;
                return 0;
            }
            else if (score1==score2) {
                cout<<"¡Hubo un empate! ¿Por que no lo intentan otra vez?"<<endl;
                cout<<endl;
                return 0;
            }
        }
        if (resp=='N') {
            cout<<"No terminaron el juego. "<<jugador1<<" junto "<<score1<<" pares y "<<jugador2<<" junto "<<score2<<" pares."<<endl;
            cout<<endl;
            return 0;
        }
    } while (resp=='S');
    cout<<endl;
    return 0;
}
