#include<stdio.h>
int main()
{

  int i,j,k,l,n,m,t,sum,s=0,w,p;
  scanf("%d",&t);

  for(l=1;l<=t;l++){
    k = 1; sum = 0;
    scanf("%d %d",&n,&m);
    w = n/2*m;
    while(w<=n){
     for(j=k;j<=w;j++){
      if(p<=m){
           sum = sum + (-j);
       }
      else sum = sum + j;
      p++;
      }
      k = w+1; w = w+w;p=1;
     }
     printf("Case %d: %d\n",l,sum);
    }
  return 0;
}

