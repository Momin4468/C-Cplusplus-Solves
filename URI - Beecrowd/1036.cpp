#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y;
    scanf("%f%f%f",&a,&b,&c);

    x=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    y=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

    if (a!=0&&(b*b-(4*a*c))>0)
    printf("R1 = %.5f\nR2 = %.5f\n",x,y);
    else printf("Impossivel calcular\n");
    return 0;

}
