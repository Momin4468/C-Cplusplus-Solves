#include<stdio.h>
int main()
{
int i,j,k,n,A[100],S[100],M[100],s;

 printf("Enter Size for a array: ");
  scanf("%d", &n);

  printf("\nEnter %d data for Array: ",n);
  for(i=0;i<n;i++){
    scanf("%d", &A[i]);
  }

  int sum = 0;
  M[0]= 0;

 for(i=0;i<n;i++){
   sum = sum+A[i];
  if(sum<0){
   S[i] = 0;
   sum =0;
  }
  else{
   S[i] = sum;
  }
  if(i==0) M[i] = S[i];
  else if(i!=0 &&M[i-1]<S[i]){
   M[i] = S[i];
  }
  else{
   M[i] = M[i-1];
  }

 }


 for(i=0;i<4;i++){

  if(i==0){
 printf("\nIndex\t  ");
  for(j=0;j<n;j++){
    printf("%d  ",j);
  }
 }

 if(i==1){
 printf("\nArray\t  ");
  for(j=0;j<n;j++){
    printf("%d  ",A[j]);
  }
 }

 if(i==2){
 printf("\nMax Sum\t  ");
  for(j=0;j<n;j++){
    printf("%d  ",M[j]);
  }
 }

 if(i==3){
  printf("\nSuffix \t");
  for(j=0;j<n;j++){
    printf("%d  ",S[j]);
  }
 }

 }

return 0;

}
