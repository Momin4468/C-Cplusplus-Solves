#include<stdio.h>

int main ()
{
    long long int n,f,l,r,d;
    scanf("%lld %lld", &n, &f);
    d = n/2;
    if(f>d){
        l = f - d;
        if(n%2!=0) l = l-1;
        r = l * 2;
    }
    else if(f<=d){
        r = (f * 2) - 1;
    }
    printf("%lld\n",r);
    return 0;
}
