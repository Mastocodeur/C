#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NMAX 20

int edice(int n);

int main(void)
{
    int n,a=0;

    //initialisation des nombres aleatoires
    srand(time(0));
    printf("le pregramme va generer des nombres aleatoires entre 1 et %d\n",NMAX);
    printf("quelle valeur visez-vous : ");
    scanf("%d",&n);

    while(n!=a);
        a=edice(NMAX);
        printf("valeur aleatoire : %d\n",a);

    printf("Bravo, la cible a ete atteinte !\n");

    return 0;

}

int edice(int a)
{
    return (1+rand()%a);
}
