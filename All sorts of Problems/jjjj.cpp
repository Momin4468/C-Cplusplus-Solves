#include<stdio.h>
int main()
{
    float a,b,c,h=0,p;
    int i;
    for(i=1;i<4;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        p=(a+b+c)/3;
        printf("average = %.2f\n",p);
        if(h<p)
            h=p;
    }
    printf("The highest number is %.2f\n",h);
    return 0;
}
