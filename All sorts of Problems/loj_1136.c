#include<stdio.h>
int main()
{
    long long int i,a,b,t,res,A,B;

    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld", &a, &b);
        a = a-1;
        A = (a/3)*2;
        B = (b/3)*2;
        if(a%3==2) A = A+1;
        if(b%3==2) B = B+1;
        res = B-A;
        printf("Case %lld: %lld\n",i,res);
    }
    return 0;
}



//code okay but time limit

/*
      int  k = 0;
      res = (b-a)+1;
      if(a%3==1){
            while(a<=b){
                a = a+3;
                k++;
            }
        }
        else if(a%3==0){
            a=a+1;
            while(a<=b){
               a = a+3;
               k++;
            }
        }
        else if(a%3==2){
            a = a+2;
            while(a<=b){
               a = a+3;
               k++;
            }
        }
*/
