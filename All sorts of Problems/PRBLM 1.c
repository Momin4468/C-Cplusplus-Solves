#include<stdio.h>
int main()
{
    int a,b,p,n;
    for(a=1;a<=5;a++){
        scanf("%d",&b);
        if (b<0){
            n=n+1;
        }
        else{
            p=p+1;
        }
    }
    printf("%d\t%d",p,n);
    return 0;
}
