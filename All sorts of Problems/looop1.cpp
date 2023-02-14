#include <stdio.h>

int main()
{
    int i, j;

    for(i = 7; i >=3; i--){
        for(j = i; j <= 7; j++){
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
