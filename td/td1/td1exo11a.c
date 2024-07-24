#include <stdio.h>

int main(void)
{
    char c = 'a';
    int a = 4 , b = 5 ;
    float x = 3.2 ;

    printf("A : a = %d\t b = %d\t c = %c\t x = %f \n",a,b,c,x);
    x = 3 * x ;
    c = c + 23 ;
    a = a + 1 ;
    b = 8 * a + 2 ;
    printf("B : a = %d\t b = %d\t c = %c\t x = %f \n",a,b,c,x);
    c = '\n';
    printf("C : a = %d\t b = %d\t c = %c\t x = %f \n",a,b,c,x);

    return 0;
}
