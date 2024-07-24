#include <stdio.h>

int main(void)
{
    int a = 5;
    char c = 'A';
    float x = 10.8;

    printf(" a = %d\nc = %c (code ascii : %d)\nx = %f\n\n",a,c,c,x);

    printf("a+x \t\t= %\n", a+x);
    printf("a+c \t\t= %\n",a+c);
    printf("(a+1)/a \t= %\n", (a+1)/a);
    printf("(a+1.)/a \t= %\n", (a+1.)/a);
    printf("2 x + a \t= %\n", 2*x+a);
    printf("x / 2 * a \t= %\n", x/2*a);
    printf("a / 2 * x \t= %\n", a/2*x);

    //printf("\na/10 \t\t= %d\n",a/10);
    //printf("mais si on force la division reelle\n");
    //printf("a/10 \t\t= %f\n",(float) a/10);
    //printf("autre solution : %f\n",a/10.);

    //printf("\nx modulo 3 \t= %d\n",x%3);

    return 0;
}
