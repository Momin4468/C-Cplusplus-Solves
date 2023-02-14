#include<stdio.h>
int binarysearch(int A[],int low,int high,int x)
{
    int mid;

    if(low>high)  return 1;
    mid=(low+high)/2;

    if (x==A[mid]){
        return mid;
    }
    else if(x<A[mid]){
        return binarysearch(A,mid+1,high,x);
    }
    else{
        return binarysearch(A,low,mid-1,x);
    }
}

int main()
{

   int A[100],n,i,low=0,high,position,x;
   scanf("%d",&n);
   high=n-1;

   for(i=0; i<n; i++){
       scanf("%d",&A[i]);
   }

   printf("Enter the element to search: ");
   scanf("%d",&x);
   position= binarysearch(A,low,high,x);

   if(position!=-1)  printf("\n number is found at position: %d\n",position+1);

   return 0;
}
