#include<stdio.h>
int main()
{
    long long int n;
    int i,t,M = 1000000007,d;

    scanf("%lld",&t );

    for(i =1; i<=t; i++)
    {
        scanf("%lld", &n);
        d = n%M;


        printf("Case %d: %d\n", i,d);
    }
    return 0;
}
