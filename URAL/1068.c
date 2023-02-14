#include<stdio.h>
int main()
{
    long long int t,i,sum=0;
    scanf("%lld",&t);
    if(t<=1){
    for(i=t; i<=1; i++){
        sum+=i;
     }
   }
    else{
        for(i=1; i<=t; i++){
        sum+=i;
      }
    }
    printf("%lld\n",sum);
    return 0;
}
