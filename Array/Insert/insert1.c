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

    printf("\nEnter New Data: ");
    scanf("%d", &data);

    for(i = n-1; i>=index; i--)
    {
        a[i+1] = a[i];
    }
    a[index] = data;

    printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n+1; i++)
   {
       printf("%d ", a[i]);
   }

   printf("\n");

 return 0;

}
