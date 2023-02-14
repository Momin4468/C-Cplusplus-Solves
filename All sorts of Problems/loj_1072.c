#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

int main(){

 int i,t,n;

 double R,r,s;

 scanf("%d", &t);
 for(i=1;i<=t;i++){
    scanf("%lf %d", &R, &n);
    s = sin(pi/(n*1.0));
    r = (R*s)/(1+s);
    printf("Case %d: %lf\n",i,r);
 }
return 0;
}
//https://math.stackexchange.com/questions/1956853/finding-radius-of-a-circle-inside-of-a-circle
