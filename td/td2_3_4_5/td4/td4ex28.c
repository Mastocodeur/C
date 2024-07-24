#include <stdio.h>

int main(void)
{
    int i,nt,nk;

    //initialisation des variables
    nt = 5;
    nk = 10;
    printf("vous allez faire %d tours de circuit\n",nt);
    printf("chaque tour fait %d km\n\n",nk);

    for (i=1;i<=nt;i++)
        printf("tour %d\n",i);
        for (i=1;i<=nk;i++);
            printf("\tkm %2d\n",i);

    return 0;
}
