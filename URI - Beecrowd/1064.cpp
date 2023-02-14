#include <stdio.h>
int main()
{
    double a,b,c;
    int x,y=0;
    for(x=1;x<=6;x++)
    {
        scanf("%lf", &a);
        if(a>=0)
        {
            y=y+1;
            b=a+b;
        }
    }
    c=b/y;
    printf ("%d valores positivos\n",y);
    printf("%.1lf\n", c);
    return 0;
}
