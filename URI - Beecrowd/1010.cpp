#include<stdio.h>
int main()
{
    int A,B,C,D;
    float E,F,T;
    scanf("%d%d%f%d%d%f",&A,&B,&E,&C,&D,&F);
    T=(E*B)+(F*D);
    printf("VALOR A PAGAR: R$ %.2f\n",T);
  return 0;
}

