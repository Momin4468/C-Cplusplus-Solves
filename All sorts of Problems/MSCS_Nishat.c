#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    int ara[n], max_sum[n], suffic_max[n];
    int sm = 0, ms = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++){
        sm = sm + ara[i];

        if(sm >= 0){
            suffic_max[i] = sm;
        }
        else{
            suffic_max[i] = 0;
        }

        if(sm > ms){
            max_sum[i] = sm;
        }
        else{
            if(i == 0){
                max_sum[i] = sm;
            }
            else{
                max_sum[i] = max_sum[i - 1];
            }
        }

        ms = max_sum[i];
        sm = suffic_max[i];
    }

    for(i = 0; i < n; i++){
        printf("%d ", max_sum[i]);
    }

    printf("\n");

    for(i = 0; i < n; i++){
        printf("%d ", suffic_max[i]);
    }

    printf("\n");

    return 0;
}
