#include <stdio.h>

//prototypes des fonctions



//programme principal



//NE RIEN MODIFIER SOUS CETTE LIGNE
//fonction renvoyant le pgcd de ses 2 entrees
int pgcd(int a,int b)
{
    while (a*b) {
        if (a>b)
            a-=b;
        else
            b-=a;
    }
    return (a+b);
}
