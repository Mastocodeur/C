#include <stdio.h>

int main(void)
{
    int a=5, b=8;
    printf("avant permutation :\t a = %d, b = %d\n",a,b);

    a=b;
    b=a;

    printf("apres permutation :\t a = %d, b = %d\n",a,b);

    return 0;
}
