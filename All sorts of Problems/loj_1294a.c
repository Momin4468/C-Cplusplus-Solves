#include<stdio.h>
int main()
{
    int i,t;
    long long int m,n,sum;

    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld", &n, &m);
        sum = (n/2)*m;
        printf("Case %d: %lld\n",i,sum);
    }
   return  0;
}
//https://uz2ee.blogspot.com/2019/03/lightoj-1294-positive-negative-sign.html
