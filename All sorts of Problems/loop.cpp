#include<stdio.h>
int main()
{
    int a,b1=0,c1=0,b2,c2,b3,c3;
    a=0;
    while(a<=100)
    {
        printf("%d\t",a);
        b1=a+b1;
        c1=c1+1;
        a=a+1;
    }
    printf("\nsum = %d\n",b1);
    //printf("loop ghurbe = %d",c1);
     a=0;b2=0;c2=0;
    while(a<=100)
    {
        printf("%d\t",a);
        b2=a+b2;
        c2=c2+1;
        a=a+2;
    }
    printf("\nsum = %d\n",b2);
  //  printf("loop ghurbe = %d",c2);
     a=1;b3=0;c3=0;
    while(a<=100)
    {
        printf("%d\t",a);
        b3=a+b3;
        c3=c3+1;
        a=a+2;
    }
    printf("\nsum = %d\n",b3);
   // printf("loop ghurbe = %d",c3);
    return 0;
}
