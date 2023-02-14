#include<stdio.h>
int main()
{
     int n,i,p,q = 0 ;

     scanf("%d", &n);

     for(i = 0; i<n; i++)
     {
         scanf("%d",&p);
         if(p%3 == 0) q++;
     }
     printf("%d\n",q);
}
