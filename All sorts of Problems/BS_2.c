#include<stdio.h>
int main()
{
    int a[100],n,item,pos,i,beg,end,mid;

    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter %d elements in descending order: \n",n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: \n");
    scanf("%d", &item);

    beg = 0; end = n-1;
    mid = ((beg+end)/2);
    pos = mid;

    while(item!=a[mid] && beg<=end){
      if(item>a[mid]){
        end = mid - 1;
      }
      else{
        beg = mid + 1;
      }

      mid = ((beg+end)/2);
      pos = mid;
    }

    if(beg<=end)
         printf("The item is found at position %d which is: %d\n",pos+1,item);
    else
         printf("Item is not found.");

    return 0;

}

