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
   int d=0;
    for(x=1;x<=5;x++)
    {

        for(y=0; y<=d; y++)
        {
            a+=M[x][y];
        }
      d++;
    }

   int e=4;
    for(x=6;x<=10;x++)
    {

        for(y=e; y>=0; y--)
        {
            a+=M[x][y];
        }
      e--;
    }

    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
            a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}

