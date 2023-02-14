#include <stdio.h>
int main()
{
    int N,X,Y,A,i,c;
    scanf("%d", &N);
    for(A=1;A<=N;A++)
    {
        scanf("%d%d",&X,&Y);

        if(X==Y)
        {
            c=0;
        }
        else if(X<Y){
                c=0;
        for(i=X+1;i<Y;i++)
        {
            if(i%2!=0)
            {
                c=i+c;

            }
        }


        }
        else if(X>Y){
                c=0;
        for(i=Y+1;i<X;i++)
        {
            if(i%2!=0)
            {
                c=i+c;

            }
        }
    }
         printf("%d\n",c);
    }
    return 0;
}
