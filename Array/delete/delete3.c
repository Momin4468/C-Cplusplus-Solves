#include<stdio.h>
int main()
{
    int a[10],index[10],data,i,j,n,w,l;

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
int temp;
    for(i=0;i<w;i++){
        for(j=i+1;j<w;j++){
            if(index[i]<index[j]){
                temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }
 j = 0;
    while(j<w){

     for(i = index[j]; i<=n; i++){
              a[i] = a[i+1];
        }
    j++;
  }
   printf("The data in array after deletion-\n ");
   for(i=0; i< n-w; i++)
   {
       printf("%d ", a[i]);
   }

 return 0;

}
