#include<stdio.h>
int main()
{
    int i,n;

    double s = 0.0;
     i=1;
    while(i <= n){
        s = s + (1.0 / i);
        i=i+2;
    }

    printf("%.2lf\n", s);

    return 0;
}
