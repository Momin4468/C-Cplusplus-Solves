#include<stdio.h>
#include<math.h>

int main(){

 long long int i, j,m,res[10000],n,digit=0;

    scanf("%lld", &n);
    if(n==0){
        printf("10\n");
    }
    else if(n<10){
      printf("%lld\n",n);
      return 0;
    }
    else {
    j = 0;
    for(m=9;m>=2;m--){
       while(n%m==0){
            n = n/m;
            res[j] = m;
            j++;
        }
        if(n==1) break;
     }
      if(n>1) printf("-1\n");
      else{
        for(i=j-1;i>=0;i--){
            m  = res[i];
            digit = digit * 10 + m;
        }
        printf("%lld\n",digit);
      }
    }
 return 0;

}

