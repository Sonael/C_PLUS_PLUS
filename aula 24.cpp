#include <iostream>
#include <stdlib.h>

using namespace std;

// Omiss�o de argumento e argumento pradr�o
void printar(string text="Ola mundo");

int main(){

    printar();

	return 0;
}

void printar(string text){
    cout << text;
}
