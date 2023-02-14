#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B,C,D,D1;
    scanf("%d%d%d",&A,&B,&C);
    D1=(A+B+abs(A-B))/2;
    D=(C+D1+abs(C-D1))/2;
    printf("%d eh o maior\n",D);
    return 0;
}

