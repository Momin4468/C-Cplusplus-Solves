#include<stdio.h>
int main()
{
    int X,a;
    scanf("%d",&X);
    for(a=1;a<=X;a++)
    {
        if(a%2!=0)
            printf("%d\n",a);
        }
        return 0;
}
