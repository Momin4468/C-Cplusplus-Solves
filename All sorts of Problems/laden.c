#include<stdio.h>
int main(){

int a,b,c,d;

scanf("%d%d%d", &a,&b,&c);

while(1){
     if(a==0&&b==0&&c==0) break;
     b = b*2;
     c = c*5;
     d = (a+b+c)-1;
     printf("%d\n",d);
     scanf("%d%d%d", &a,&b,&c);
 }
 return 0;
}
