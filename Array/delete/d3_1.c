#include<stdio.h>
int main()
{
    int a[10],index[10],data,i,j[10],n,k[10],w,l;

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

    for(i=0; i<w; i++)
    {
    printf("\nEnter the Index(%d): " , i+1);
    scanf("%d", &index[i]);
    }

    for(i=0; i<w; i++)
    {
    if(index[i]<index[i+1])
      {
        k[i] = index[i];
        j[i] = index[i+1];
      }
    else
       {
        k[i] = index[i];
        j[i] = index[i+1];
       }
    }

  for(l=0; l<w; l++)
  {
    for(i = k[l]; i<=n-1; i++)
    {
        if(i+1 == j[l])
        {
          a[i] = a[i+2];
        }
        else
         a[i] = a[i+1];
    }
  }


   printf("The data in array after deletion-\n ");
   for(i=0; i< n-w; i++)
   {
       printf("%d ", a[i]);
   }

 return 0;

}
