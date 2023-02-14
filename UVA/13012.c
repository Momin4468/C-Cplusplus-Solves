#include <stdio.h>
int main()
{
    int n, m , i, cnt=0;
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0, cnt=0; i<5; i++)
        {
            scanf("%d", &m);
            if(m==n) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
