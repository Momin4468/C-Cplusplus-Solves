#include<stdio.h>
int main()
{
    int a[10],w,index[10],data[10],i,j,k,m,n,temp,position;

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

    temp =0;
       for ( i= 0; i < (w - 1); i++)
  {
    position = i;

    for (j = i + 1; j < w; j++)
    {
      if (index[position] > index[j])
        position = j;
    }
    if (position != i)
    {
      temp = index[i];
      index[i] = index[position];
      index[position] = temp;
       temp = data[i];
      data[i] = data[position];
      data[position] = temp;
    }
  }

   for(j=0;j<w;j++)
    {

    for(i = n-1; i>=index[j]; i--)
    {

        a[i+1] = a[i];

    }
     a[index[j]] = data[j];
     n++;
    }

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

 return 0;

}



