#include<stdio.h>

int A()
{
    int n,i,sum,a[1000];
    scanf("%d", &n);
    sum = 0;
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    return (sum);
}

int main()
{
    int s = A();
    printf("%d\n", s);
}
