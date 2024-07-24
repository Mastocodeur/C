#include <stdio.h>

int main(void)
{
    int a;
    do
        printf("veuillez entrer un nombre compris entre 1 et 20 : ");
        scanf("%d",&a);
    while (1<=a && a<=20);

    printf("\nBravo !\n");

    return 0;
}
