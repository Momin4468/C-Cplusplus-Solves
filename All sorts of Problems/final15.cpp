#include<stdio.h>
int A()
{
    int a=5,b=2,c;
    return (a+b);
}
int B()
{
    printf("Wow Wow");
}
int main()
{
   int sum;
   sum=A();
   printf("%d\n",sum);
   B();
}
