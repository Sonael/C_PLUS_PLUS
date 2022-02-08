#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int num;

    cout << "Digite um numero: "; cin >> num;

    if(num<3 or num>8){
        cout << "Valor Aceito";
    }
    else{
        cout << "Valor Nao Aceito";
    }


	return 0;
}
