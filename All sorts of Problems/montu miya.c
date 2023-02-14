#include<stdio.h>
int main()
{
    int i,n,j,d;
    long long int t,x,y,h;

    scanf("%lld", &t);

    for(i=0; i<t; i++)
    {
        x = 1;d= 0;y=0;
        scanf("%d", &n);

        for(j = 1; j<= n; j++){
            y = y+x;
            x = (x*2);
        }

        while(y!= 0)
            {
                y = y/2;
                d++;
            }

        printf("%d\n", d-1);
    }
}
