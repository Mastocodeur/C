#include <stdio.h>

int main(void)
{
    int a;

    printf("entrez un nombre entier : ");
    scanf("%d",&a);

    if (10<=a<=20)
        printf("a est compris entre 10 et 20\n");
    else
        printf("a n'est pas compris entre 10 et 20\n");


    if(a=42)
        printf("Vous avez trouvez la réponse à la grande question sur la vie, l'univers et le reste !\n");
    else
        printf("essayez encore\n");


    return 0;
}
