#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=9;i=i+2)
    {
        j=7;
        for(k=1;k<4;k++)
        {
            printf("I=%d J=%d\n", i,j);
            j--;
        }
    }
    return 0;
}
