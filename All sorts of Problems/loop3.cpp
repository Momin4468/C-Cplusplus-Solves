#include<stdio.h>
int main()
{
    int a,n;
    float d,b=0;
    a=1;
    while(a<=n)
    {
        printf("1/%d",a);
        if(a<n)
           {
              printf("+");
           }
        d=1.0/a;
        b=b+d;
        a=a+2;
    }
    printf("\nsum of the above series = %f",b);
    return 0;
}
