#include <iostream>
#include <stdlib.h>

using namespace std;

// Omissão de argumento e argumento pradrão
void printar(string text="Ola mundo");

int main(){

    printar();

	return 0;
}

void printar(string text){
    cout << text;
}
