//
//  Helena Ruiz Ramirez
//  A01282531
//  22 de septiembre de 2017
//

#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int c=1; c<=4; c++) {
        cout << c;
        for (int p=n; p>0; p--)
            cout << "*";
        n--;
    }
    return 0;
}
