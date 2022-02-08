#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // Famoso e já conhecido For
    /*
        for(ini ; cond ; inc/dec){
            // command
        }
    */
    int x, num;

    cout << "digite um numero: "; cin >> num;

    for(x=0; x<=num; x++){
        if(x%2 == 0){
            cout << x << " par\n";
        }
        else{
            cout << x << " impar\n";
        }
    }

	return 0;
}
