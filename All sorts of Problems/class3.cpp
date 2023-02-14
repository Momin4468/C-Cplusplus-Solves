#include<stdio.h>
int main()
{
    int i=5,j=1,b=0,d=0;float a=0.0,c,k,l,avg;
    while(i<=50&&j<=10){
        printf("%d/%d",j,i);
        if(i<50)
           printf("+");
           k=i*1.0;
           //l=j*1.0;
        c=j/k;
        a=a+c;
        i=i+5;
        j=j+1;
        d=d+1;
          }
          printf("\n%d",d);
   printf("\na = %.2f",a);
   avg=a/d;
   printf("\navg = %.4f",avg);
    return 0;
}

