#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int l,c;
    int tl, tc;


    /*
    matriz[0][0] = 0
    matriz[0][1] = 0
    matriz[0][2] = 0
    matriz[0][3] = 0
    matriz[1][0] = 0
    matriz[1][1] = 0
    matriz[1][2] = 0
    matriz[1][3] = 0
    matriz[2][0] = 0
    matriz[2][1] = 0
    matriz[2][2] = 0
    matriz[2][3] = 0

    */

    cout << "Quantas linhas: "; cin >>tl;
    cout << "Quantas Colunas: ", cin >> tc;

    int matriz[tl][tc];

    for(l=0; l<tl; l++){
        for(c=0; c<tc; c++){
            cout << "Numeros da matrix: ";
            cin >> matriz[l][c];
        }
    }
    for(l=0; l<tl; l++){
        for(c=0; c<tc; c++){
            cout <<  matriz[l][c] << " ";
        }
        cout << "\n";
    }


	return 0;
}
