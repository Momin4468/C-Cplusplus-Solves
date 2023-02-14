
#include<stdio.h>
int main(){

  int m,n,i,j,k,A[100],B[100],DOU[100][100];

  printf("Enter Size for two array: ");
  scanf("%d %d", &m,&n);

  printf("\nEnter %d data for Array 1: ",m);
  for(i=0;i<m;i++){
    scanf("%d", &A[i]);
  }

  printf("\nEnter %d data for Array 2: ",n);
  for(i=0;i<n;i++){
    scanf("%d", &B[i]);
  }

  for(i=0;i<=n;i++){
    for(j=0;j<=m;j++){
        DOU[i][j] = 0;
    }
  }

  printf("\n\n Initial table before comparing: \n");
  for(i=0;i<=n;i++){
    for(j=0;j<=m;j++){
      printf("%d  ", DOU[i][j]);
    }
   printf("\n");
  }


  //NOW LETS COMPARE:

  int F=1,M=1,I[n],J[m],val,a=0,K=0,New[n];

  for(j=0;j<n;j++){
        M=1;
    for(i=0;i<m;i++){

        if(B[j]==A[i]){
                //printf("\nmilese\n");
            New[K] = A[i];
            val = DOU[F][M];
            DOU[F][M] = DOU[F-1][M-1]+1;
            K++;
            if(val!=DOU[F][M]){
                I[a] = i; J[a] = j;
                a++;
            }
        }
        else{
            if(DOU[F-1][M]>DOU[F][M-1]){
                DOU[F][M] = DOU[F-1][M];
            }
            else{
                DOU[F][M] = DOU[F][M-1];
            }
        }
        M++;
    }
   F++;
  }


  printf("\n\n Final table after comparing: \n");
  for(i=0;i<=n;i++){
    for(j=0;j<=m;j++){
      printf("%d  ", DOU[i][j]);
    }
   printf("\n");
  }

  printf("So the LIS data is: ");
  for(i=0;i<K;i++){
    printf(" %d ",New[i]);
  }


}
