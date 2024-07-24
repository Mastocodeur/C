//------------------------------------------------------------------------------
// TP 4 Exercice 5
#include <stdio.h>

int somme(int); //prototype de la fonction somme

int main(void) {
	int n,som;      //declaration des variables


	// entree des parametres
	printf("entrez un nombre entier : ");
	scanf("%d",&n);

    //appel de la fonction
    som = somme(n);

    //affichage des resultats
    printf("la somme des %d premiers entiers vaut %d\n\n",n,som);
	printf("la \"vraie\" valeur est : %d\n",(n*(n+1))/2);

    return 0;
}

//PLACER ICI LA DEFINITION DE LA FONCTION SOMME
