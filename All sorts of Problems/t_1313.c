#include<stdio.h>
int main()
{

    int i,j,n,a[101][101],temp,k,p;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
  for(p=0;p<n;p++){
   for(k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>a[p][k]){
                temp = a[p][k];
                a[p][k] = a[i][j];
                a[i][j] = temp;
            }
        }
     }
   }
  }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ", a[i][j]);
      }
   }
   printf("\n");
   return 0;
}

