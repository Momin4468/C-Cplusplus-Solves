#include<stdio.h>
int main()
{
      int i,j,a,b,c;
    scanf("%d",&j);
     for(i=1;i<=j;i++){
        scanf("%d %d",&a,&b);
        c = a%b;
        printf("%d\n",c);
     }
}
