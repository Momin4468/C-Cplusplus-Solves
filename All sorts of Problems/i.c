#include<stdio.h>
int main()
{
    int i,j,k,l,s;

    scanf("%d", &l);

    for(i =1; i<=l; i++)
    {
        scanf("%d %d", &j, &k);
        s = j+k;
        printf("%d\n", s);
    }
    return 0;
}
