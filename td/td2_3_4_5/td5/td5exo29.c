#include <stdio.h>


int main(void)
{
    int i,j,f;

    //remplissage du talbeau
    for (i=0;i<N;i++)
    {
        //on calcule i!
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        //on copie f=i! dans la case n°i du tableau
        T[i]=f;
    }

    //on affiche le tableau
    printf("Voici le tableau :\n");
    printf("%d",T);

    return 0;
}
