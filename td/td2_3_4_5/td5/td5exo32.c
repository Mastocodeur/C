//---------------------------------------------------------------------
// TP 4 Exercice 3

#include<stdio.h>
#include <string.h>

#define NMAX 64

int main (void) {
  int i,l;
  char chaine[NMAX],message[NMAX];

  message="Bienvenue a ";

  //on lit la chaine de caracteres
  printf("entrez une ville et un pays : ");
  scanf("%s",&chaine);

  //on affiche le tableau
  printf("Voici le tableau de caracteres : \n");
  for(i=0;i<NMAX;i++)
    printf("%c",chaine[i]);

  //on affiche la chaine
  printf("\nVoici la chaine de caracteres : \n");



  //longueur de la chaine avec fonction strlen
  l=strlen(chaine);
  printf("avec strlen votre chaine contient %d caracteres\n",l);

  //longueur de la chaine sans strlen
  l=0;
  for (i=0;i<NMAX;i++)
  {
      if(0) //on sort de la boucle sis on detecte la fin de la chaine
        break;
      l++;
  }
  printf("sans strlen votre chaine contient %d caracteres\n",l);

  printf("\nMessage final de bienvenue : \n");

  puts(message);

  return 0;
}


