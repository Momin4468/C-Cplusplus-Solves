#include <stdio.h>
int main()
{
    int i,b,n;
    scanf("%d%d",&n,&b);
    int a[n];

    for ( i=1;i<=n;i++) {
        if (n%i==0) a[i-1]=i;
    }

   printf("%d\n",n*max-sum);
   return 0;
}
