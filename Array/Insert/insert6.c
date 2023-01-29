#include<stdio.h>
int main()
{
    int a[10],w,index[10],data[10],i,m,n;

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

    printf("\nWork Time: ");
    scanf("%d", &w);

    for(i=0;i<w;i++)
    {
    printf("\nEnter the Index(%d): ",i+1);
    scanf("%d", &index[i]);

    printf("\nEnter New Data(%d): ",i+1);
    scanf("%d", &data[i]);
    }

    for(i = n-1; i>=index[0]; i--)
    {

            a[i+1] = a[i];

    }
    a[index[0]] = data[0];

     for(i = n; i>=index[1]; i--)
    {
        a[i+1] = a[i];
    }
    a[index[1]] = data[1];

     for(i = n+1; i>=index[2]; i--)
    {
        a[i+1] = a[i];
    }
    a[index[2]] = data[2];

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n+3; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

 return 0;

}


