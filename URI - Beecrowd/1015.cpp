#include<stdio.h>
#include<math.h>
int main()
{
    double X1,X2,Y1,Y2,Z;
    scanf("%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2);
    Z=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
    printf("%.4lf\n",Z);
    return 0;
}

