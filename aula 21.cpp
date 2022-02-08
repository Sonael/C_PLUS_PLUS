#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
// passagem de parametros pelo terminal
int main(int argc, char *argv[]) {
    int resp;

    // Conferindo se existem parameros
    if(argc>1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao clube";
        }
        else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema";
        }
        else{
            cout << "Fico em casa";
        }
    }
    // caso n hajam parametros
    else{
        cout << "Sem entrada de Parametros";
    }

	return 0;
}

