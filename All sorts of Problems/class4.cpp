#include<stdio.h>
int main()
{
    int a,b,c1,c2,c3,c4,d;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    c1=a+b;
    c2=a-b;
    c3=a*b;
    c4=a/b;
    d=(c1+c2+c3+c4)/4;
    printf("%d\n%d\n%d\n%d\n",c1,c2,c3,c4);
    printf("%d",d);
    return 0;
}
