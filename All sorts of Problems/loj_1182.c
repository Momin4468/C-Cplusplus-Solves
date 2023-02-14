#include <stdio.h>
#include <math.h>
long long int convertDecimalToBinary(long long int n);
int main()
{
    long long int t,n,i,r;
    scanf("%lld", &t);
    for(i=1;i<=t;i++){
        scanf("%lld", &n);
        r = convertDecimalToBinary(n);
        if(r%2==0) printf("Case %d: even\n",i);
        else printf("Case %d: odd\n",i);
    }
    return 0;
}
long long convertDecimalToBinary(long long int n)
{
    long long binaryNumber = 0,k=0;
    int remainder;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        if(remainder==1) k++;
    }
    return k;
}
