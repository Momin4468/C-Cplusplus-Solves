#include <stdio.h>

int main()
{
    int phy, dsm, mth, prg, avg, i;

    for(i = 1; i <= 3; i++){
        scanf("%d %d %d %d", &phy, &dsm, &mth, &prg);
        avg = ((phy * 3) + (dsm * 4) + (mth * 3) + (prg * 4)) / (3 + 4 + 3 + 4);
        printf("AVG = %d\n", avg);
    }

    return 0;
}
