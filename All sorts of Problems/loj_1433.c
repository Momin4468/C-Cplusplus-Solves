#include<stdio.h>
#include<math.h>


int main(){
   int i,T,ox,oy,ax,ay,bx,by,A,B,C,D;
   double r,oti,theta,arc;
   scanf("%d", &T);

   for(i=1;i<=T;i++){
   scanf("%d%d%d%d%d%d", &ox, &oy, &ax, &ay, &bx, &by);
   A = (ax-ox)*(ax-ox);
   B = (ay-oy)*(ay-oy);
   C = (ax-bx)*(ax-bx);
   D = (ay-by)*(ay-by);
   r = sqrt(A + B);
   oti = sqrt(C + D);
   theta = acos(r/(oti/2.0));

   theta = acos(((r*r)+(r*r)-(oti*oti))/(2*r*r));
   arc = r * theta;

   printf("Case %d: %lf\n", i, arc);
   }
  return 0;
}


