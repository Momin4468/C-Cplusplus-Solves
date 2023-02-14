#include <stdio.h>

// Function to print binomial table
int printbinomial(int max)
{
    for (int m = 0; m <= max; m++) {
        printf("%2d", m);
        int binom = 1;
        for (int x = 0; x <= m; x++) {

            // B(m, x) is 1 if either m or x is
            // is 0.
            if (m != 0 && x != 0)

                // Otherwise using recursive formula
                // B(m, x) = B(m, x - 1) * (m - x + 1) / x
                binom = binom * (m - x + 1) / x;

            printf("%4d", binom);
        }
        printf("\n");
    }
}

// Driver Function
int main()
{
    int max = 10;
    printbinomial(max);
    return 0;
}

