#include<stdio.h>
int main()
{
    int a;
    float c,b=0.0;
    a=5;
    while(a<=20)
    {
        printf("(1/%d)",a);
        if(a<20)
        {
            printf("+");
        }
        c=1.0/a;
        b=c+b;
        a=a+5;
    }
    printf("\nsum = %.2f",b);

    return 0;
}

