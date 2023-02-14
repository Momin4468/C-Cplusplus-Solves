#include<stdio.h>
int main()
{
    int i,j=5,k,m=0,p;

    for(i=1;i<=9;i=i+2)
    {
         j=j+2;
        for(k=1;k<4;k++)
        {
            printf("I=%d J=%d\n", i,j);
            j--;
        }
        m=m+1;
        j=7;

        for(p=2;p<=m;p++)
        {
            j=j+2;

        }

    }
    return 0;
}
