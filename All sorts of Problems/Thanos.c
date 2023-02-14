#include<stdio.h>

struct T{
long long int hi,si;
}a[10000];

int main()
{
    int n,t,i,j;
    long long int Y,x,z;

    for( i =1; i<=t; i++)
    {
        long long int Max = 0;
        int p =0;

        scanf("%d", &n);
        for(j = 0; j<=n; j++){
            scanf("%lld %lld", &a[i].hi, &a[i].si);
        }

        Max = a[0].si;
         for(j=1;j<=n;j++){
            if(Max<a[j].si){
                Max = a[j].si;
                p = j;
            }
         }
          x =Max; z =  a[p-1].si;
          printf("the value of %lld and %lld", x, z);
          Y = x - z;

     printf("Case #%d: %lld\n", i, Y);

    }


}
