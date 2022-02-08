#include <iostream>
#include <stdlib.h>

// funções podem ter o mesmo nome contanto que tenham argumentos diferentes

void soma(int n1, int n2);
void soma();

using namespace std;

int main(){

    soma(30, 20);
    soma();

	return 0;
}

void soma(int n1, int n2){
    int r;

    r = n1+n2;

    cout << "O resultado e: " << r;

}


void soma(){
    int n1, n2, r;

    n1 = 10;
    n2 = 10;
    r = n1+n2;

    cout << "\nO resultado e: " << r;
}
