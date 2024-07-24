//-----------------------------------------------------------------------------
// TP3 Exercice 7
 #include <stdio.h>

//mettre ici les prototypes des fonctions

 int main(void) {
	int annee;

	//entree des variables
	printf("Entrez l'annee :");
	scanf("%d",&annee);

	//version avec tests imbriques et drapeau
	if (isbissextile(annee))
        printf("%d est bissextile\n",annee);
	else
		printf("%d n'est pas bissextile\n",annee);

    //version avec un seul test
	if (isbissextile2(annee))
        printf("%d est bissextile\n",annee);
	else
		printf("%d n'est pas bissextile\n",annee);

    return 0;
 }

//mettre ici les définitions des fonctions
