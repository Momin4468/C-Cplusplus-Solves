#include<stdio.h>
int main()
{
    int x,y,n,c,d=1;
    scanf("%d%d%d",&x,&y,&n);
    while(x<=y)
    {
        c=(x-n);
        d=c*d;
        x=x+1;
    }
    if(d==0)
    {
        printf("Left\n");
    }
    else
    {
        printf("Right\n");
    }
    return 0;
}
