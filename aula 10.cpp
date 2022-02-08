#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int nota1, nota2, media=2, resul;
    char opc;

    inicio:

    // Executa comandos no CMD (Biblioteca stdlib.h)
    system("cls");

    cout << "Primeira Nota: "; cin >> nota1;

    cout << "Sengunda Nota: "; cin >> nota2;

    resul = (nota1+nota2)/media;

    if(resul > 10){
        cout << "Digite notas validas";
    }

    else if(resul >= 3 and resul < 6){
        cout << "Aluno em recuperacao";
    }

    else if(resul >= 6){
        cout << "O aluno passou";
    }

    else{
        cout << "O aluno n passou";
    }

    cout << "\nDeseja continuar?[s/n]: "; cin >> opc;

    if(opc == 's' or opc == 'S'){
        // famigerado e inusável goto
        goto inicio;
    }


	return 0;
}
