#include<stdio.h>
int main()
{
    int a[10],index[10],data,i,j,k,n,w,l,p;

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

    for (i = 0; i < w; ++i)
        {

            for (j = i + 1; j < w; ++j)
            {

                if (index[i] < index[j])
                {

                    k =  index[i];
                    index[i] = index[j];
                    index[j] = k;

                }

            }

        }

   for(p=0;p<w;p++){
  for(l=index[p]; l<n; l++)
  {

        a[l] = a[l+1];
  }
   n--;
}


   printf("The data in array after deletion-\n ");
   for(i=0; i< n; i++)
   {
       printf("%d ", a[i]);
   }

 return 0;
}

