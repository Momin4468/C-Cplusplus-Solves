#include<stdio.h>

int A()
{
    long long int sum,a[100];
    int i,n;
    scanf("%d", &n);
    sum = 0;
    for(i=0; i<n; i++){
        scanf("%lld", &a[i]);
        sum = sum + a[i];
    }
    return (printf("%lld\n",sum));
}

int main()
{
   A();

}
