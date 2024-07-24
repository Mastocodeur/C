//-------------------------------------------------------------------
// TP 5 exercice 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main (void) {
	int i;
	int A[N], B[N];

    srand(time(0));

	//remplissage des tableaux
	for (i=0;i<N;i++) {
		A[i]=i;
		B[i]=rand()%10;
	}


	return 0;
}









