#include<stdio.h>
int main()
{
    int a,t,i,j=0;

   while(scanf("%d",&t)!=EOF){

    for(i=0,j =0;i<5;i++){
        scanf("%d", &a);
         if(a==t) j++;
    }
    printf("%d\n", j);
   }
   return  0;
}
