#include <stdio.h>
#include <math.h>

void swap(int* n, int *m);

int main(){
    int c;
    int n, m;

    scanf("%d", &c);

    int i=0;
    for (i=0; i<c; i++){
        scanf("%d %d", &n, &m);


        printf("%d\n", 1+(int)floor(log10(pow(n, m))));
    }
}

