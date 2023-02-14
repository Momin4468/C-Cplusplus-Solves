#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

int main(){
   double a,b,c,A,B,C,P,P1,p,X,Y,Z,area;
   int i,t;
   scanf("%d", &t);

   for(i=1;i<=t;i++){
   scanf("%lf%lf%lf", &a, &b ,&c);
   if(a==b && b==c) area =  (0.16125448*a*a);
   else{
    A = a+b;
    B = b+c;
    C = c+a;
    p = (A+B+C)/2;
    P = sqrt(p*(p-A)*(p-B)*(p-C));
    X=acos((B*B+C*C-A*A)/(2*B*C));
    Y=acos((A*A+C*C-B*B)/(2*C*A));
    Z=acos((A*A+B*B-C*C)/(2*A*B));
    P1= 0.5*((Y*a*a)+(Z*b*b)+(X*c*c));
    area = P - P1;
   }
   printf("Case %d: %lf\n", i,area);
   }
  return 0;
}
