#include<stdio.h>
int main()
{
    int a[10],w,index[10],data[10],i,j,q,k[10],l[10],m,n,p,d,c,position,swap1,swap2;

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

    k[i] = index[i];
    }

     for (c = 0; c < (w - 1); c++)
  {
    position = c;

    for (d = c + 1; d < w; d++)
    {
      if (index[position] > index[d])
        position = d;
    }
    if (position != c)
    {
      swap1 = index[c];
      index[c] = index[position];
      index[position] = swap1;
       swap2 = data[c];
      data[c] = data[position];
      data[position] = swap2;
    }
  }


printf("\nFollowing was written to understand the sort.\n");
   for(p=0;p<w;p++)
    {
        q = index[p];
        printf("%d\n",q);
        j = data[p];
        printf("%d\n",j);
        printf("\n");

    for(i = n-1; i>=index[p]; i--)
    {

        a[i+1] = a[i];

    }
     a[index[p]] = data[p];
     n++;
    }

   printf("\n\n");
   printf("So the new array is--\n");

   for(i=0; i< n; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

 return 0;

}
