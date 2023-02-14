#include<stdio.h>
#include<math.h>


int main(){
   double v1,v2,v3,a1,a2,d,dis,d1,d2,t1,t2,t;
   int i,T;
   scanf("%d", &T);

   for(i=1;i<=T;i++){
   scanf("%lf%lf%lf%lf%lf", &v1, &v2, &v3, &a1, &a2);

   t1 = v1/a1;
   t2 = v2/a2;
   d1 = 0.5*a1*t1*t1;
   d2 = 0.5*a2*t2*t2;
   d = (d1+d2);
   if(t1>=t2) t = t1;
   else t = t2;
   dis = v3*t;

   printf("Case %d: %lf %lf\n", i,d,dis);
   }
  return 0;
}

