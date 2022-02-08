#include <iostream>

using namespace std;

int main(){
    int num=5;

    cout << "Digite um valor: ";
    cin >> num;

    if(num >= 10){
        // Comando de decisões
        cout << "O valor " << num << " e Maior ou Igual a 10";
    }else{
        // O else fica dps da chaves do if
        cout << "O valor " << num << " nao e Maior ou Igual a 10";
    }

    return 0;
}
