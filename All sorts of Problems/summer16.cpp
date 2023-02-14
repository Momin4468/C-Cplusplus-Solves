#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        printf("%d is maximum",a);
    else if(b>a&&b>c&&b>d)
        printf("%d is maximum",b);
    else if(c>b&&c>a&&c>d)
        printf("%d is maximum",c);
    else if(d>b&&d>c&&d>a)
        printf("%d is maximum",d);
    return 0;
}
