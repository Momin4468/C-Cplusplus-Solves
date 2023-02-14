#include<stdio.h>
#include<math.h>

int main(){

 int t,i;
 long long int j,m;

 scanf("%d", &t);
 for(i=1;i<=t;i++){
    scanf("%lld", &j);
    if((j%2)!=0){
      printf("Case %d: Impossible\n",i);
      continue;
    }
    else{
       m = 2;
      while(1){
        if(((j/m)%2)==1){
          printf("Case %d: %lld %lld\n",i,(j/m),m);
          break;
        }
        m=m*2;
      }
    }
 }
 return 0;

}
