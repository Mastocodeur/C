#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
#define NMAX 12

//Prototpyes des fonctions
int edice(int);             //génération d'un nombre entier aléatoire
double RandVal(double);     //génération d'un nombre réel aléatoire

int TailleTab(void);        //saisie de la taille du tableau
void RempTab(int[],int);    //remplissage du tableau
void AffTab(int[],int);     //affichage du tableau
void PermTab(int[],int);    //permutation des cases du tableau

//Programme principal
int main(void)
{
    int n,T[N];

    srand(time(0));

    //on lit la taille du tableau
    n=TailleTab();

    //on remplit du tableau
    RempTab(T,n);

    //on affiche le tableau
    AffTab(T,n);

    //on permute les cases du tableau
    PermTab(T,n);

    //on reaffiche le tableau
    AffTab(T,n);

    return 0;
}

//fonction permettant la saisie de la taille du tableau
int TailleTab(void)
{
   int n;
   do {
        printf("entrez la taille du tableau (<= %d) : ",N);
        scanf("%d",&n);
    } while (n<1 || n>N);

    return n;
}

//fonction générant un nombre entier aléatoire entre 1 et n
int edice(int n)
{
    return (1+rand()%n);
}

//fonction générant un nombre réel aléatoire entre 0 et max
double RandVal(double max)
{
    double a;
    a=((double) rand())/RAND_MAX;   //a compris entre 0 et 1
    a=max*a;                        //a compris entre 0 et max
    return a;
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

//fonction affichant le tableau T de taille n
void AffTab(int T[],int n)
{
    int i;
    printf("\nVoici le tableau :\n");
    for(i=0;i<n;i++)
        printf("%d ",T[i]);
}

//fonction permutant le contenu du tableau T de taille n
void PermTab(int T[],int n)
{
    int tampon,i;

    printf("\n\nPermutation en cours....");
    //on parcourt le tableau
    for (i=0;i<n;i++)
    {
        //on permute la case i avec la case (n-1)-i
    }
    printf("terminee\n");
}
