#include <stdio.h>


int main(void)
{
    double R,Rg,A;

    welcome();

    printf("entrez la resistance R : ");
    scanf("%lf",&R);
    printf("entrez la resistance Rg : ");
    scanf("%lf",&Rg);

    A =  gain(R,Rg);
    printf("le facteur d'amplification du montage est  : %.2f\n",A);

    return 0;
}


void welcome()
{
    printf("\t\t         ____________________________________________\n");
    printf("\t\t________|    __                 ___                  |_______\n");
    printf("\t\t\\       |   |__|                 |                   |      /\n");
    printf("\t\t \\      |   |  |MPLIFICATEUR D' _|_NSTRUMENATION     |     /\n");
    printf("\t\t /      |____________________________________________|     \\\n");
    printf("\t\t/__________)                                     (__________\\\n\n");

}

double gain(double R, double Rg)
{
    return 1+2*R/Rg;
}
