#include<stdio.h>

int A[100],New[100], k=0;

int merge(int low, int mid, int high){
  int  i=low,j=mid+1, n = high;
    while(i<=n && j<=n){
        if(A[i]<A[j]){
            New[k] = A[i];
            i++;
            k++;
        }
        else{
            New[k] = A[j];
            j++;
            k++;
        }
    }



        if(i>n){

            for(int x = j; x<= n; x++){
                New[k] = A[x];
                k++;
            }
        }
        else{

            for(int x = i; x<=n; x++){
                New[k] = A[x];
                k++;
            }
        }
}


int mergesort(int low, int high){
   if(low<high){
   int  mid = (low+high)/2;
    mergesort(low,mid);
    mergesort(mid+1,high);
    merge(low,mid,high);
   }
}



int main()
{

    int size,i;

    printf("Enter Array Size: ");
    scanf("%d", &size);

    printf("\nEnter Array Elements: \n");
    for(i=0;i<size;i++){
        scanf("%d", &A[i]);
    }

    mergesort(0,size-1);

    for(i=0;i<size;i++){
        printf("%d  ", New[i]);
    }
}
