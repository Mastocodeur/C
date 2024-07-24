#include <stdio.h>

double CalculReq(double R1,double R2);

int main(void)
{
    double R1,R2,R;

    printf("entrez R1 : ");
    scanf("%lf",&R1);

    printf("entrez R2 : ");
    scanf("%lf",&R2);

    R=CalculReq(R1,R2);
    printf("Req = %lf\n",R);

    return 0;
}

double CalculReq(double Ra, double Rb)
{
    double R;

    R=Ra+Rb;
    R=Ra*Rb/R;

    return 0;
}
