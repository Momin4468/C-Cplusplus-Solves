#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    while(scanf("%d%d",&a,&b)!=EOF){
        d = 0;
        a = a-1;
        if(b>1){
           b = b-1;
           d = a/b;
        }
        e = a+d+1;
        printf("%d\n",e);
    }
    return 0;
}
