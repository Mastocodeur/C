#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
#define NMAX 12

//Prototpyes des fonctions
int edice(int);             //génération d'un nombre aléatoire
void RempTab(int[],int);    //remplissage du tableau
int MinTab(int[N]);         //valeur minimum du tableau

//Programme principal
int main(void)
{
    int n,i,somme,min,T[N];
    double moy;

    srand(time(0));

    do {
        printf("entrez la taille du tableau (<= %d) : ",N);
        scanf("%d",&n);
    } while (n<1 || n>N);

    //on remplit du tableau
    RempTab(T,n);

    //on affiche le tableau
    printf("Voici le tableau :\n");
    for(i=0;i<n;i++)
        printf("%d ",T[i]);

    //on calcule et on affiche la moyenne
    somme=0;
    for (i=0;i<n;i++)
        somme=somme+T[i];
    moy=somme/n;
    printf("\nmoyenne = %f\n",moy);

    //on recherche et on affiche le minimum
    min=MinTab(T);
    printf("valeur minimum : %d\n",min);
    return 0;
}

//fonction générant un nombre aléatoire entre 1 et n
int edice(int n)
{
    return (1+rand()%n);
}

//fonction remplissant le tableau T de taille N avec des nombres aléatoires
void RempTab(int T[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        T[i]=edice(NMAX);
    }
}

//fonction renvoyant le minimum du tableau T
int MinTab(int T[N])
{
    int min,i;

    //on initialise le minimum a la 1ere valeur
    min=T[0];
    //on recherche dans le reste du tableau
    for (i=1;i<N;i++)
    {
        if (T[i]<min)
            min=T[i];
    }
    //une fois tout le tableau parcouru, on renvoie le minimum
    return min;
}
