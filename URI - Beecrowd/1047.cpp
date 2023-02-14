#include <stdio.h>
int main()
{
    int st, sm, et, em, pm, pt;
    scanf("%d %d %d %d", &st, &sm, &et, &em);
    pt = et - st;
    pm = em - sm;
    if (pt < 0&&pm < 0)
    {
        pt = 24 + (et - st);
         pm = 60 + (em - sm);
        pt--;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", pt, pm);

    }
       else if (pt>0&&pm < 0)
    {
        pm = 60 + (em - sm);
        pt--;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", pt, pm);
    }
    else if (pt==0 && pm<0)
    {
         pt=24;
         pm = 60 + (em - sm);
        pt--;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", pt, pm);
    }
   else if (pt==0 && pm==0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", pt, pm);
     return 0;
}
