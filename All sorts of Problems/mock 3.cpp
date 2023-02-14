#include<stdio.h>
int main()
{
    int c,b,s,r;
    scanf("%d%d%d",&c,&b,&s);
    r=c%b;

    if(r==0)
    {
        printf("0\n");
    }
    else if(r%s==0)
    {
        printf("1\n");

    }
    else
    {
        printf("-1\n");
    }

    return 0;

}
