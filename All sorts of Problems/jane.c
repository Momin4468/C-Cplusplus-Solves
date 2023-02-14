#include<stdio.h>
#include<math.h>
int main(){

int t,i;

double r,ar,are,area;
double pi = 2* acos(0.0);

scanf("%d", &t);

for(i = 1;i<=t; i++){
    scanf("%lf", &r);

    ar = pi*r*r;
    are = 4*r*r;

    area = are - ar;

    printf("Case %d: %.2lf\n",i,area);
}
return 0;

}
