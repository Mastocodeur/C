//---------------------------------------------------------------------
// TP 5 Exercice 3

#include<stdio.h>
#include <string.h>

#define NMAX 128

int letmin(char); //fonction indiquant si la lettre passee en argument est une lettre minuscule

int main (void) {
  int i,l,n;
  char chaine[NMAX];

  printf("entrez une chaine de caracteres : ");
  gets(chaine);

  //on affiche la chaine
  puts(chaine);

  //longueur de la chaine avec fonction strlen
  l=strlen(chaine);
  printf("votre chaine contient %d caracteres\n",l);


  return 0;
}


