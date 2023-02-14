#include<stdio.h>
int main()
{
    int T,i;
    long long int x,p,c,d,f,j;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        c=0;d=0;
        scanf("%lld", &x);
        for(j=x;j>=1;j--){
        p=x%j;
        if(p==0)
            c=c+1;
        else
            d=d+1;
        }
        f=c+d;
        if(f%2==0)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
