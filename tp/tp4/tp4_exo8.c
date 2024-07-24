//------------------------------------------------------------------------------
// TP 4 Exercice 8
#include <stdio.h>

int ispremier (int);

int main (void) {
	int n;

	printf("entrez un nombre entier : ");
	scanf("%d",&n);

	if (ispremier(n))
        printf("%d est premier\n",n);
    else
        printf("%d n'est pas premier\n",n);

    return 0;
}

//PLACER ICI LA DEFINITION DE LA FONCTION ISPREMIER










