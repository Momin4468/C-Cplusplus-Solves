#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

double a[101],b[101];

double d(int x, int y){
   double dx = a[x] - a[y];
   double dy = b[x] - b[y];
   return sqrt((dx*dx)+(dy*dy));
}

int main (){

  double r,ans;
  int n,i;
  scanf("%d %lf", &n, &r);
  for(i=0;i<n;i++){
    scanf("%lf %lf", &a[i], &b[i]);
  }

  ans = d(n-1,0);
  for(i=1;i<n;i++){
    ans = ans + d(i-1,i);
  }
  ans = ans + (2*pi*r);
  printf("%.2lf\n", ans);
  return 0;

}
