#include<stdio.h>

int main()
{
    int i,j,t,n;
    long long a[710][710],l=1000000010,sum=0,c=0,e;
    scanf("%d",&t);

    while(t--)
    {
       scanf("%d",&n);
        for(i=1;i<=n;i++){
          for(j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
        }
      }


       for(i=1;i<=n;i++)
       {
           e=-1;

           for(j=1;j<=n;j++)
           {
               if(a[i][j]>e && a[i][j]<l)
               {
                   e=a[i][j];
                   printf("%lld\n",e);
               }
           }
           if(e==-1)
           {
               c=1;
               break;
           }
           l=e;
           sum+=e;
       }
       if(c==1)
           printf("-1\n");
       else
       printf("%lld\n",sum);
    }


   return 0;
}
