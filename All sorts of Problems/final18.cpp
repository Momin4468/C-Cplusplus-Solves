#include<stdio.h>
int main()
{
    int a[10][10],i,j,sum,k=0;
     for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);

        }

    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("The sum of raw number %d is %d\n",i+1,sum);
        k=k+sum;
    }
    printf("The total sum is %d\n",k);
    return 0;
}
