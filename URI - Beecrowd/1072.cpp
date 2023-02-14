#include<stdio.h>
int main()
{
    int N,X,a,c=0,d=0;
    scanf("%d",&N);
    for(a=1;a<=N;a++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20) c++;
        else d++;
    }
    printf("%d in\n%d out\n",c,d);
    return 0;
}
