#include<stdio.h>
int main()
{
    double A,B,C,Pi=3.14159,D1,D2,D3,D4,D5;
    scanf("%lf%lf%lf",&A,&B,&C);
    D1=0.5*A*C;
    D2=Pi*C*C;
    D3=0.5*(A+B)*C;
    D4=B*B;
    D5=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",D1,D2,D3,D4,D5);
    return 0;
}

