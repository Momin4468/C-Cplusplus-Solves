#include<stdio.h>


    int t,j;
    long long int num,r,sum1,sum,reve1;


int main()
{

     int t,j;
    long long int num,r,sum1,sum,temp;

    scanf("%d",&t);

    while(t>0){

    j = 0;
    scanf("%lld", &num);
    sum1 = num;
    sum = 0;

    while(1){
    j++;
    sum1 = sum + sum1;
    sum = 0;
      while(temp != 0){
        r = temp%10;
        sum = sum * 10 +r;
        temp = temp/10;
      }
    if(sum == sum1){
        printf("%d %lld\n",j,reve1);
        break;
    }
  }
  t--;
}

    return 0;
}
