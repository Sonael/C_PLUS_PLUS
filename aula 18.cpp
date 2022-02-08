#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int vetor[10];
    int i, a, b;

    // Vetor = declaração de multiplas variáveis do mesmo tipo

    for(a=10, b = 0; b<sizeof(vetor)/4;a+= 10, b++){
        vetor[b] = a;
    }


    for(i=0; i<sizeof(vetor)/4; i++){
        cout << vetor[i] << "\n";
    }


	return 0;
}
