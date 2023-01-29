#include<stdio.h>
int main()
{
    int a[10],index1,index2,index3,data1,data2,data3,i,m,n;

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

    printf("\nEnter the Index(1): ");
    scanf("%d", &index1);

    printf("\nEnter New Data(1): ");
    scanf("%d", &data1);

    printf("\nEnter the Index(2): ");
    scanf("%d", &index2);

    printf("\nEnter New Data(2): ");
    scanf("%d", &data2);

     printf("\nEnter the Index(3): ");
    scanf("%d", &index3);

    printf("\nEnter New Data(3): ");
    scanf("%d", &data3);

    for(i = n-1; i>=index1; i--)
    {

            a[i+1] = a[i];

    }
    a[index1] = data1;

     for(i = n; i>=index2; i--)
    {
        a[i+1] = a[i];
    }
    a[index2] = data2;

     for(i = n+1; i>=index3; i--)
    {
        a[i+1] = a[i];
    }
    a[index3] = data3;

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n+3; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

 return 0;

}

