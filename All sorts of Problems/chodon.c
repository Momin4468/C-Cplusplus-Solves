#include<stdio.h>
int main()
{
    float a,b,c1,c2,c3,c4,avg;
    printf("enter   two numbers\n");
    scanf("%f%f", &a,&b);
    c1=a/b;
    c2=a+b;
    c3=a-b;
    c4=a*b;
    avg=(c1+c2+c3+c4)/4;
    printf("%.2f\n%.2f\n%.2f\n%.2f\n", c1,c2,c3,c4);
    printf("avg = %.2f",avg);





    return 0;
}
