#include <stdio.h>
int main()
{
    int a,b,MIN,e=1,i;
    scanf("%d", &a);
    int ara[a];
    for(i=0; i<a; i++)
        scanf("%d", &ara[i]);
    MIN=ara[0];
    for(i=0; i<a; i++)
    {
        if(ara[i]<MIN)
        {
            MIN=ara[i];
            e=i+1;
        }

    }
    printf("%d\n", e);
    return 0;
}

