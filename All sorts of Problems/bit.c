#include<stdio.h>
int main()
{
    int x=0,n;
    char c[10];
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",c);
       if (c[1] == '+')
            ++x;
        else
            --x;
    }
    printf("%d\n", x);
    return 0;
}
