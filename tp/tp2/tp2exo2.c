#include <stdio.h>
#define g 10 //acceleration de la pesanteur en m.s-2

//prototypes des fonctions
int altitude(int,int);
void accueil(void);

//programme principal
int main(void)
{
    int z,t,v0;

    accueil();
    printf("entrez la vitesse initiale (en m.s-1) : ");
    scanf("%d",&v0);
    printf("entrez le temps (en s) : ");
    scanf("%d",&t);

    z=altitude(v0,t);
    printf("au bout de %d s, l'objet sera a une altitude de %d m\n",t,z);

    return 0;
}

//fonction affichant le message d'accueil
void accueil(void)
{
    printf("########################################\n");
    printf("#                                      #\n");
    printf("#  Altitude d'un objet en chute libre  #\n");
    printf("#    avec vitesse initiale verticale   #\n");
    printf("#                                      #\n");
    printf("########################################\n\n");
}

