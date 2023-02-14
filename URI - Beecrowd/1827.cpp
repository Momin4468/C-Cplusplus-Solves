
#include<stdio.h>
int main()
{
   int i,j,o,s,k,arr[101][102];
   int n;


     while(scanf("%d", &n) != EOF){



        s = n/3;
        o = n/2;
        k = n-1;
        int arr[n][n];


        for(i=0; i<n; i++){

            for(j=0;j<n;j++){

                    arr[i][j] = 0;
                    if(i == j ) arr[i][j] = 2;
                    if(j == k) arr[i][j] = 3;
                    if( i>=s && i<n-s && j>=s && j<n-s ) arr[i][j] = 1;
                    if(i == j && i == o) arr[i][j] = 4;
            }
            k--;
        }
        for(i=0; i<n; i++){

            for(j=0;j<n;j++){

                printf("%d", arr[i][j]);

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
