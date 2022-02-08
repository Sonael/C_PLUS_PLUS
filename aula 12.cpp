#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n1, n2, media;
    string res;

    cout << "Digite a primeira nota: "; cin >> n1;
    cout << "Digite a sengunda nota: "; cin >> n2;

    media = (n1+n2)/2;

    //Operador Ternário (if simples)
    res=(media>=6) ? "Aprovado" : "Reprovado";

    cout << "Aluno " << res;

	return 0;
}
