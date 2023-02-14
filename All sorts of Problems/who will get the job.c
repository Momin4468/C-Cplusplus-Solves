#include<stdio.h>
int main()
{
    int n,i,a[100],Max=0;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    Max = a[0];
     for(i=1;i<n;i++)
    {
        if(Max<a[i]) Max = a[i];
    }
    printf("%d\n", Max);
}
