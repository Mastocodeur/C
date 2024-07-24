//-----------------------------------------------------------------------------
// TP3 Exercice 8
 #include <stdio.h>

//mettre ici le prototype de la fonction

 int main(void) {
	int N;      //nombre de personnes dans le foyer
	double RT;   //Revenu total
	int PA;     //présence de personne agee (1:oui / 0:non)
	int FR;     //Personne de la famille royale (1:oui / 0:non)
	double IR;  //impots sur le revenu

	//entree des variables
	printf("Entrez le nombre de personnes : ");
	scanf("%d",&N);
    printf("entrez le revenu total : ");
    scanf("%lf",&RT);
    printf("personnes agees dans le foyer (1:oui/0:non) : ");
    scanf("%d",&PA);
    printf("membres de la famille royale dans le foyer (1:oui/0:non) : ");
    scanf("%d",&FR);

	//appel de la fonction
	IR=Impots_Bordures(RT,N,PA,FR);

	//affichage du résultat
	printf("l'impot a payer est de %.2f couronnes bordures\n",IR);

    return 0;
 }

//mettre ici la définition de la fonction
