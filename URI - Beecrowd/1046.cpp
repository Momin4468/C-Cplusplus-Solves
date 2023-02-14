#include <stdio.h>
int main()
{
    int st, et, pt;
    scanf("%d %d", &st, &et);
    pt = et - st;
    if (pt < 0)
    {
        pt = 24 + (et - st);
        printf("O JOGO DUROU %d HORA(S)\n", pt);
    }
   else if (pt==0)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n", pt);
    return 0;
}
