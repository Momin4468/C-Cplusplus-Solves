#include<stdio.h>
int main()
{
   int i,j,k,arr[101][102];
   int n;


     while(scanf("%d", &n) != EOF){

        k =n-1;
        int arr[n][n];


        for(i=0; i<n; i++){

            for(j=0;j<n;j++){

                    arr[i][j] = 3;
                    if(i == j ) arr[i][j] = 1;
                    if(j == k) arr[i][j] = 2;
            }k--;
        }

        for(i=0; i<n; i++){

            for(j=0;j<n;j++){

                printf("%d", arr[i][j]);

            }
            printf("\n");
        }
    }
    return 0;
}

