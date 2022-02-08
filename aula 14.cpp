#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int n1, n2, resl;
    string resp, sair;

    while(true){
    cout << "digite a Primera nota: "; cin >> n1;
    cout << "Digite a Segunda nota: "; cin >> n2;
    resl = (n1+n2)/2;

    resp = (resl >= 6) ? "Aprovado\n" : "Reprovado\n";
    cout << resp;

    cout << "Continuar? ";cin >> sair;

    if(sair == "n" or sair == "N"){
        break;
    }

    }

	return 0;
}
