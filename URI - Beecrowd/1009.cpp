#include<stdio.h>
int main()
{
   char C[100];
   double A,B,D;
   scanf("%s%lf%lf",&C,&A,&B);
   D=A+((B*15)/100);
   printf("TOTAL = R$ %.2lf\n",D);
    return 0;
}

