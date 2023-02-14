#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,n,T,y,w,z,d1,e,f,d2;
    char c[1],b[1];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        y=0;e=0;f=0;b[1]='+';
        for(j=1;j<=n;j++)
        {
            scanf("%c",c);
            scanf("%d",&x);
            if (strcmp(c,b)==0)
            {
               // d1=w+x;
                e=e+x;
            }
            else
            {
                //d2=w-x;
                f=f-x;
            }
           // "z=w(%c)x",c;
           // y=z+y;
            scanf("%c",c);

        }
        z=1000+e+f;
       // printf("%d",z);
        printf("Case %d: %d\n",i,z);
    }
    return 0;
}
