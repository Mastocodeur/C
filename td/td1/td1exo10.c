#include <stdio.h>

int main(void)
{
    int n = 8 , p = 9 , q = 20, r;

    r=n+q/p;
    printf("1. r = %d\n",r);

    r=(n+q)/p;
    printf("2. r = %d\n",r);

    r=(n+q)%p;
    printf("3. r = %d\n",r);

    r=n+q%p;
    printf("4. r = %d\n",r);

    r=n*p/p;
    printf("5. r = %d\n",r);

    r=n/p*p;
    printf("6. r = %d\n",r);

    return 0;
}
