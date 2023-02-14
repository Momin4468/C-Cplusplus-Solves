#include<stdio.h>
#include<math.h>

int main()
{
        int list[1001];
     int i,j;
     for(i=1;i<=1000;i++)
     list[i]=0;

     for(i=1;i<=1000;i++)
     {
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
           list[i]+=j;

        }
     }

    int p,r,s,n,q=1;

   while(scanf("%d",&n)==1)
    {
       if(n==0)
         break;

        r=0;

       for(i=1000;i>=1;i--)
       {
       if(list[i]==n)
           {
           r++;
           p = i;
           break;
           }
       }

        if(r==1)
        {
            printf("Case %d: %d\n",q,p);
        }
        else
        {
            printf("Case %d: %d\n",q,-1);
        }

        q++;

    }

    return 0;
}
