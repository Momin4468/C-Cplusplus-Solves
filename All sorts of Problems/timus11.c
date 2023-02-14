#include <stdio.h>
#include <math.h>

double b[128 * 1024];
int main()
{
    int i = -1;
    unsigned long long n;
    while (scanf("%llu", &n) != EOF) {
        i++;
        b[i] = sqrt(n * 1.0);
    }
    while(i >= 0) {
        printf("%.4lf\n", b[i]);
        i--;
    }
    return 0;
}
