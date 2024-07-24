#include <stdio.h>

int biz1(int);
int biz2(int,int);

int main(void)
{
    int a,b;

    printf("entrez 2 entiers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("biz1=%d biz2=%d\n",biz1(a),biz2(a,b));

    return 0;
}

int biz1(int a)
{
  return a*((a>0)-(a<0));
}

int biz2(int a, int b)
{
  return (a+(b-a)*(b>a));
}
