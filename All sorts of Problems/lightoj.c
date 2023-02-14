#include<stdio.h>
#include<math.h>

int main()
{

    long long int t,i,p,a[65535];
    double x;


    scanf("%lld", &t);
    for(i=1;i<=t;i++){
        scanf("%lld", &p);
        x = sqrt(8*p-7);
        if((x - (int)x)==0) a[i-1] =1;
        else a[i-1]=0;
    }
    for(i=0;i<t;i++){
        printf("%d",a[i]);
        if(i<t-1) printf(" ");
    }
   return 0;
}
//2147450881
