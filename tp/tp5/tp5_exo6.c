//---------------------------------------------------------------------
//TP 5 Exercice 6
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 101

//prototypes des fonctions
int de_elec(int);

//programme principal
int main(void)
{
    int i,n,p,T[N],p2;

    srand(time(0));  //initialisation des nombres aleatoires

    do {
        printf("nombre de faces de votre de : ");
        scanf("%d",&n);
    } while (n<1 || n>100);

    do {
        printf("nombre total de lancers : ");
        scanf("%d",&p);
        if (p<=0)
            printf("rentrez une valeur positive !!\n\n");
    } while (p<=0);



    return 0;
}

//definition des fonctions
int de_elec(int a) {
    return (1+rand()%a);
}
