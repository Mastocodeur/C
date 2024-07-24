//-------------------------------------------------------------------
// TP 5 Exercice 4

#include <stdio.h>
#define NMAX	20

//prototypes des fonctions
void LirTab(int[],int); //fonction qui remplit le tableau
void AffTab(int[],int); //fonction qui affiche le tableau
float MoyTab(int[],int);//fonction qui renvoie la moyenne du tableau
int PosTab(int[],int);  //fonction qui renvoie le nombre d'elements positifs du tableau
int ImaxTab(int[],int); //fonction qui renvoie l'indice du maximum du tableau
int InTab(int[],int,int);//fonction qui indique si une valeur donnée est présente dans le tableau

int main (void) {
	int imax,n,npos,x,present,tab[NMAX];
	float moyenne;


	//saisie du tableau
	do {
		printf("entrez la taille du tableau (entre 1 et %d) : ",NMAX);
		scanf("%d",&n);
	} while (n<1 || n>NMAX);

	LirTab(tab,n);
	AffTab(tab,n);
	moyenne=MoyTab(tab,n);
	npos=PosTab(tab,n);
	imax=ImaxTab(tab,n);

	printf("entrez la valeur recherchee : ");
	scanf("%d",&x);
	present=InTab(tab,n,x);

	//affichage
	printf("la moyenne est %f\n",moyenne);
	printf("il y a %d elements strictement positifs\n",npos);
	printf("le max vaut %d, c'est l'element %d du tableau\n",tab[imax],imax+1);
	if (present)
        printf("la valeur %d est presente dans le tableau\n",x);
    else
         printf("la valeur %d n'est pas presente dans le tableau\n",x);

    return 0;
}

//fonction remplissant le tableau tab de taille n
void LirTab(int tab[],int n)
{
    int i;
    printf("entrez les %d valeurs :\n",n);
	for (i=0;i<n;i++)
		scanf("%d",&tab[i]);
}

