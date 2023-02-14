#include<stdio.h>
int main()
{
    int p,q,r,s,t,u;
    while(1)
    {
        scanf("%d%d%d", &p,&q,&r);
        if(p==0&&q==0&&r==0) break;
        s = p*p;
        t = q*q;
        u = r*r;
        if(s+t==u || t+u==s || s+u==t) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
