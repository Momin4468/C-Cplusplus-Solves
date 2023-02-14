#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0;
    char a[100];
    gets(a);
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
