#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int x,y;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        }
    }
    for(x=1;x<=11;x++)
    {
        for(y=0; y<=x-1; y++)
        {
            a+=M[x][y];
        }
    }
    if(T[0]=='S')
        printf("\n%.1lf\n",a);
    else if(T[0]=='M')
    {
            a=a/66.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
