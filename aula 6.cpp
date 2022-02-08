#include <iostream>
using namespace std;

int n1,n2; //variaveis globais

//operadores matematicos: + - / * % ()

int main(){

    int n3,n4; //variaveis locais
    int res1,res2;


    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res1= n1/n2;
    res2= n1%n2;

    cout << "O calculo da divisao de " << n1 << " e " << n2 << "=" << res1 << "\n";
    cout << "O calculo do resto: " << res2 << "\n";

    return 0;
}
