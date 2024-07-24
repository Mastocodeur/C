//------------------------------------------------------------------------
//TP3 Exercice 1

#include <stdio.h>
int div7(int);

 int main(void) {
	int n;


	printf("Entrez un nombre entier :\n");
	scanf("%d",&n);

	if(div7(n))
		printf("%d est divisible par 7\n",n);
	else
		printf("%d n'est pas divisible par 7\n",n);

	return 0;
 }

//fonction renvoyant 1 si l'entier passé en argument est divisible par 7
//et renvoyant 0 sinon
int div7(int n)
{
    if (n/7==n/7.)
        return 1;
    else
        return 0;
}
