//  Helena Ruiz Ramirez
//  A01282531
//  3 de noviembre de 2017
//  Numero 2

#include <iostream>
using namespace std;

void Datos (int Matriz[20][20],int orden) {
    for (int i=0;i<orden;i++) {
        cout << "Renglon " << i+1 << endl;
        for (int j=0;j<orden;j++) {
            cout << "Columna " << j+1 << ": ";
            cin >> Matriz[i][j];
        }
        cout << endl;
    }
}

void Suma (int Matriz1[20][20], int Matriz2[20][20], int orden, int Matriz3[20][20]) {
    cout << "Suma de las matrices: " << endl;
    int k=0;
    for (int m=0;m<orden;m++) {
        k++;
        int l=0;
        for (int n=0;n<orden;n++) {
            Matriz3[k][l] = Matriz1[m][n] + Matriz2[m][n];
            cout << Matriz3[k][l] << " ";
            l++;
        }
        cout<<endl;
    }
}

void Producto (int Matriz1[20][20], int Matriz2[20][20], int orden, int Matriz3[20][20]) {
    cout << "Producto de las matrices: " << endl;
    int k=0;
    for (int m=0;m<orden;m++) {
        k++;
        int l=0;
        for (int n=0;n<orden;n++) {
            Matriz3[k][l] = (Matriz1[m][n]*Matriz2[m][n])+(Matriz1[m][n+1]*Matriz2[m+1][n]);
            cout << Matriz3[k][l] << " ";
            l++;
        }
        cout<<endl;
    }
}

int main() {
    int N;
    int iMatriz[20][20];
    int jMatriz[20][20];
    int sMatriz[20][20];
    int pMatriz[20][20];
    cout << "Orden de las matrices: ";
    cin >> N;
    cout << " ";
    while (N>20) {
        cout << "Por favor escribe un numero menor a 20: ";
        cin >> N;
    }
    cout << endl;
    cout << "Datos para la Matriz 1" << endl;
    Datos (iMatriz,N);
    cout << endl;
    cout << "Datos para la Matriz 2" << endl;
    Datos (jMatriz,N);
    cout << endl;
    Suma (iMatriz,jMatriz,N,sMatriz);
    cout << endl;
    Producto (iMatriz,jMatriz,N,pMatriz);
    cout << endl;
    return 0;
}
