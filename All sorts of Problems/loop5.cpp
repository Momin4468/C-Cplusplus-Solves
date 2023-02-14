#include<stdio.h>
int main ()
{
    int a;
    float d,b=0;
    a=1;
    while(a<=100)
    {
        printf("1/%d",a);
        if(a<100)
        {
            printf("+");
        }
        d=1.0/a;
        b=d+b;
        a=a+1;
    }
    printf("\nsum = %.2f\n",b);
    return 0;
}
