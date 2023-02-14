#include<stdio.h>
int main(){

  int t,n,x,y,i,j;

  scanf("%d", &t);
  for(j=1;j<=t;j++){

    scanf("%d%d%d", &n, &x, &y);
    i = 2;
    while(i<n){
        if((i%x==0)&&(i%y!=0)) printf("%d ",i);
        i++;
    }
    printf("\n");
  }
  return 0;
}
