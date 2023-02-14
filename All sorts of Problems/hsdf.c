#include<stdio.h>
#include<math.h>

int main(){

  int t,i,n,sum,j,gcd;

  scanf("%d", &t);
  for(i=1;i<=t;i++){
    scanf("%d", &n);
    sum = 0;
    for(i=1;i<n-1;i++){
      gcd = 0;
      for(j=1; j <= i && j <= n; ++j)
    {
        if(i%j==0 && n%j==0)
            gcd = j;
    }
    if(gcd>1) sum = sum + i;
    }
    printf("%d\n",sum);
  }
  return 0;
}
