#include<stdio.h>
int main()
{
    int a,c=0;
    float d,b=0.0;
    a=0;
    while(a<=100)
    {
        printf("(1/%d)",a);
if(a<100){
            printf("+");
        }
        d=1.0/a;
        b=d+b;
        c=c+1;
        a=a+1;

    }
    printf("\nsum = %0.3f\n",b);
    printf("loop ghurse  \%d bar\n",c);
    return 0;
}
