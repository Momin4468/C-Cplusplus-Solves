#include<stdio.h>
int main()
{
    int a[10],index,data1,data2,i,n;

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

    printf("\nEnter New Data(1): ");
    scanf("%d", &data1);

    printf("\nEnter New Data(2): ");
    scanf("%d", &data2);

    for(i = n-1; i>=index; i--)
    {
        a[i+2] = a[i];
    }
    a[index] = data1;
    a[index+1] = data2;

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n+2; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

 return 0;

}

