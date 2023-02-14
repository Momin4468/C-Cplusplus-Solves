#include<stdio.h>
int main()
{
    int A,B,C,D,E,F,G,H,N1,N2,N3,N4,N5,N6,N7;
    scanf("%d",&A);
    B=(A%100);N1=(A-B)/100;
    C=(B%50);N2=(B-C)/50;
    D=(C%20);N3=(C-D)/20;
    E=(D%10);N4=(D-E)/10;
    F=(E%5);N5=(E-F)/5;
    G=(F%2);N6=(F-G)/2;
    H=(G%1);N7=(G-H)/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",A,N1,N2,N3,N4,N5,N6,N7);
    return 0;
}

