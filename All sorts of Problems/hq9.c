#include<stdio.h>

int main(){

    int t,row,col,i,j,k,l,beshi,cnt;
    int a[55][55];

    scanf("%d", &t);

    for(k=1;k<=t;k++){
        scanf("%d%d", &row, &col);

       for(i=0;i<=row+1;i++){
            for(j=0;j<=col+1;j++){
                a[i][j] = 0;
            }
        }

        for(i=1;i<=row;i++){
            for(j=1;j<=col;j++){
                scanf("%d", &a[i][j]);
            }
        }
    cnt =0;beshi =0;
        for(i=1;i<=row;i++){
            for(j=1;j<=col;j++){
                if(a[i][j]>0) cnt++;
                if(a[i][j]>a[i+1][j]) beshi += a[i][j] - a[i+1][j];
                if(a[i][j]>a[i-1][j]) beshi += a[i][j] - a[i-1][j];
                if(a[i][j]>a[i][j-1]) beshi += a[i][j] - a[i][j-1];
                if(a[i][j]>a[i][j+1]) beshi += a[i][j] - a[i][j+1];

            }
        }
        printf("%d\n",cnt+beshi);
    }
   return 0;
}
