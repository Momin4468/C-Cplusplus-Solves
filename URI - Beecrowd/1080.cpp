#include<stdio.h>
int main()
{
    int i,a,Max=0,j;

    for(i=1;i<=100;i++)
    {
        scanf("%d", &a);
        if(a>Max)
        {
            Max = a;
            j=i;
        }
    }

    printf("%d\n%d\n",Max,j);
    return 0;
}
