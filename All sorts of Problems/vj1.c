#include <stdio.h>

int binary(int num)
{
    int  binary_val, decimal_val = 0, base = 1, rem;
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
   return decimal_val;
}

int main(){

       int a,b,c,d,e,f,g,h,t,i;

       scanf("%d", &t);
       for(i=1;i<=t;i++){

          scanf("%d.%d.%d.%d",&a,&b,&c,&d);
          scanf("%d.%d.%d.%d",&e,&f,&g,&h);

       e = binary(e);
       f = binary(f);
       g = binary(g);
       h = binary(h);

       if(a==e && b==f && c==g && d==h) printf("Case %d: Yes\n",i);
       else printf("Case %d: No\n",i);

       }

   return 0;
}
