#include <iostream>

using namespace std;

int main(){

    int vidas=0; // Recebe numeros inteiros
    char letra='B'; // Recebe apenas uma letra ou usa-se [x] = numeros de letras a ser usadas
    double decimal=5.2; // Recebe numeros reais completos
    float decimal2=5.2; // Recebe numeros reais e aredonda
    bool vivo=true; // Recebe True (verdadeiro [1]) ou False (falso [0])
    string nome="Sonael"; // Recebe um texto

    cout << "digite o numero de vida\n";
    cin >> vidas; // serve como inpunt

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";
    cout << "or\n";
    cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n" ;

    return 0;
}


