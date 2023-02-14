#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int i,r1,r2,c1,c2,t,c,r;

    scanf("%lld", &t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld %lld %lld", &r1, &c1, &r2, &c2);
        c = abs(c2-c1);
        r = abs(r2-r1);
        if(c==r) printf("Case %d: 1\n",i);
        else {
            if(c%2 == r%2) printf("Case %d: 2\n",i);
            else  printf("Case %d: impossible\n",i);
        }
    }
   return 0;
}
