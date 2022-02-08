#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int num;

    cout << "1-lancha \n2-carro \n3-moto \n4-aviao \n5-jato\n> "; cin >> num;
    // Switch case
    switch(num){
    case 1:
        cout << "Transporte Aquatico\n";
        cout << "Viajando de Lancha\n";
        break;
    case 2:
    case 3:
        cout << "Transporte Terrestre\n";
        break;
    case 4:
    case 5:
        cout << "Transporte Aereo\n";
        switch(num){
        case 4:
            cout << "Viajando de Aviao\n";
            break;
        case 5:
            cout << "Viajando de Jato\n";
            break;
        }
        break;
    default:
        cout << "digite uma opcao valida\n";
    }


	return 0;
}
