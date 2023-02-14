#include<stdio.h>
int main()
{
    int i, a[10];

    for(i = 0; i<3; i++)
    {
       scanf("%d", &a[i]);
    }

    for(i = 0; i<3; i++)
    {
       printf("%d  ", a[i]);
    }
    printf("\n");
    a[1] = 10;

     for(i = 0; i<3; i++)
    {
       printf("%d  ", a[i]);
    }



}
