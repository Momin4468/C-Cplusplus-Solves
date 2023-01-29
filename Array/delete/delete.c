#include<stdio.h>
int main()
{
    int a[10],index,data,i,n;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array data are --\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the Index: ");
    scanf("%d", &index);

    for(i = index; i<=n-1; i++)
    {
        a[i] = a[i+1];
    }

   printf("The data in array after deletion-\n ");
   for(i=0; i< n-1; i++)
   {
       printf("%d ", a[i]);
   }

 return 0;

}

