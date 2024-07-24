#include <stdio.h>

int main(void)
{
    int i = 7 ;
    float f = 5.5 ;
    char c = 'w' ;

    if (i >= 6 && c == 'w')
        printf("oui\n");
    else
        printf("non\n");

     if (i >= 6 || c == 119)
        printf("oui\n");
    else
        printf("non\n");

       if ((5+i)<10)
        printf("oui\n");
    else
        printf("non\n");

       if (5+(i<10))
        printf("oui\n");
    else
        printf("non\n");

       if (i+3<2*f)
        printf("oui\n");
    else
        printf("non\n");

    if (i/2 == 3.5)
        printf("oui\n");
    else
        printf("non\n");

    return 0;
}

