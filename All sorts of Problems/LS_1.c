#include<stdio.h>
int main()
{
    int a[100],n,item,pos,i;

    printf("Enter array size: \n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: \n");
    scanf("%d", &item);

    int flag =0;
    for(i=0;i<n;i++){
      if(item==a[i]){
        flag =1;
        pos = i;
        break;
      }
    }

    if(flag==1)
         printf("The item is found at position %d which is: %d\n",pos+1,item);
    else
         printf("Item is not found.");

    return 0;

}
