#include<stdio.h>
int main()
{
    printf("\nThe program is about inserting two or more elements in a array in a continuous index\n\n");
    int a[10],index,data[10],i,m,n;

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

    printf("Enter how many data you want to add here: ");
    scanf("%d", &m);

    for(i=0;i<m;i++)
    {
    printf("\nEnter New Data(%d): ",i+1);
    scanf("%d", &data[i]);
    }

    for(i = n-1; i>=index; i--)
    {
        a[i+m] = a[i];
    }

    for(i=0; i<m; i++){
    a[index] = data[i];
    index++;
    }

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n+m; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

 return 0;

}


