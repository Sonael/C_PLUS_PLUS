#include <iostream>

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

char palavra[30], letra[1];
string secreta[30];
int i,k,acertos,tam,chances;


int main()
{
tam=0;
acertos=0;
chances=6;
i=0, k=0;


  cout << "Digite a palavra secreta: ";
  cin >> palavra;
  system("cls");

  for (i=0; i<30; i++)
  {
      secreta[i]="-";
  }


  for (k=0; k<30; k++)
 {
    if (palavra[k] != '\0')
  {
      tam++;
  }
 }

while(chances>0 && acertos<tam)
{
cout << "Numero de chances restante: " << "" << chances << endl;
cout << "\n A palavra secreta eh: ";


for (i=0; i<tam; i++)
{
    cout << " " << secreta[i];
}
cout << endl;

cout << "\n\nDigite uma letra: \n\n";
cin >> letra;
system("cls");
chances--;

for (i=0; i<tam; i++)
{
for(i=0; i<tam; i++){
    if(palavra[i]==letra[0]){
        acerto=true;
        if(secreta[i]!=letra[0]){
            acertos++;
            }
            secreta[i]=palavra[i];
        }
    }﻿

}

    if (chances==0 && acertos<tam) { cout << " Voce perdeu..." << endl;}
    if (acertos==tam) { cout << " Voce ganhou... parabens.." << endl;}

    system("pause");


    return 0;
}
