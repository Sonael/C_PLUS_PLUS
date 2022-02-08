#include <iostream>
#include <stdlib.h>

using namespace std;

// declarando funções
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
    int n1, n2, resul;
    string transp[4]={"carro", "moto", "barco", "aviao"};

    cout << "Digite um numero: "; cin >> n1;
    cout << "Digite outro numero: "; cin >> n2;

    resul = soma2(n1, n2);

    cout << resul << "\n";

    tr(transp);

	return 0;
}

// criando uma função que n tem retorno
void soma(int n1, int n2){
    int resp;
    resp = n1+n2;
    cout << "A soma de " << n1 << " + " << n2 << " e: " << resp;

}
// criando um função que retornar um inteiro
int soma2(int n1, int n2){
    int resp;
    resp = n1+n2;
    return resp;
}
// criando uma função de interação com vetores
void tr(string tra[4]){
    for(int i=0; i<4; i++){
        cout << tra[i] << "\n";
    }
}
