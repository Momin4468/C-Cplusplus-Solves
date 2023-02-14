#include<stdio.h>
int main()
{
    int i=0,a=0,b=0,c=0,d=0;
    while(i<=100){
            a=a+i;
        printf("%d\n",i);
        i=i+1;
        //a=a+i;
    }
    printf("sum = %d\n",a);
    i=0;
     while(i<=100){
         b=b+i;
        printf("%d\n",i);
        i=i+2;
       // b=b+i;
    }
    printf("sum = %d\n",b);
    i=1;
     while(i<=100){
          c=c+i;
        printf("%d\n",i);
        i=i+2;
        //c=c+i;
    }
    printf("sum = %d\n",c);
    d=b+c;
    printf("%d = %d + %d\n%d\n",d,b,c,a);
}
