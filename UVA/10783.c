#include<stdio.h>
int main()
{
    int i,j,k,l,m,s;

    scanf("%d", &l);

    for(i =1; i<=l; i++)
    {
        s = 0;
        scanf("%d %d", &j, &k);

        for(m = j; m<=k; m++)
        {
            if(m%2==1) s = s+m;
        }
        printf("Case %d: %d\n", i,s);
    }
    return 0;
}
