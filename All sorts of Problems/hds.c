#include<stdio.h>

int main(){

  char sor[100],s;
  int m,n,t,i,num;

  scanf("%d", &t);
  gets(sor);
  for(i=1;i<=t;i++){
    gets(sor);
    sscanf(sor,"%c %d %d",&s,&m,&n);
    num = 0;
    if((s=='r') || (s=='Q')){
        if(m>n) num=n;
        else num = m;
        printf("%d\n", num);
    }
    else if(s=='k') {
        num = (m*n)/2;
        printf("%d\n", num);
    }
    else if(s=='K') {
        num = ((m+1)/2)*((n+1)/2);
        printf("%d\n", num);
    }
  }
 return 0;
}
