#include <stdio.h>
int main()
{
    int i,j,a[10][10],sum;
    float avg[10],max;

    for(i=0;i<3;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
     for(i=0;i<3;i++)
    {
        sum =0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];

        }
        avg[i]=sum/3.0;
        printf("average mark of  student number %d is = %.2f\n",i+1,avg[i]);
    }

  max=avg[0];
  for(i=0;i<3;i++)
    {
       for(j=0;j<=2;j++)
        {
            if(max<avg[i])
            {
                max=avg[i];
            }

        }
    }
     printf("highest mark is %.2f\n",max);
  return 0;
}
