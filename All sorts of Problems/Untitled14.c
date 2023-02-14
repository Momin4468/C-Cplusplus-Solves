#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b&&a>c)
        {d=a;e=b;f=c;}
    else if(b>a&&b>c)
        {d=b;e=c;f=a;}
    else if(c>a&&c>b)
        {d=c;e=a;f=b;}
printf("%.1lf\n%.1lf\n%.1lf\n",d,e,f);
return 0;
}
