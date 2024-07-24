#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NMAX 12

int edice(int);

int main(void)
{
    int n,i;
    int T[n];

    srand(time(0));

    printf("entrez la taille du tableau : ");
    scanf("%d",&n);

    //remplissage du tableau
    for (i=0;i<n;i++)
    {
        T[i]=edice(NMAX);
    }

    //on affiche le tableau
    printf("Voici le tableau :\n");
    for(i=0;i<n;i++)
        printf("T_%d  = %d\n",i,T[i]);
    return 0;
}

int edice(int n)
{
    return (1+rand()%n);
}
